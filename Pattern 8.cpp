class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++)
                cout<<" ";
            for(int j=i;j<n;j++)
                cout<<"*";
            for(int j=i;j<=n;j++)
                cout<<"*";
            cout<<"\n";
        }
	}
};
