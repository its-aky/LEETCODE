class Solution {
public:
//Problem:How to rotate the elements(loser to the end of array and other elements are shifted by 1) of the array as rotating them will violate the TC constraints

//Solution:

    int getWinner(vector<int>& arr, int k) {

        int n=arr.size();
        map<int,int> m;

        int first=0;
        int second=1;
        bool flag=false;
        int ans=0;

        for(int i=0;i<n-1;i++){
            if(arr[first]>arr[second]){
                second++;
                m[arr[first]]++;
                if(m[arr[first]]>=k){
                    flag=true;
                    ans=arr[first];
                    break;
                }
            }
            else{
                m[arr[second]]++;
                if(m[arr[second]]>=k){
                    flag=true;
                    ans=arr[second];
                    break;
                }
                first=second;
                second=first+1;
            }
        }

        if(flag){
            return ans;
        }

        else{
            return *max_element(arr.begin(),arr.end());
        }
        
    }
};