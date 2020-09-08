#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t,r,c=0,i,j,n,a[100000];
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]==a[i+1])
	        {
	            continue;
	        }
	        c+=(abs(a[i]-a[i+1])-1);
	    }
	    cout<<c<<"\n";
	    c=0;
	}
	return 0;
}
