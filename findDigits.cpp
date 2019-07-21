/*An integer d is a divisor of an integer n if the remainder of n/d=0.

Given an integer, for each digit that makes up the integer determine whether it is a divisor.
Count the number of divisors occurring within the integer.
*/

#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		int N;
		cin>>N;
		int tmp=N,cnt=0;
		while(tmp!=0)
		{
				int r=tmp%10;
				if(r!=0 && N%r == 0)
					cnt++;
					tmp=tmp/10;	
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
