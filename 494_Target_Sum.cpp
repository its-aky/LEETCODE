class Solution {
public:
    int t[1001][1001];
    void helper(vector<int>& nums,int find){

        //Values in Initialization of loops is very important 
        for(int i=1;i<=nums.size();i++){
            for(int j=0;j<=find;j++){
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);


        int find=sum+target;
        if(sum-target<0 || find%2!=0){
            return 0;
        }
        find/=2;
        if(find<0)return 0;

        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<=find;j++){
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
            }
        }

        helper(nums,find);

        return t[nums.size()][find];

        
    }
};