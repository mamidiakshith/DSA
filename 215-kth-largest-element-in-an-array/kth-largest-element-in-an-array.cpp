class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int x;
        for(int i=0;i<k;i++){
            x=pq.top();
            pq.pop();
        }
        return x;
    }
};