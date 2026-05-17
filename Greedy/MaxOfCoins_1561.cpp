class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size()/3;
        int total = 0 ;
        for(int i = n ; i < 3*n ; i = i + 2){
            total += piles[i];
        }
        return total;
    }
};