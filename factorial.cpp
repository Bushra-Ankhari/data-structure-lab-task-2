
#include <bits/stdc++.h>
using namespace std;

long int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}

int main()
{
    int n;
   cout<<"Enter a positive integer: ";
cin>>n;
cout<<"Factorial of "<<n<<"is "<<fact(n);
    return 0;
}
