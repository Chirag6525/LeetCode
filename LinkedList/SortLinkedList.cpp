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
    node* sortList(node* head) {
        vector<int>v;
        node *p;
        p = head;
        while(p!=NULL){
            v.push_back(p->data);
            p=p->next;
        }
        int i =0;
        p=head;
        sort(v.begin(),v.end());
        while(p!=NULL){
            p->data = v[i];
            p=p->next;
            i++;
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
    int a[] = {5,3,2,4,1};
    Solution s;
    s.create(a,5);
    s.display();
    cout << endl;
    node *r = s.sortList(first);
    s.display(r);
}