class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string ans;
        map<char,int> m;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){

                ans.push_back('#');
                m[s[i]]++;
            }
            else{
                ans.push_back(s[i]);
            }
        }

        string temp;
        for(auto it:m){
            for(int i=0;i<it.second;i++){
                temp.push_back(it.first);
            }
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(ans[i]=='#'){
                ans[i]=temp[j];
                j++;
            }
        }

        return ans;
    }
};