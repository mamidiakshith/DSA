class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        vector<string>v;
        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }
        sort(s.begin(),s.end());
        v.push_back(s);
        for(int i=0;i<k;i++){
            next_permutation(s.begin(),s.end());
            v.push_back(s);
        }
        return v[k-1];
            }
};