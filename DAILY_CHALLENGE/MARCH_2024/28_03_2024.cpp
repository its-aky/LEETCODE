class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int ans=-1;
        unordered_map<int,int> mp;
        while(j<n){

            mp[nums[j]]++;

            if(mp[nums[j]]>k){
                while(mp[nums[j]]>k){
                    mp[nums[i]]--;
                    i++;
                }
                j++;
                ans=max(ans,j-i);
            }
            else{
                j++;
                ans=max(ans,j-i);
            }

        }
        ans=max(ans,j-i);

        return ans;
    }
};
