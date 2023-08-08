class Solution {
  public:
    void printTriangle(int n) {
         for(int row =1 ; row <= n; row++){ // Number of rows
            char ch = 65;  //initializing the ch as A
            
            for(int gaps = 1; gaps <= n - row; gaps++ ){  //loop for spaces
                cout<<" ";   
            }
            for(int col = 1; col <= 2*row - 1; col++){   //loop for columns
                if(col < row){  //for printing value and incrementing
                    cout<<ch++;  
                    
                }
                else if(col == row){  //printing last highest value of row and not incrementing thereafter
                    cout<<ch;
                }
                else if(col > row){  //printing reverse order
                    ch--;
                    cout<<ch;
                }
                
            }
            
            cout<<endl; //printing newline
        }
    }
};
