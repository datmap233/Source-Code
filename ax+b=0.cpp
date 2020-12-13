#include<bits/stdc++.h>
using namespace std;
int main()
{
        cout<<"Giai phuong trinh ax+b=0"<<endl;
        float a, b, x;
        cout<<"Nhap a: ";
        cin>>a;
        cout<<"Nhap b: ";
        cin>>b;
        x=(-b)/a;
    if (a==0)
        if (b==0)
        cout<<"=> Phuong trinh co vo so nghiem";
    else
        cout<<"=> Nghiem cua phuong trinh "<<a<<"x+"<<b<<"=0"<<" vo nghiem";
    else
        cout<<"=> Nghiem cua phuong trinh "<<a<<"x+"<<b<<"=0"<<" la: x=" <<x;

}
