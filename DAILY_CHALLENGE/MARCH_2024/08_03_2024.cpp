class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int maxi=INT_MIN;
        for(auto &it:mp){
            maxi=max(maxi,it.second);
        }

        int count=0;
        for(auto &it:mp){
            if(maxi==it.second)count+=it.second;
        }        

        return count;

    }
};
