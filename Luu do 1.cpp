#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i, n;
    long s;
    s=0;
    i=1;
    cout<<"Nhap n: ";
    cin>>n;
    while (i <= n)
    {
        s=s+i;
        i++;
    }
    cout<<"Tong cua 1 + 2 + 3 +...+ n la: "<<s;
    return 0;
}
