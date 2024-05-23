class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* newNode = new Node(data);
        if (!head || data < head->data) {
            newNode->next = head;
            return newNode;
        }
    
        Node* current = head;
        while (current->next && current->next->data < data) {
            current = current->next;
        }
    
        newNode->next = current->next;
        current->next = newNode;
    
        return head;
    }
};
