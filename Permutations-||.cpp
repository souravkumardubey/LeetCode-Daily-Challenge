class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector < vector < int > > ans;
        
        map < vector < int > , int > mp;
        
        sort(nums.begin(),nums.end());
        
        do {
            
            if ( !mp[nums] ) {
                
                ans.push_back(nums);
                mp[nums] = 1;
                
            } 
            
        } while ( next_permutation(nums.begin(),nums.end()) );
        
        return ans;
        
    }
};
