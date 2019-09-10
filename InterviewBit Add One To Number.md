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
