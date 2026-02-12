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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==nullptr){
            return head;
        }
        vector<int>v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        k=k%n;
        while(k--){
            int x=v.back();
            v.pop_back();
            v.insert(v.begin(),x);
        }
        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=v[i++];
            temp=temp->next;
        }
        return head;
    }
};