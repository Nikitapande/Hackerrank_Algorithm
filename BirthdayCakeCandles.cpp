/*
  You are in charge of the cake for your niece's birthday and have decided the cake will have one candle
  for each year of her total age. When she blows out the candles, she’ll only be able to blow out the 
  tallest ones. Your task is to find out how many candles she can successfully blow out.
  */
  
  #include<iostream>
using namespace std;
int main()
{
	unsigned long long int n;
	unsigned long long int var,i,max;
	cin>>n;
    long long int a[n];
   // cin>>a[0];
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	/*	 if(max<a[i])
            max=a[i];
            */	
	}	
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            var=a[i];
            a[i]=a[i+1];
            a[i+1]=var;
        }
    }

	for(i=0;i<n;i++)
	{
		if(a[i]==a[n-1])
			count++;
		}	
	cout<<count;
	return 0;	
}
