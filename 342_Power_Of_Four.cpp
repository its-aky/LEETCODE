class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n<0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        if(n>1){
            double base=4.0;
           double temp=(log(n)/log(base));
           if((int)temp<temp){
               return false;
           }
        }

        return true;


        
    }
};