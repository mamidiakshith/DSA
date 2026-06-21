class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0,p=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            p+=nums[i];
            if(m.find(p-k)!=m.end()){
                c+=m[p-k];
            }
            m[p]++;
        }
        return c;
    }
};

