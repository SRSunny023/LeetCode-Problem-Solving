/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* copyList = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tail = copyList;
    copyList->val = 0;
    copyList->next = NULL;
    while(list1!=NULL && list2!=NULL){
        if(list1->val > list2->val){
            tail->next = list2;
            list2 = list2->next;
        }
        else{
            tail->next = list1;
            list1 = list1->next;
        }
        tail = tail->next;
    }
    if(list1!=NULL && list2==NULL){
        tail->next = list1;
    }
    if(list1==NULL && list2!=NULL){
        tail->next = list2;
    }
    struct ListNode* result = copyList->next;
    free(copyList);
    return result;
}