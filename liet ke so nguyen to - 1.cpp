#include<bits/stdc++.h>
using namespace std;
int sngt(int n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(int i=a; i<=b; i++)
	{
		if(sngt(i)) cout<<i<<' ';
	}
}


