class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()>2*(10*10*10*10*10)) return 0;
        string str;
        for(char c:s){
            if(isalnum((unsigned char )c)) str.push_back(tolower(c));
        }
        int i=0;
        while(i<(int)(str.size()/2)){
            if(str[i]!=str[str.size()-1-i]) {
                return 0;
            }
            i++;
        }
        return 1;
    }
};