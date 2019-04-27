#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    int n,x=0;
    string b,c;
    c="0";
    while(1)
    {

        cin>>a;
        cin.ignore();
        cin>>b;
        if(a=='0'&&b=="0")
            break;
        for(int i=0; i<b.size(); i++)
        {
            if(b[i]==a||b[i]=='0')  n=0;
            else
            {
                n=1;
                break;
            }

        }
        if(n==1)
        {
            for(int i=0; i<b.size(); i++)
            {
                if(b[i]!=a)
                {
                    if(b[i]=='0'&&x==0)
                        continue;
                    else
                    {
                        cout<<b[i];
                        x=1;
                    }
                }
            }
        }
        else
            cout<<n;

        cout<<endl;

    }

    return 0;
}
