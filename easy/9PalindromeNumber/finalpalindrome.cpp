class Solution {
public
    bool isPalindrome(int x) {
        long revs = 0;
        long orig = x;
        while(x  0){
            int r = x % 10;
            x = 10;
            revs = revs  10 + r;
        }
        if(revs == orig){
            return true;
        }
        return false;
    }
};