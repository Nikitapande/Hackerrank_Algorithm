/*
Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the
Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.
From 1700 to 1917, Russia’s official calendar was the Julian calendar; since 1919 they used the
Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918,
when the next day after January 31st was February 14th. 
This means that in 1918, February 14th was the day of the year in Russia.
*/


#include<iostream>
using namespace std;

int main() {
 short y;
 cin>>y;
 if(y==1918)
 cout<<"26.09."<<y;
 else if(y <= 1917)
 {
 if(y%4==0)cout<<"12.09.";
 else cout<<"13.09.";
 cout<<y;
 }
 else{
 if((y%400==0) || (y%4==0 && y%100!=0))
 cout<<"12.09.";
 else cout<<"13.09.";
 cout<<y;
 }
 return 0;
}
