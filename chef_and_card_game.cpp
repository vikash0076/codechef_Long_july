#include <iostream>
using namespace std;

int check(long long int a, long long int b)
{
    long long int i=0,j=0;
    while(a>0)
    {
        i+=a%10;
        a=a/10;
    }
    while(b>0)
    {
        j+=b%10;
        b=b/10;
    }
    if(i>j)
    {
        return 0;
    }
    else if(i<j)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}

int main() {
	// your code goes here
	long long int a,b;
	int t,n,i,j,c1=0,c2=0,x;
	cin>>t;
	for(j=0;j<t;j++)
	{
	   cin>>n;
	   for(i=0;i<n;i++)
	   {
	       cin>>a>>b;
	       x=check(a,b);
	       if(x==0)
	       {
	           c1++;
	       }
	       else if(x==1) 
	       {
	           c2++;
	       }
	       else if(x==2)
	       {
	           c1++;
	           c2++;
	       }
	   }
	   if(c1>c2)
	   {
            cout<<0<<" "<<c1<<"\n";
	   }
	   else if(c1<c2)
	   {
	       cout<<1<<" "<<c2<<"\n";
	   }
	   else if(c1==c2)
	   {
	       cout<<2<<" "<<c2<<"\n";
	   }
	   c1=0;
	   c2=0;

	}
	return 0;
}
