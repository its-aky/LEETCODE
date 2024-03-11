class Solution {
public:

    //solving by using custom comparator using lambda function

    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        int n=order.size();

        for(int i=0;i<n;i++){
            mp[order[i]]=i;
        } 

        auto comp=[&mp](char &ch1,char &ch2)->bool{
            return mp[ch1]<mp[ch2];
        };

        sort(s.begin(),s.end(),comp);

        return s;

    }
};
