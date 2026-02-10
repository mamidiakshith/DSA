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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        stack<int>st1;
        while(temp!=nullptr){
            st1.push(temp->val);
            temp=temp->next;
        }
        bool flag=true;
        temp=head;
        while(temp!=nullptr){
            if(temp->val!=st1.top()){
                return false;
            }
            st1.pop();
            temp=temp->next;
        }
        return flag;

    }
};