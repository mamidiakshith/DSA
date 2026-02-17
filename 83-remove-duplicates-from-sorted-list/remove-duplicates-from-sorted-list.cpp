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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* temp=head->next;
        ListNode* curr=head;
        while(temp!=nullptr){
            if(temp->val == curr->val){
                ListNode* loose=temp;
                curr->next=temp->next;
                temp=temp->next;
                delete loose;
            }
            else{
                curr=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};