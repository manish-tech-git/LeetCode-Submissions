/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map <Node*, Node*> mapp;
        Node* temp = head;

        while(temp != NULL){
           Node* newNode = new Node(temp -> val);
           mapp[temp] = newNode;
           temp = temp -> next;
        }

        Node* t = head;

        while(t != NULL){
            Node* node = mapp[t];
            node -> next = (t -> next != NULL) ? mapp[t->next] : NULL;
            node -> random = (t -> random != NULL) ? mapp[t -> random]:NULL;
            t = t -> next;
            
        }

        return mapp[head];
        
    }
};