#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    map<char,int> m;
    int sz = s.size();
    for(int i = 0;i<sz;i++)
    {
        m[s[i]]++;
    }
    
    for(auto i : m)
    {
        if(26-(122-i.first) != i.second)
        {
            cout<<"No";
            return 0 ;
        }
    }
    cout<<"Yes";
}
