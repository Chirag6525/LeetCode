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
    node* deleteMiddle(node* head) {
        node *p,*q;
        p = head;
        q =NULL;
        int cnt = 0;
        while(p!=NULL){
            cnt++;
            p =p->next;
        }
        if(cnt < 2) return NULL;
        cnt = (cnt/2)+1;
        int i= 1;
        p = head;
        while(i<cnt){
            q = p;
            p = p->next;
            i++;
        }
        q -> next = p->next;
        return head;

    }
};
int main(){
    int a[] = {1,2,3,4,5};
    Solution s;
    s.create(a,5);
    s.display();
    cout << endl;
    node *r = s.deleteMiddle(first);
    s.display(r);
    return 0;
}