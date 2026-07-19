class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            int k=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>res={nums[i],nums[j],nums[k]};
                    v.push_back(res);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;

                }
            }
            i++;
        }
        return v;
    }
};