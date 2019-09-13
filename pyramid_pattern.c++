#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin>>n;
	
	int s = n/2+1;
	int e = n/2+1;
	
	for(int  i = 1; i <= n;i++)
	{
		for(int  j = 0; j<=n;j++)
		{
			if(s>=1 && e <= n)
	     	{
	     		if(j>=s && j<=e)
	     		{
	     			cout<<"*";
				}
				else
				{
					cout<<" ";
				}
	    	}
	    	else 
	    	{
	        	return 0;
        	}
		}
		s--;
	   	e++;
		cout<<endl;
	}
}
