#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,s);
        reverse(s.begin(),s.end());

        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
                s[i]=s[i]+3;
        }

        for(int i=s.size()/2;i<s.size();i++)
            s[i]=s[i]-1;

        cout<<s<<endl;

    }
    return 0;
}
