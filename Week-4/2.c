/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* copyList = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tail = copyList;
    copyList->val = 0;
    copyList->next = NULL;

    int sum, carry = 0;
    while(l1!=NULL || l2!=NULL){
        sum = 0;
        if(!l1 && l2) sum = sum + l2->val;
        else if(l1 && !l2) sum = sum + l1->val;
        else sum = sum + l1->val + l2->val;
        sum = sum + carry;
        carry = sum/10;
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = sum%10;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    if(carry){
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val = carry;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
    struct ListNode* result = copyList->next;
    free(copyList);
    return result;
}