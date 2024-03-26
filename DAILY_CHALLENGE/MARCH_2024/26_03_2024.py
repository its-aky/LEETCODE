class Solution:

    def firstMissingPositive(self, nums: List[int]) -> int:
        INT_MAX=1e9+7
        n=len(nums)
        for i in range(0,n):
            if(nums[i]<=0):
                nums[i]=INT_MAX-1

        for i in range(0,n):
            index=abs(nums[i])-1
            if(index<n and nums[index]>0):
                nums[index]*=-1

        for i in range(0,n):
            if(nums[i]>0):
                return i+1
        
        return n+1
