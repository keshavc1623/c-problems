vector<int> Solution::plusOne(vector<int> &A) 
{
    int s = A.size();
    long long int num=0;
    int j = 0;
    while(A[j]==0)
    {
        j++;
    }
    int k=0;
    for(int i = j;i<s;i++)
    {
        num = A[i]+(10*num);
    }
    num++;
    vector<int> v;
    while(num)
    {
        int temp = num%10;
        v.push_back(temp);
        num /= 10;
    }
    reverse(v.begin(),v.end());
    return v;
}
// for very very large input
    vector<int> Solution::plusOne(vector<int> &A) 
{
    int sz =A.size();
    string s="";
    vector<int> v;
    for(int  i = 0; i<sz;i++)
    {
        string c = to_string(A[i]);
        s.append(c);
    }
    int n = s.size();
    int j = n-1;
    
        while(s[j]=='9')
        {
            v.push_back(0);
            j--;
        }
        if(j==-1)
        {
            v.push_back(1);
            int temp=v.size()-1;
            while(v[temp]==0)
            {
                v.pop_back();
                temp--;
            }
            reverse(v.begin(),v.end());
            return v;
        }
        if(s[j]!='9')
        {
            v.push_back(s[j]-'0'+1);
            j--;
        }
        while(j>=0)
        {
            v.push_back(s[j]-'0');
            j--;
        }
        int temp2=n-1;
        while(v[temp2]==0)
            {
                v.pop_back();
                temp2--;
            }
        reverse(v.begin(),v.end());
        return v;
        
    
}
