class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        i,j,n,ans,mp=0,0,len(nums),-1,{}

        while(j<n):

            if nums[j] in mp:
                mp[nums[j]]+=1
            else:
                mp[nums[j]]=1

            if(mp[nums[j]]>k):
                while(mp[nums[j]]>k):
                    mp[nums[i]]-=1
                    i+=1
                
                j+=1
                ans=max(ans,j-i)
            
            else:
                j+=1
                ans=max(ans,j-i)

        ans=max(ans,j-i)

        return ans
            
            
        

        
