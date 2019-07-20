/*You have been asked to help study the population of birds migrating across the continent.
Each type of bird you are interested in will be identified by an integer value. 
Each time a particular kind of bird is spotted, its id number will be added to your array of sightings.
You would like to be able to find out which type of bird is most common given a list of sightings.
Your task is to print the type number of that bird and if two or more types of birds are equally common,
choose the type with the smallest ID number.
 */

#include<iostream>
using namespace std;

int main()
{
    unsigned long long int  n;
    unsigned long long int  one=0,two=0,thr=0,fou=0,fiv=0;
    unsigned long long int  i;
    cin>>n;
    unsigned long long int  arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 1: one++;
                break;
            
            case 2: two++;
                break;
            
            case 3: thr++;
                break;
            
            case 4: fou++;
                break;
                
            case 5: fiv++;
                break;                
        }
    }
    if(one>=two && one>=thr && one>=fou && one>=fiv  )
        cout<<1;
    
    else if( two> one && two>= thr && two>=fou && two>=fiv)
        cout<<2;
    
    else if(thr >= fou && thr >= fiv && thr>one && thr>two)
        cout<<3;
    
    else if(fou>= fiv && fou> one && fou> two && fou> thr)
        cout<<4;
    
    else if(fiv > one && fiv> two && fiv>thr && fiv > fou)
        cout<<5;
    else if(fiv ==1 && two ==1 && thr ==1 && fou ==1 && one==1)
        cout<<1;    
                    
    
    
    return 0;
}
