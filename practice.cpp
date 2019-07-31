#include<bits/stdc++.h>
using namespace std;
void calc(long int arr[],int n,int k,int odd)
{
	if((odd%2==1 && k%2==0) || (odd%2==0 && k%2==1))
	{
	cout<< "NO";
	return;
	}
	k--;
	cout<<"YES"<<endl;
	int i=0;
	while(k && i<n)
	{
		if(arr[i]%2==1)
		{
			k--;
			cout<<i+1<<" ";
		}
		i++;
	}
	cout<<n;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;;
		long int arr[n];
		int odd=0;
		for(int i=0;i<n;i++)
		{
		cin>>arr[i];
		if(arr[i]%2==1)
		odd++;
		}
		if(odd<k)
		cout<<"NO";
		else
		calc(arr,n,k,odd);
		cout<<endl;
	}
}
