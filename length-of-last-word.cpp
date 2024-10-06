class Solution {
public:
    int lengthOfLastWord(string s) {
      int len = s.length()-1;
      int count =0;
      for(int i = len; i>=0; i--){
        
            if(s[i] != ' '){
             count ++;
            }
            else if (count > 0) {
                return count;
            }
      } 
      return count;
    }
};
