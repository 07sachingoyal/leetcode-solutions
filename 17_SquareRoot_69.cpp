class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        if(x==2) return 1;
        int s = 0;
        int e = x-1;
        int m = s+(e-s)/2;
        while(e-s>0){
            if(m> x/m){
                e = m;
            }
            else if(m<x/m){
                s = m;
            }
            else{
                return m;
            }
            m=s+(e-s)/2;
        }
        return s;
    }
};