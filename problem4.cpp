#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int n,i,j;
	int sum=0,sum1=0;
	cin>>n;
	int arr[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>arr[i][j];
	}

	for(i=0;i<n;i++)
	{
		sum+=arr[i][i];
	}
	for(i=0;i<n;i++)
	{
		sum1+=arr[i][n-1-i];
	}
	
	cout<<abs(sum-sum1);
  	return 0;
}  
