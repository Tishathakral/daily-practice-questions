class Solution {
    public boolean canMakeSubsequence(String str1, String str2) {

        int j=0;
        

        for(int i=0;i<str1.length();i++){
            char ch = str1.charAt(i);
            char ch2 = str2.charAt(j);
            if(ch==ch2 || (ch+1) == ch2 || ch == 'z' && ch2 == 'a'){
                j++;
            }
            if(j == str2.length()){
                return true;
            }
        }

        return false;


    }
}