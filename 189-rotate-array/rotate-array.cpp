class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        list<int>l(nums.begin(),nums.end());
        k=k % nums.size();
        while(k--){
            int x=l.back();
            l.pop_back();
            l.push_front(x);
        }
        nums.assign(l.begin(),l.end());
    }
};