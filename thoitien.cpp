#include <bits/stdc++.h>
using namespace std;
void thoitien (int n, int i)
{
    if (n!=0)
    {
        int M[9] ={500000,200000,100000,50000,20000,10000,5000,2000,1000};
        int c=n/M[i];
        if (c!=0) cout<<M[i]<<" "<<c<<endl;
        return thoitien(n%M[i], i+1);
    }
}
int n;
int main()
{
    cin>>n;
    thoitien(n,0);
    return 0;
}
