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
    bool isPalindrome(node* head) {
        if(head==NULL || head->next==NULL) return true;
        node *p,*t,*r;
        p =head;
        r = NULL;
        t =head;
        while(p!=NULL){
            node *n = new node(p->data);
            n->next = r;
            r = n;
            p=p->next;
        }
        while(t&&r){
            if(r->data==t->data){
                r=r->next;
                t=t->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
int main(){
    int a[] = {3,4,4,3};
    Solution s;
    node *t1,*t2;
    s.create(a,4);
    s.display();
    cout << endl;
    cout << s.isPalindrome(first);
    return 0;
}