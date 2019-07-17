/*  HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100 .
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's grade according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of  5.
If the value of  is less than 38, no rounding occurs as the result will still be a failing grade.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int rem=0,n,i;
    cin>>n;
    unsigned long long int grade[n];
    for(i=0;i<n;i++)
    {
        cin>>grade[i];
    }
    for(i=0;i<n;i++)
    {
        if(grade[i]>37)
        {rem=grade[i]%5;
            if(rem> 2)
            grade[i]=grade[i]+5-rem;
        }
        continue;
    }
    for(i=0;i<n;i++)
        cout<<grade[i]<<endl;
    return 0;    

}
