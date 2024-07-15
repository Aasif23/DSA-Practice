bool detectLoop(Node* head)
{
    if (!head) 
            return false;
        
        Node *slow = head, *fast = head;
        
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) 
                return true;
        }
        
        return false;
}
