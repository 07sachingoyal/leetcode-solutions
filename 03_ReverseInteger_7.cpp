#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        int lastdigit;
        int newn=0;
        while(x!=0){
            lastdigit = x % 10 ;
            x = x/10;
            if(newn<INT_MIN/10 || newn>INT_MAX/10){
                return 0;
            }
            else{
                newn = newn*10 + lastdigit;
            }
        }
        return newn;
    }
};