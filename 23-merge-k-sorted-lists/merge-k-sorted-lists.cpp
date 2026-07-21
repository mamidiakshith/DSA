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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(ListNode* head:lists){
            while(head){
                v.push_back(head->val);
                head=head->next;
            }
        }
        if (v.empty())
            return nullptr;
        sort(v.begin(),v.end());
        ListNode* head = new ListNode(v[0]);
        ListNode* temp = head;
        int i=1;
        while(i<v.size()){
            temp->next= new ListNode(v[i]);
            i++;
            temp=temp->next;
        }
        return head;
    }
};