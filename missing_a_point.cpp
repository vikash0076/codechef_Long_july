#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,x,y,i,j,N,p=1,q=1,x1,y1,u=0,v=0;
	vector <long long int> a;
	vector <long long int> b;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>n;
	    N=(4*n-1);
	    for(i=0;i<N;i++)
	    {
	        cin>>x>>y;
    	    a.push_back(x);
    	    b.push_back(y);
	    }
	    
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    for(i=0;i<N-1;i++)
	    {
	       if(a[i]==a[i+1])
	       {
	           p++;
	       }
	       else if(a[i]!=a[i+1])
	       {
	           //cout<<p<<" ";
	            if(p%2==0)
	           {
	                p=1;   
	           }
	           else if(p%2!=0)
	           {
	               x1=a[i];
	               u=1;
	               break;
	           }
	       }
	    }
	    if(u==0)
	    {
	        x1=a[i];
	    }
	    
	    
	    for(i=0;i<N-1;i++)
	    {
	       if(b[i]==b[i+1])
	       {
	           q++;
	       }
	       else if(b[i]!=b[i+1])
	       {
	            if(q%2==0)
	           {
	                q=1;   
	           }
	           else if(q%2!=0)
	           {
	               y1=b[i];
	               v=1;
	               break;
	           }
	       }
	    }
	    if(v==0)
	    {
	        y1=b[i];
	    }
	    
	    /*for(i=0;i<N;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	    for(i=0;i<N;i++)
	    {
	        cout<<b[i]<<" ";
	    }*/
	    cout<<x1<<" "<<y1;
	    cout<<"\n";
	    a.clear();
	    b.clear();
	    p=1;
	    q=1;
	    u=0;
	    v=0;
	    
	}
	
	return 0;
}
