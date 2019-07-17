/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. 
Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10];
    cin>>str;
    int h1 = (int)str[1] - '0'; 
    int h2 = (int)str[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 
  
    // If time is in "AM" 
    if (str[8] == 'A') 
    { 
        if (hh == 12) 
        { 
            cout << "00"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            for (int i=0; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
  
    // If time is in "PM" 
    else
    { 
        if (hh == 12) 
        { 
            cout << "12"; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
        else
        { 
            hh = hh + 12; 
            cout << hh; 
            for (int i=2; i <= 7; i++) 
                cout << str[i]; 
        } 
    } 
}
