class Solution {
    public:
        double myPow(double x, int n) {
            if(x==0) return 0.0;
            if(n==0) return 1.0;
            if(n==1) return x;
            if(x==-1 && n%2==0) return 1.0;
            if(x==-1 && n%2!=0) return -1.0;
            if(n<0){
                x=1/x;
                n=-n;
            }
            int t=n;
            long double ans=1.0;
            while(t>0){
                if(t % 2 ==0){
                    ans=ans*x;
                }
                x=x*x;
                t=t/2;

            }
            return ans;
        }
    };