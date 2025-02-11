class Solution {
public:
    int missingNumber(vector<int>& zeta) {
        sort(zeta.begin(),zeta.end());
        int boy;
        for(boy=0;boy<zeta.size();boy++){
            if(boy != zeta[boy]){
                return boy;
            }
        }
        return zeta.size();
    }
};