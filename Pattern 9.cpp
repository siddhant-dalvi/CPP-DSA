class Solution {
  public:
    void printDiamond(int n) {
        for(int i = 1; i<=n; i++){
            
            for(int j = 0; j<n-i; j++){
                cout << " ";
            }
            
            for(int j = 1; j<=i; j++){
                cout << "* ";
            }
            
            cout << endl;
        }
        
        
        for(int i = 1; i<=n; i++){
            
            for(int j = 0; j<i-1; j++){
                cout << " ";
            }
            
             for(int j = n; j>=i; j--){
                cout << "* ";
            }
            
            
            cout << endl;
        }
    }
};
  
  
