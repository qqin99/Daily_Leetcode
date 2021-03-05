/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a= headA;
        ListNode* b= headB;
        while (a!=b){
            if (a!=NULL) a=a->next;
            else a=headB;
            b= b==NULL ? headA:b->next;
        }
        return a; //return b should be the same, cos while loop exit when a=b 
                  //if no interaction would return both NULL 
    }
};
