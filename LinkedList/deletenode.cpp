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
    void deleteNode(node* node) {
        node->data = node->next->data;
        node->next = node->next->next;
    }
    void display(){
        node *p = first;
        while(p!=NULL){
            cout << p->data << " ";
            p = p->next;
        }
    }
};
int main(){
    int a[] = {3,5,6,10};
    Solution s;
    s.create(a,4);
    s.display();
    cout << endl;
    s.deleteNode(first->next);
    s.display();

}