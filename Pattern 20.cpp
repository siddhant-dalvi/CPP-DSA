class Solution {
  public:
    void printTriangle(int n) {
         for(int row = 1; row <= n; row++){  
            for(int col1 = 1; col1 <= row; col1++){  
                cout<<"*";
            }
            for(int gaps = 2*(n - row); gaps >0 ; gaps--){  
                cout<<" ";
            }
            
            for(int col2 = 1; col2 <= row;col2++){ 
                cout<<"*";    
            }
            cout<<endl;  
        }
        
        for(int row2 = n-1; row2 > 0; row2--){  
            for(int col1 =1; col1 <= row2; col1++){  
                cout<<"*";
            }
            for(int gaps = 1; gaps <= 2*(n - row2);gaps++ ){  
                cout<<" ";
            }
             for(int col1 =1; col1 <= row2; col1++){ 
                cout<<"*";
            }
            cout<<endl;  
            
        }
    }
};
