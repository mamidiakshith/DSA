class Solution {
public:
    int reverse(int x) {

        long long r=0,s=0;
        bool flag=false;
        while(x!=0){
            r= x%10;
            x=x/10;
            if (s > INT_MAX / 10 || (s == INT_MAX / 10 && r > 7)) return 0;
            if (s < INT_MIN / 10 || (s == INT_MIN / 10 && r < -8)) return 0;
              s= s*10 +r;
        }

        return s;
    }
};