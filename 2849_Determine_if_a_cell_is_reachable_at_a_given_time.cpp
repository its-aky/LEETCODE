class Solution {
public:

    //Focus on the given constraints
    //They are too high
    //So BFS/DFS approach won't work
    //Think of  simple solution based on O(1)
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {

        

        if(abs(sx-fx)==0 && abs(sy-fy)==0 && t==1){
            return false;
        }

        int min_time=max(abs(sx-fx),abs(sy-fy));
        if(min_time<=t){
            return true;
        }   

        return false;
        
    }
};