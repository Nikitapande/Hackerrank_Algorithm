/*
Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. 
She tabulates the number of times she breaks her season record for most points and least points in a game. 
Points scored in the first game establish her record for the season, and she begins counting from there.
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long a[n];
    long min=0,max=0,min_c=0,max_c=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_c++;
        }
        if(a[i]>max)
        {
            max=a[i];
            max_c++;
        }
    }
    cout<<max_c<<" "<<min_c;
    return 0;
}
