#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
}*first =NULL;
class Solution {
public:
    void create(int a[],int n){
        int i;
        struct node *t,*last;
        first = new node(a[0]);
        last =first;
        for(int i=1;i<n;i++){
            t = new node(a[i]);
            t->data = a[i];
            t->next = NULL;
            last->next = t;
            last = t;
        }
    }
    node* Reverse(node *head){
        node *p = head;
        node *q = NULL;
        node *r = NULL;
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
    node* getnode(node* p,int k){
        k-=1;
        while(p!=NULL && k>0){
            k--;
            p=p->next;
        }
        return p;
    }
    node* reverseKGroup(node* head, int k) {
        node *p = head;
        node *q = NULL;
        while(p!=NULL){
            node *kNode = getnode(p,k);
            if(kNode==NULL){
                if(q){
                    q->next=p;
                }
                break;
            }
            node *nextNode = kNode->next;
            kNode->next=NULL;
            Reverse(p);
            if(p==head){
                head=kNode;
            }
            else{
                q->next = kNode;
            }
            q=p;
            p =nextNode;
        }
        return head;
    }
    
    void display(){
        node *p = first;
        while(p!=NULL){
            cout << p->data << " ";
            p = p->next;
        }
    }
    void display(node *n){
        node *q = n;
        while(q!=NULL){
            cout << q->data << " ";
            q = q->next;
        }
    }
};
int main(){
    int a[] = {1,2,3,4,5};
    Solution s;
    s.create(a,5);
    s.display();
    cout << endl;
    node *r = s.reverseKGroup(first,2);
    s.display(r);
    return 0;
}