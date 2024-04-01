#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* create(int a[],int n){
        int i;
        struct ListNode *t,*first,*last;
        first = new ListNode(a[0]);
        last =first;
        for(int i=1;i<n;i++){
            t = new ListNode(a[i]);
            t->val = a[i];
            t->next = NULL;
            last->next = t;
            last = t;
        }
        return first;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        ListNode *head= new ListNode(-1);
        ListNode *temp = head;
        for(int i=0;i<n;i++){
            ListNode *temp1 = lists[i];
            while(temp1!=NULL){
                pq.push(temp1->val);
                temp1 = temp1->next; 
            }
        }
        while(!pq.empty()){
            ListNode *newNode = new ListNode(pq.top());
            pq.pop();
            head->next = newNode;
            head =head->next;
        }
        return temp->next;
        
    }
    void display(ListNode *n){
        ListNode *q = n;
        while(q!=NULL){
            cout << q->val << " ";
            q = q->next;
        }
    }
};
int main(){
    Solution s;
    int a[] = {1,4,5};
    int b[] = {1,3,4};
    int c[] = {2,6};
    ListNode *A = s.create(a,3);
    ListNode *B = s.create(b,3);
    ListNode *C = s.create(c,2);
    vector<ListNode*> lists {A,B,C};
    ListNode* MergedList = s.mergeKLists(lists);
    cout << "Merged List"<< endl;
    s.display(MergedList);
    return 0;
}