class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>v;
        int n=words.size();
        sort(words.begin(),words.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && words[j].find(words[i]) != string::npos){
                    v.push_back(words[i]);
                    break;
                }
            }
        }
        return v;
    }
};
