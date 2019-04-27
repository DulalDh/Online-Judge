#include<bits/stdc++.h>
using namespace std;

long long int fac(int n)
{
    if(n > 1)
        return n * fac(n-1);
    else
        return 1;
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       cout<<fac(a)+fac(b)<<endl;
    }

return 0;
}



