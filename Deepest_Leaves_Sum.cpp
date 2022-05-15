class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        queue < TreeNode* > q;
        
        q.push(root);
        
        int sumOfDeepestNodes = 0, qlen = 0;
        
        while ( q.size() > 0 ) {
            
            qlen = q.size();
            sumOfDeepestNodes = 0;
            
            for ( int i = 0 ; i < qlen ; i += 1 ) {
                
                TreeNode* curr = q.front();
                q.pop();
                
                sumOfDeepestNodes += curr -> val;
                
                if ( curr -> left ) {
                    
                    q.push( curr -> left );
                    
                }
                
                if ( curr -> right ) {
                    
                    q.push( curr -> right );
                    
                }
                
            }
            
        }
        
        return sumOfDeepestNodes;
        
    }
    
};
