#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i, n;
    long s;
    i=1;
    s=0;
    cout<<"Nhap n: ";
    cin>>n;
    while (i<=n)
    {
        s=s+i*2;
        i++;
    }
    cout<<"Tong cua 1^2+2^2+...+n^2 la: "<<s;
    return 0;
}
