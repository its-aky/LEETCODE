class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size(),size2=nums2.size();
        int arr1[1001]={0},arr2[1001]={0};
        vector<int> v;
        for(int i=0;i<size1;i++)
        {
            arr1[nums1[i]]++;
        }
        for(int i=0;i<size2;i++)
        {
            arr2[nums2[i]]++;
        }
        for(int i=0;i<=1000;i++)
        {
            if(arr1[i]>=1 && arr2[i]>=1)
            {
                v.push_back(i);
            }
        }

        return v;


    }
};
