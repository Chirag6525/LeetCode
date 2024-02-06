#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node() : data(0), next(NULL){}
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
    node *addTwoNumbers(node *num1, node *num2){
        node *res = new node();
        node *temp;
        temp =res;
        int carry = 0;
        while(num1 != NULL || num2 != NULL){
            int sum = 0;
            if(num1 != NULL){
                sum += num1->data;
                num1 = num1->next;
            }
            if(num2 != NULL){
                sum += num2->data;
                num2 = num2->next;
            }
            sum += carry;
            carry = sum/10;
            node *n = new node(sum%10);
            temp->next = n;
            temp = temp->next;
        }
        if(carry){
            node * newNode = new node(carry);
            temp->next = newNode;
            temp=temp->next;
        }
        return res->next;
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
    s.display(first);
    cout <<  endl;
    s.display(second);
    cout << endl;
    node *r = s.addTwoNumbers(first,second);
    s.display(r);
    return 0;
}