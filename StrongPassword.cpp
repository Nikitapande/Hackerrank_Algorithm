/*
Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least 6.
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string arr) {
    // Return the minimum number of characters to make the password strong
    for(int i=0;i<n;i++)
    {
        cin>>arr;
    }
    int count=0;


int uc,lc,d,sc;
uc=lc=d=sc=1;

for(int i=0;i<n;i++)
{
if(arr[i]>=65 && arr[i]<=90)
{
uc=0;
}
else if (arr[i]>=97 && arr[i]<=122)
{
lc=0;
}
else if(arr[i]>=48 && arr[i]<=57)
{
d=0;
}

else 
{
//!@#$%^&*()-+
if(arr[i]=='!')
sc=0;
if(arr[i]=='@')
sc=0;
if(arr[i]=='#')
sc=0;
if(arr[i]=='$')
sc=0;
if(arr[i]=='%')
sc=0;
if(arr[i]=='&')
sc=0;
if(arr[i]=='*')
sc=0;
if(arr[i]=='(')
sc=0;
if(arr[i]==')')
sc=0;
if(arr[i]=='-')
sc=0;
if(arr[i]=='+')
sc=0;

}
}

if(uc==1)
count++;
if(lc==1)
count++;
if(d==1)
count++;
if(sc==1)
count++;
if(n+count>=6)
return count;
else
return 6-n;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
