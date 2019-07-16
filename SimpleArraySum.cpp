/*  Given an array of integers, find the sum of its elements.

For example, if the array ar= [1,2,3],1+2+3=6, so return 6.
Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the 
    array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
*/

#include<iostream>
using namespace std;

int main()
{
    unsigned long long int n,i=0;
    unsigned long long int sum=0;
    cin>>n;
    unsigned long long int arr[n];
    
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;    
    return 0;
}
