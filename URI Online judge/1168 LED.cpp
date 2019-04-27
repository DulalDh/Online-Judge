#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        int cnt=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                cnt+=2;
            if(s[i]=='2'||s[i]=='3'||s[i]=='5')
                cnt+=5;
            if(s[i]=='4')
                cnt+=4;
            if(s[i]=='6'||s[i]=='0'||s[i]=='9')
                cnt+=6;
            if(s[i]=='7')
                cnt+=3;
            if(s[i]=='8')
                cnt+=7;
        }
        cout<<cnt<<" leds\n";
    }

    return 0;
}
