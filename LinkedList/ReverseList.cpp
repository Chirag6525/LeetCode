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
    node* reverseList(node* head) {
        node *p = head;
        node *q=NULL;
        node *r = NULL;
        while(p!=NULL){
            r =q;
            q = p;
            p=p->next;
            q->next = r;
        }
        return q;
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
    node *r = s.reverseList(first);
    s.display(r);
}