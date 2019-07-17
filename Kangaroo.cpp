/*
  You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number
  line ready to jump in the positive direction (i.e, toward positive infinity).

The first kangaroo starts at location  and moves at a rate of  meters per jump.
The second kangaroo starts at location  and moves at a rate of  meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show.
If it is possible, return YES, otherwise return NO.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
     if(v2>v1 || v2==v1){
            cout<<"NO";
        }else{
            if((x2-x1)%(v1-v2)==0){
                 cout<<"YES";
            }else{
                  cout<<"NO";
            }
            
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
