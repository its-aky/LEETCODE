class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        nums.sort();v=[];i=0

        while(i<len(nums)-1):
    
            if(nums[i]==nums[i+1]):
                v.append(nums[i])
                i+=2      
            
            else:
                i+=1  
        return v
