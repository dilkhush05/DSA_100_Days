class Solution {
public:
   
   
   bool isPalindrome(int n) {
         int  last ;
         long long rev=0; 
         long long temp=n;
         if(n<0) return false;
         while(n>0)
         {
            last=n%10;
            n=n/10;
            rev =(rev*10)+last;
         }
        return (temp==rev);


    }
};