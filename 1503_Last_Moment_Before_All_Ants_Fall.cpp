class Solution {
public:

    //https://www.youtube.com/watch?v=G_jQvLOs7tE

    //Simple Code but inituition was difficult
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        for(int i=0;i<left.size();i++){
            ans=max(ans,left[i]);
        }

        for(int i=0;i<right.size();i++){
            ans=max(ans,n-right[i]);
        }

        return ans;
        
    }
};