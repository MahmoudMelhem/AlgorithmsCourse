#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int facrec(int n)
{
	if(n==1||n==0)
	return 1;
	else 
	return n*facrec(n-1);
	
	
	
}

  main()
{
int f=1,n;
cin>>n;
for(int i=1;i<=n;i++)
f*=i;
cout<<f<<endl;	
cout<<"in recursion method :";
	cout<<facrec(n)<<endl;
	
	
	
	
}



