/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }; 1 3 5 
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        queue<int>q1,q2;
        int i=0;
        if(head==nullptr){
            return head;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            if(i%2==0){
                q1.push(temp->val);
            }
            else{
                q2.push(temp->val);
            }
            i++;
            temp=temp->next;
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        temp=head;
        while(temp!=nullptr){
            temp->val=q1.front();
            q1.pop();
            temp=temp->next;
        }
        return head;
    }
};