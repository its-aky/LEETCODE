class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        map<int,long long> m;

        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        for(int i=1;i<n;i++){
            long long count=0;
            for(int j=0;j<i;j++){

                if(arr[i]%arr[j]==0){
                    if(m.find(arr[i]/arr[j])!=m.end()){
                        count+=m.find(arr[j])->second * m.find(arr[i]/arr[j])->second;
                    }
                }
            }

            m.find(arr[i])->second+=count;

        }

        long long sum=0;
        for(auto it:m){
            sum+=it.second;
        }

        return sum%1000000007;




        
    }
};