class Solution {
public:
    bool containsDuplicate(vector<int>& z) {
       sort(z.begin(),z.end());
      
        for(int y=0;y<z.size()-1;y++){
            if(z[y]==z[y+1]){
                return true;
            }
        }
       
       return false;
    }
};