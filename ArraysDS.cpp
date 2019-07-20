/* An array is a type of data structure that stores elements of the same type in a contiguous block of memory. 
In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as 
(you may also see it written as ). */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";		
	}
}
