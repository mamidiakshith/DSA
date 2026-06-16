class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxi=INT_MIN;
        while(l<r){
            int len=min(height[r],height[l]);
            int width=r-l;
            maxi=max(maxi,len*width);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxi;
        
    }
};