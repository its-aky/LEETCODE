class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int start=newInterval[0];
        int end=newInterval[1];

        int n=intervals.size();
        int i=0;
        while(i<n){

            if(intervals[i][1]<start){
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][0]>end){
                break;
            }
            else{
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
            i++;
        }

        ans.push_back(newInterval);
        while(i < intervals.size()) {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    
    }
};
