class Solution{
public:
    int minOperations(int n){
        int k=n/2;
        int a=k*k;
        int b=k*(k+1);
        if(n%2==0) return a;
        return b;
    }
};