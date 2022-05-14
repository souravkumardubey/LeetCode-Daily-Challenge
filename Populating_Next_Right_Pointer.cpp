class Solution {
public:
    Node* connect(Node* root) {
        
        if ( !root ) return root;
        
        queue < Node* > q;
        
        q.push( root );
        
        while ( !q.empty() ) {
            
            int cnt = q.size();
            
            while ( cnt-- ) {
                
                Node* s = q.front();
                q.pop();

                if ( cnt == 0 ) {
                    
                    s -> next = NULL;
                    
                }
                else {
                    
                    s -> next = q.front();
                    
                }
				
                if ( s -> left ) {
                    
                    q.push( s -> left );
                    
                }
                
                if ( s -> right ) {
                    
                    q.push( s -> right );
                    
                }
                
            }
            
        }
        
        return root;
        
    }
};
