/*Lily has a chocolate bar that she wants to share it with Ron for his birthday.
Each of the squares has an integer on it. She decides to share a contiguous segment 
of the bar selected such that the length of the segment matches Ron's birth month 
and the sum of the integers on the squares is equal to his birth day. 
You must determine how many ways she can divide the chocolate.
*/
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

 int getWays(int squares_size, int* squares, int d, int m){
    int j,k=1,t=m,sum=0,count=0;
    for(int i=0;i<squares_size;i++){
        sum=squares[i];
        for(j=k;j<t;j++){
            sum+=squares[j];
        }
        if(sum==d){
            count++;
        }
        k++;
        t++;
    }
    return count;
}

int main() {
    int n; 
    cin>>n;
    //int *s = malloc(sizeof(int) * n);
    int *s = (int*)malloc(n * sizeof(int));

    for(int s_i = 0; s_i < n; s_i++){
       cin>>s[s_i];
    }
    int d; 
    int m; 
    cin>>d>>m;
    int result = getWays(n, s, d, m);
    cout<<result;
    return 0;
}
