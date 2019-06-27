/* Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

ar: an array of integers .
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
