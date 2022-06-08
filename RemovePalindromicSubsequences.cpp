class Solution {
public:
    
    bool isPalin( string n ) {
    
        string s= n;

        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s == s2;

    }
    
    int removePalindromeSub(string s) {
        
        if ( count(s.begin(),s.end(),'a') == s.size() || count(s.begin(),s.end(),'b') == s.size() ) return 1;
        
        if ( isPalin(s) ) return 1;
        
        return 2;
        
    }
};
