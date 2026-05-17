class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
       int a, b, value = 1;
        a = 1 ;
        b = 1 ;
        for(int i = 3; i <= n  ; i++){
            value = a + b;
            a = b ;
            b = value ;
        }
        return value;
    }
};