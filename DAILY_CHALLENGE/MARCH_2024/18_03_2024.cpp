class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end());
        int n=points.size();
        int end_min=INT_MAX;
        int count=0;
        int i=0;
        while(i<n){
            if(points[i][0] <= end_min){
                end_min=min(end_min,points[i][1]);
                i++;
            }

            else{
                count++;
                end_min=INT_MAX;
            }
        }

        return count+1;
    }
};
