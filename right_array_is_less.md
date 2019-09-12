#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[],size;
    cin>>size;
    for(int i=0;i<size;i++){
    cin>>a[i];
    }
    vector<int>v;
    int n=7;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=i+1;j<size;j++){
            if(a[j]>a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            v.push_back(a[i]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
	return 0;
}
