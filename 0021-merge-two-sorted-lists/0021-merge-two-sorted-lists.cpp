/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode newnode;
        ListNode* nextnode=&newnode;
        newnode.next=NULL;

        while(list1 && list2){
            if(list1->val <list2->val){
                nextnode->next=list1;
                list1=list1->next;
            }
            else{
                nextnode->next=list2;
                list2=list2->next;
            }
            nextnode=nextnode->next;
        }
        

        if(list1){
            nextnode->next=list1;
        }
        if(list2){
            nextnode->next=list2;
        }
        return newnode.next;
    }
};