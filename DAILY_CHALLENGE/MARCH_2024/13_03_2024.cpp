class Solution {
public:
    int pivotInteger(int n) {
        vector<int> ps1;
        vector<int> ps2;
        int ps=0;
        for(int i=1;i<=n;i++){
            ps+=i;
            ps1.push_back(ps);
        }

        ps=0;
        for(int i=n;i>=1;i--){
            ps+=i;
            ps2.push_back(ps);
        }
        reverse(ps2.begin(),ps2.end());

        int m=ps1.size();
        for(int i=0;i<m;i++){
            if(ps1[i]==ps2[i])return i+1;
        }

        return -1;
    }
};
