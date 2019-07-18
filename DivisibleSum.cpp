/* 
Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

n: the integer length of array ar
ar: an array of integers
k: the integer to divide the pair sum by


#include<iostream>
using namespace std;

int main()
{
	int n,k;
	int ar[101];
	int count=0;
	cin>>n>>k;
	int i,j;
	for( i=0;i<n;i++)
		cin>>ar[i];
	 
	for( i=0;i<n;i++)
	{
		for( j=i+1;j<n;j++)
		{
			if((ar[i]+ar[j]) %k == 0)
			{
				count++;
			}
			
		}
	}	
	cout<<count<<endl;
	return 0;
}
