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
    bool hasCycle(node *head) {
        node *p,*q;
        p = q =head;
        if(p==NULL || p->next==NULL ){
            return false;
        }
        do{
            p = p->next;
            q = q->next;
            q = (q!=NULL?q->next:q);
        }while(p && q && p!=q);
        return p==q?true:false;
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
    node *t1,*t2;
    s.create(a,5);
    s.display();
    cout << endl;
    t1 = first->next->next;
    t2 = first->next->next->next;
    t2->next = t1;
    cout << s.hasCycle(first);
}