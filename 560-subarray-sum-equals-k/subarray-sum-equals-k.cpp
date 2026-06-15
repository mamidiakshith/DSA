class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0,prefix=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i:nums){
            prefix+=i;
            if(m.find(prefix-k)!=m.end()){
                c+=m[prefix-k];
            }
            m[prefix]++;
        }
        return c;
    }
};

