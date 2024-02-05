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
    node* oddEvenList(node* head) {
        if(head==NULL || head->next==NULL) return head;
        node *cur  =head;
        node *oh = NULL;
        node *eh = NULL;
        node *ot = NULL;
        node *et = NULL;
        int i =1;
        while(cur!=NULL){
            if(i %2 == 0){
                if(eh==NULL){
                    eh = et = cur;
                }
                else{
                    et->next = cur;
                    et = cur;
                }
            }
            else{
                if(oh==NULL){
                    oh=ot=cur;
                }
                else{
                    ot->next=cur;
                    ot =cur;
                }
            }
            i++;
            cur = cur->next;
        }
        if(oh!=NULL){
            head =oh;
            ot->next = eh;
            }
        else{
                head = eh;
        }
        if(et!=NULL){
                et->next = NULL;
        }
        return head;
    }
    
};
int main(){
    int a[] = {2,1,3,5,6,4,7};
    Solution s;
    s.create(a,7);
    s.display();
    cout << endl;
    node *r = s.oddEvenList(first);
    s.display(r);
    return 0;
}