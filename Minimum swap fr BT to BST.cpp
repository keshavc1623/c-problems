#include <bits/stdc++.h>
using namespace std;


void inorderTraversal(int a[], vector<int> &v, int n, int index)
{
    if(index >= n)
    {
        return;
    }
    
    inorderTraversal(a, v, n, index*2+1);
    v.push_back(a[index]);
    inorderTraversal(a, v, n, index*2+2);
}
    
int minSwaps(vector<int> &v)
{
    int count=0;
    vector< pair<int, int> > v2(v.size());
    
    for(int  i = 0; i < v.size(); i++)
    {
        v2[i].first = v[i];
        v2[i].second = i;        
    }
    
    sort(v2.begin(), v2.end());
    
    for(int  i = 0; i < v.size(); i++)
    {
    if(v2[i].second == i)
    {
        continue;
    }
    else
    {
        swap(v2[i].first, v2[v2[i].second].first);
        swap(v2[i].second, v2[v2[i].second].second);
    }
    if(i != v2[i].second) 
    {
        --i;
    }
    count++;
    }
return count;
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  vector<int> v;
  for(int  i = 0; i < n;  i++)
  {
      cin>>a[i];
  }
  
  inorderTraversal(a,v,n,0);
  
  for(int  i = 0; i<n; i++)
  {
      cout<<v[i]<<" ";
  }
  
  cout<<endl<<minSwaps(v);
}

