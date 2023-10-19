class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s_check="",t_check="";

        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(s_check.size()==0)continue;
                s_check.pop_back();
            }
            else{
                s_check.push_back(s[i]);
            }
        }

        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(t_check.size()==0)continue;
                t_check.pop_back();
            }
            else{
                t_check.push_back(t[i]);
            }
        }

        return s_check==t_check;




        
    }
};