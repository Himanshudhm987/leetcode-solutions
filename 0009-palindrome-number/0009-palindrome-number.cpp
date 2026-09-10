class Solution {
public:
    bool isPalindrome(int x) {
        if (x>=INT_MAX && x<=INT_MIN) return 0;
        int num=x;
        long long int s=0;
        while(x>0){
            int r=x%10;
             s=s*10+r;
            x=x/10;
        }
        if(s==num) return 1;
        else return 0;
    }  
};