class Solution {
private: 
    int factorial(int n){
        const int MOD = 1e9 + 7;
        long long fact = 1;
        for(int i = 1 ; i<=n ; i++){
            fact = (fact*i)%MOD;
        }
        return fact;
    }
public:
    int numPrimeArrangements(int n) {
        const int MOD = 1e9 + 7;
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i * i <= n; i++){
            if(isPrime[i]){
                for(int j = i * i; j <= n; j += i){
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for(int i = 2; i <= n; i++){
            if(isPrime[i]) count++;
        }
        count = count%MOD;
        int nonprime = (n - count)%MOD;
        int fact1 = factorial(count);
        int fact2 = factorial(nonprime);
        int ans = (1LL*fact1*fact2)%MOD;
        return ans;
    }
};