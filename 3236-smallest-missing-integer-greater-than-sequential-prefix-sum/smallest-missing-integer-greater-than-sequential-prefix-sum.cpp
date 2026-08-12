class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                sp+=nums[i];
            }
            else{
               break;
            }
        }
        while(find(nums.begin(),nums.end(),sp)!=nums.end()){
            sp++;
        }
        return sp;
    }
};