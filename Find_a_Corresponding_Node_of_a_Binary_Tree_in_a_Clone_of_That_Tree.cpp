class Solution {
public:
    
    TreeNode* ans = NULL;
    
    TreeNode* getTargetCopy ( TreeNode* original , TreeNode* cloned , TreeNode* target ) {
        
        dfs ( original , cloned , target );
        
        return ans;
        
    }
    
    void dfs ( TreeNode* original , TreeNode* cloned , TreeNode* target ) {
        
        if ( original == NULL ) return;
        
        if ( original == target ) {
            
            ans = cloned;
            
        }
        
        dfs( original -> left , cloned -> left , target );
        
        dfs( original -> right , cloned -> right , target );
        
    }
};
