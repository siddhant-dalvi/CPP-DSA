class Solution {
  public:
    void printSquare(int n) {
         for(int i=1-n;i<n;i++){
            for(int j=1-n;j<n;j++) cout<<max(abs(i),abs(j))+1<<" ";
            cout<<endl;
        }
    }
}
