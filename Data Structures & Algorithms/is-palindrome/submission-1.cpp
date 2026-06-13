class Solution {
public:
    bool isPalindrome(string s) {
        int a=0, b=s.size()-1;
        while(a<=b){
            if((int(s[a])<97 and int(s[a])>91) or (int(s[a])<65 and int(s[a])>57) or int(s[a])<48 or int(s[a])>123){
                
                a++;
                continue;
                }
             if((int(s[b])<97 and int(s[b])>91) or (int(s[b])<65 and int(s[b])>57) or int(s[b])<48 or int(s[b])>123){
                b--;
                continue;
                
             }
             char c1=tolower(s[a]);
             char c2=tolower(s[b]);
            
            if(c1==c2){
                a++,b--;
            }
            else return false;
        }
        return true;
    }
};
