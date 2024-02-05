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
    node *detectCycle(node *head) {
        if(head == NULL || head->next == NULL) return NULL;
        unordered_map<node*,int>m;
        node* p = head;
        while(p!=NULL){
            if(m.count(p)==true) return p;
            else m[p] = true;
            p = p->next;
        }
        return NULL;
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
    node *r = s.detectCycle(first);
    cout << "Tail connects to node " << r->data;
    return 0;
}