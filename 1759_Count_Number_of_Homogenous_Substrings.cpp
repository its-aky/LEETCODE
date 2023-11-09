class Solution {
public:

    int helper(int n){
        return ((n*1LL*(n+1))%1000000007)/2;
    }
    int countHomogenous(string s) {
        s.push_back('#');
        int n=0;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){

            if(s[i]==s[i+1]){
                n++;
            }
            else{
                ans+=helper(n+1);
                n=0;
            }
        }

        return ans;

        
        
    }
};