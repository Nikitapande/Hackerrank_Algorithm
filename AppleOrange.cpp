/*
    Sam's house has an apple tree and an orange tree that yield an abundance of fruit. 
    In the diagram below, the red region denotes his house, where  is the start point, and  is the endpoint.
    The apple tree is to the left of his house, and the orange tree is to its right.
    You can assume the trees are located on a single point, where the apple tree is at point , and the orange tree is at point .
*/

#include <bits/stdc++.h>

using namespace std;
int Apple(long ha[],long a,long s,long t,long m)
{
    long count =0,d;
    for(int i=0;i<m;i++)
    {
        d=a+ha[i];
        if(d<=t && d>=s)
        {
            count++;
        }
    }
    return count;
}
int Orange(long hb[],long b,long s,long t,long n )
{
    long count =0,d;
    for(int i=0;i<n;i++)
    {
        d=b+hb[i];
        if(d<=t && d>=s)
        {
            count++;
        }
    }
    return count;
}
int main()
{
     long s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    long  d;
    long ha[m],hb[n];
    
    for(int i=0;i<m;i++)
        cin>>ha[i];
    
    for(int i=0;i<n;i++)
        cin>>hb[i];    
    cout<<Apple(ha,a,s,t,m)<<endl;
    cout<<Orange(hb,b,s,t,n);
    return 0;
}
