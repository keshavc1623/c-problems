#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[]={1,5,-9,2,3,20};
    int n=6,s=0;
    int start=0,end=0;
    int curr_max=a[0];
    int global_max=a[0];
    for(int i=1;i<n;i++){
        curr_max=max(a[i],curr_max+a[i]);
        if(curr_max>global_max){
            start=s;
            end=i;
            global_max=curr_max;
        }
        else if(curr_max<0){
            s=i+1;
        }
    }
    cout<<global_max<<" "<<start<<" "<<end;
	return 0;
} 
