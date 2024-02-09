Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>m;
        Node *p = head;
        while(p){
            Node* newNode = new Node(p->val);
            m[p]=  newNode;
            p=p->next;
        }
        p=head;
        while(p){
            Node *node = m[p];
            node->next = (p->next!=NULL)?m[p->next]:NULL;
            node->random = (p->random!=NULL)?m[p->random]:NULL;
            p=p->next;
        }
        return m[head];
}