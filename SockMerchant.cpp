/*
John works at a clothing store. He has a large pile of socks that he must pair by color for sale. 
Given an array of integers representing the color of each sock, determine how many pairs
of socks with matching colors there are.

Function Description
Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.
sockMerchant has the following parameter(s):
n: the number of socks in the pile
ar: the colors of each sock
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
 int n;
    cin>>n;
 int freq[101] = {};
 for(int i = 0; i < n; i++) {
        int c;
        cin >> c;
        freq[c]++;
    }

 int res = 0;
 for(int i = 0; i <= 100; i++){
         res += freq[i] / 2;
     }
 cout << res << endl;
 return 0;
}
