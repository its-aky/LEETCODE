class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        n,max_idx,curr_max=len(nums),0,0

        for i in range(0,n):
            id=nums[i]%n
            nums[id]+=n

        for i in range(0,n):

            if(nums[i]>curr_max):
                curr_max=nums[i]
                max_idx=i
            
            nums[i]%=n
        
        return max_idx
