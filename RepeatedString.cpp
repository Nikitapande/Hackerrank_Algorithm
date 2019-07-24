/* Function Description

Complete the repeatedString function in the editor below. It should return an integer representing the number of occurrences of a in the prefix of length  in the infinitely repeating string.

repeatedString has the following parameter(s):

s: a string to repeat
n: the number of characters to consider */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    ll ans = 0;
    int A = 0;
    int B = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
       if (s[i] == 'a') A++;
       if ((ll)i < n % (ll)s.size() && s[i] == 'a') B++;
    }

    cout << n / (ll)s.size() * (ll)A + (ll) B << endl;
    return 0;
}
