#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    float s1, s2,s3;
    cout<<"Nhap so a co 3 chu so: ";
    cin>>a;
    cout<<"Nhap so b co 3 chu so: ";
    cin>>b;
    cout<<endl<<"Mo phong phep nhan tay"<<endl<<"     "<<a<<endl;
    cout<<"  x  "<<b<<endl<<"----------"<<endl;
    s1=(b%10)*a;
    cout<<"     "<<s1<<endl;
    s2=a*int ((b%100)/10);
    cout<<"    "<<s2<<endl;
    s3=a*int (b/100);
    cout<<"   "<<s3<<endl;
    cout<<"----------"<<endl;
    cout<<"   "<<a*b;
    return 0;
}
