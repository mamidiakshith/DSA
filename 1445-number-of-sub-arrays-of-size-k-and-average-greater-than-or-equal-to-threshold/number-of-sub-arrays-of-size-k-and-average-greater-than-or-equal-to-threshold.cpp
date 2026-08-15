class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int r = 0, l = 0, avg = 0, s = 0;
        int c=0;

        while (r < arr.size()) {
            s += arr[r];


            while ((r - l + 1) > k) {
                s -= arr[l];
                l++;
            }
             if ((r - l + 1) == k) {
                avg = s / k;

                if (avg >= threshold) {
                    c++;
                }
            }

            r++;
        }

        return c;
    }
};