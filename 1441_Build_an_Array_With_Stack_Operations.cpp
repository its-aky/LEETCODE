class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j=0,count=0;
        vector<string> ans;
        for(int i=1;i<=n;i++){
            if(j>=target.size())break;
            if(target[j]==i){
                int count_pop=count;
                while(count){   
                    ans.push_back("Push");
                    count--;
                }

                while(count_pop){   
                    ans.push_back("Pop");
                    count_pop--;
                }

                ans.push_back("Push");
                j++;
            }

            else{
                count++;
            }
        }

        return ans;
        
    }
};