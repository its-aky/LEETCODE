class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int start=0;
        int end=nums.size()-1;
        int ans=0;

        if(nums[start]<nums[end])return nums[start];//To check if array is initially sorted or not
        
        while(start<=end){
            int mid=start+((end-start)/2);
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
                return ans=nums[mid];
            }

            else{
                if(nums[start]<nums[end])return nums[start];//This condition checks whether we reached the sorted array or not, if reached return its start value


                //if not yet reached sorted array,go on moving left or right    
                if(nums[mid]>=nums[start]){
                    start=mid+1;

                }
                else if(nums[mid]<=nums[end]){
                    end=mid-1;
                }
            }
        }

        return ans;

    
        
    }
};