#include<bits/stdc++.h>
using namespace std;
int calc(int val[],int wt[],int n,int W)
{
	int res[n+1][W+1];
	
	for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=W;j++)
			{
				if(i==0 || j==0)
				res[i][j]=0;
				else if(wt[i-1]<=j)
				res[i][j]=max(val[i-1]+res[i-1][j-wt[i-1]],res[i-1][j]);
				else
				res[i][j]=res[i-1][j];
				
			}
		}
		return res[n][W];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,W;
		cin>>n;
		cin>>W;
		int val[n];
		int wt[n];
		for(int i=0;i<n;i++)
		cin>>val[i];
		
		for(int i=0;i<n;i++)
		cin>>wt[i];
		
		cout<<calc(val,wt,n,W)<<endl;
	}
}
