#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int *a= new int[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		swap(a[n-2],a[n-1]);
		for(int i=0; i<n; i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
}

