#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        deque<int>q;
        
        int maxi = 0 , p = 0 , sum = 0;
        
        while(p != s.size()){
            
            if ( find(q.begin(),q.end(),s[p]) != q.end() ){
                
                while (find(q.begin(),q.end(),s[p]) != q.end()){
                    q.pop_front();
                    sum--;
                }
                q.push_back(s[p++]);
                sum++;
                maxi = max(maxi,sum);
                
            } else {
                q.push_back(s[p++]);
                sum++;
                maxi = max(maxi,sum);
            }
            
        }
        return maxi;
    }
};
