#include<bits/stdc++.h>
using namespace std;
/*
class node
{
	private:
	int num;
	int count;
	
	public:
	node(map<int,int> m, node nd[])
	{
		int i =0;
		for(map<int,int>::iterator it = m.begin(); it != m.end();it++)
		{
			nd[i].num=it->first;
			nd[i].count=it->second;
			i++;
		}
		for(int  i = 0;i<5;i++)
		{
			cout<<nd[i].num<<" "<<nd[i].count<<endl;
		}
	}
	
};

int main()
{
	map<int,int> m;
	node nd[5];
	
	for(int  i = 1; i<=5;i++)
	{
		int n;
		cin>>n;
		m[n]++;
	}
	node temp = new node(m);
}
*/

// Passing vector object to a constructor. 
#include <iostream> 
#include <vector> 
using namespace std; 

class MyClass { 
	int a, b; 

public: 
	MyClass(vector<int> v) 
	{ 
	vector<int> vec = v;
	cout<<v.size();
	/*MyClass ms[v.size()];
	for(int i = 0; i< v.size();i++)
	{
		ms[i].a=v[i];
	} 
	for(int i = 0; i< v.size();i++)
	{
		cour<<" "<<ms[i].a;
	}
	} */
	void print() 
	{ 
		/// print the value of vector 
		for (int i = 0; i < vec.size(); i++) 
			cout << vec[i] << " "; 
	} 
}; 

int main() 
{ 
	vector<int> vec; 
	for (int i = 1; i <= 5; i++) 
		vec.push_back(i); 
	MyClass obj(vec); 
	obj.print(); 
	return 0; 
} 



