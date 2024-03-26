class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        //int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        int i=0;
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
                i+=2;      
            }
            else{
                i++;
            }
        }
        return v;

        
    }
};
