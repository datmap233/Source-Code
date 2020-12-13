#include <bits/stdc++.h>
using namespace std;
double ans, m, l = 0, r, n;
const double ex=1e-8;
int main ()
{
    cout << "Nhap so duong: ";
    cin >> n;
    r=1e18;
    while (l<=r)
    {
        m=(l+r)/2;
        if (abs(m*m-n)<=ex) break;
        else if (m*m>n) r=m-ex;
        else l=m+ex;
    }
    cout << "Can bac hai cua so duong do la: " << m;
    return 0;
}
