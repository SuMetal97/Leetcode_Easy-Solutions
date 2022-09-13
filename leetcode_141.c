bool hasCycle(struct ListNode *head) {
    int count = 0;
    if( head == NULL){
        return false;
    }else if(head->next == NULL){
        return false;
    }
    struct ListNode *slow;
    struct ListNode *fast;
    slow = head;
    fast = head;
    while(count++ !=10000){
        if(slow->next == NULL ||  fast->next == NULL || fast->next->next == NULL ){
            return false;
        }
        slow = slow -> next;
        fast = fast->next->next;
        if(fast == slow ){
            return true;
        }
    }
    return false;
}
