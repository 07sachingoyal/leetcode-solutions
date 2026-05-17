class Solution{
public:
    int numberOfBeams(vector<string>& bank){
        int prev=0,ans=0;
        for(int i=0;i<bank.size();i++){
            int cur=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1') cur++;
            }
            if(cur!=0){
                ans+=prev*cur;
                prev=cur;
            }
        }
        return ans;
    }
};