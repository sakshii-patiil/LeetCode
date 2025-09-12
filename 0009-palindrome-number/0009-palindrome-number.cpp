class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long rev=0;

        if(x==0)
            return true;
        else if(x>0)
        {
            while(x!=0)
            {
                int d= x%10;
                rev=rev*10 + d;
                x=x/10; 
            }
            if(rev == n)
                return true;
            else
                return false;
        }
        else
            return false;
    }
};