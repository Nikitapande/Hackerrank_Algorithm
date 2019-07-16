/*
  Given five positive integers, find the minimum and maximum values that can be calculated 
  by summing exactly four of the five integers.
  Then print the respective minimum and maximum values as a single line of two space-separated long integers.
*/
#include<iostream>
using namespace std;

int main()
{
    unsigned long long int n,max,min,i=0;
    unsigned long long int sum=0;
//    cin>>n;
    unsigned long long int arr[5];
    cin>>arr[0];
    max=arr[0];
    min=arr[0];
    sum=arr[0]+sum;
    
    for(i=1;i<5;i++){
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
        sum=sum+arr[i];
    }
    cout<<sum-max<<" "<<sum-min;

//    cout<<sum;    
    return 0;
}
