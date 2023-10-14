vector<int> dp(1001,-1);
class Solution {
public:
    //greedy approach will fail here e.g sample TC 1

    int helper(vector<int> &cost,int index){

        //base conditions
        if(dp[index]!=-1)return dp[index];
        if(index<=1)return dp[index]=0;
        if(index==2)return dp[index]=min(cost[0],cost[1]);


        return dp[index]=min(helper(cost,index-1)+cost[index-1],helper(cost,index-2)+cost[index-2]);

        

    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        fill(dp.begin(),dp.end(),-1);

        return helper(cost,n);
    }
};