#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
}*second = NULL,*first =NULL;
class Solution {
public:
    void create1(int a[],int n){
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
    void create2(int a[],int n){
        int i;
        struct node *t,*last;
        second = new node(a[0]);
        last =second;
        for(int i=1;i<n;i++){
            t = new node(a[i]);
            t->data = a[i];
            t->next = NULL;
            last->next = t;
            last = t;
        }
    }
    node *getIntersectionNode(node *headA, node *headB) {
        unordered_set<node*>st;
        while(headA!=NULL){
            st.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            if(st.find(headB) != st.end()) return headB;
            headB = headB->next;
        }
        return NULL;
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
    int a[] = {4,1,8,4,5};
    int b[] ={5,6,1};
    Solution s;
    s.create1(a,5);
    s.create2(b,3);
    
    node *t = second;
    t = t->next->next;
    node *t2 = first;
    t2 = t2->next->next;
    t->next=t2;
    s.display(first);
    cout <<  endl;
    s.display(second);
    cout << endl;
    node *r = s.getIntersectionNode(first,second);
    cout << r->data;
}