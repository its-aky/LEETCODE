class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(),max_idx=0,curr_max=0;
        for(int i=0;i<n;i++)
        {
            int id=nums[i]%n;
            nums[id]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>curr_max)
            {
                curr_max=nums[i];
                max_idx=i;

            }
            nums[i]%=n;
        }
        return max_idx;
    }
};
