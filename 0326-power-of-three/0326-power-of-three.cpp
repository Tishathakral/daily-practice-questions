class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0|| n==-1){
            return false;
        }
        for(int i=0;i<=32;i++){
           
            if(n==pow(3,i)){
                return true;
            }
        }
        return false;
    }
};