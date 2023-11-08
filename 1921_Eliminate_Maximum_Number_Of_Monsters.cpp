class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<int> time;

        for(int i=0;i<n;i++){
            int x=dist[i]/(speed[i]);
            time.push_back(x);
        }

        sort(time.begin(),time.end());

        int ans=1;

        
        // int t=1;
        for(int i=1;i<n;i++){
            

            if(time[i]-ans<=0){
                return ans;
            }

            // ++;
            ans++;
            
        }

        return ans;
        
        
    }
};