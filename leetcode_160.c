struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *A=headA;
    struct ListNode *B=headB;
    int alen = 0, blen = 0, i = 0;
    while(A!=NULL || B!=NULL){
        if(A!=NULL){
            alen++;
            A=A->next;
        }
        if(B!=NULL){
            blen++;
            B=B->next;
        }
    }
    A = headA;
    B = headB;
    if(alen >blen){
        for(i= 0; i <(alen-blen); i++){
            A = A->next;
        }
    }else if(blen>alen){
        for(i = 0; i < (blen-alen); i++){
            B=B->next;
        }
    }
    while(A!=NULL ||B!=NULL){
        if(A==B){
            return A;
        }
        A=A->next;
        B=B->next;
    }
    return NULL;  
}
