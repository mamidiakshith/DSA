class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxi=INT_MIN;
        while(l<r){
            int le=min(height[l],height[r]);
            int b=r-l;
            maxi=max(maxi,le*b);
            if(height[l]<=height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxi;
        
    }
};