#include <iostream>
using namespace std;

int main() {
	int i,j,n,t,k,x=1,count=1;
	char a[8][8];

	cin>>t;
	for(n=0;n<t;n++)
	{
	    cin>>k;
	   	for(i=0;i<8;i++)
    	{
    	    for(j=0;j<8;j++)
    	    {
    	        a[i][j]='.';
    	    }
    	}
	    a[0][0]='O';
	    for(i=0;i<8 && count<=k;i++)
	    {
	        for(j=0;j<8 && count<=k;j++)
	        {
	            
	            a[i][j]='O';
	            count++;
	        }
	    }
	    
	    for(i=0;i<8 && x<=k;i++)
	    {
	        for(j=0;j<8 && x<=k;j++)
	        {
	            if(a[i][j]=='O')
	            {
	                if(i!=0 || j!=0)
	                {
	                    a[i][j]='.';
	                }
	                if(a[i][j+1]!='O')
	                {
	                    a[i][j+1]='X';
	                }
	                if(a[i+1][j]!='O')
	                {
	                    a[i+1][j]='X';
	                }
	                if(a[i+1][j+1]!='O')
	                {
	                    a[i+1][j+1]='X';
	                }
	            }
	        }
	    }
	    
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            cout<<a[i][j];
	        }
	        cout<<"\n";
	    }
	    cout<<"\n";
	    count=1;
	    x=1;
	}
	
	return 0;
}
