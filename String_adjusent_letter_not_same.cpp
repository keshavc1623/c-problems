#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin,s);
    map<char,int> m;
    int mf=0;

    for(int i = 0; i<s.length();i++)
    {
        m[s[i]]++;
    }
    vector<char> v;
    for(map<char,int>:: iterator it = m.begin(); it!=m.end();it++)
    {
    	it->second--;
    	char c = it->first;
    	if(it->second == 0)
    	{
    		v.push_back(c);
		}

	}
	for(char i : v)
    {
        cout<<i<<" ";
    }
    int j = 0;
	cout<<endl;
	
 	for(int i : m)
     {
         if(i.first == v[j])
     	{
     		m.erase(v[j]);
     		j++;
 		}
     }
	
	
	for(map<char,int>:: iterator it = m.begin(); it!=m.end();it++)
    {
    	cout<<it->first<<" "<<it->second<<endl;
	}
}

