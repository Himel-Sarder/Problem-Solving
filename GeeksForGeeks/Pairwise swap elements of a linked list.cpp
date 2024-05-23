Node* pairWiseSwap(Node* head) {
    if (!head || !head->next) {
        // If the list is empty or has only one element, no swaps are needed
        return head;
    }

    Node* prev = nullptr;
    Node* curr = head;
    Node* newHead = head->next;

    while (curr && curr->next) {
        Node* nextNode = curr->next;
        Node* temp = nextNode->next;

        // Perform pairwise swap
        nextNode->next = curr;
        curr->next = temp;

        // Update the previous node's next pointer
        if (prev) {
            prev->next = nextNode;
        }

        // Move to the next pair of nodes
        prev = curr;
        curr = temp;
    }

    return newHead;
}
