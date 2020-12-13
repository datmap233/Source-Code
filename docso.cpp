#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x, s, f1;
    cout<<"Nhap so nguyen: ";
    cin>>x;
    s=0;

    //Đảo ngược thứ tự chữ số vì khi đọc các chữ số thứ tự bị đảo ngược
    //do dùng mod lên các số đọc từ phải sang trái, ví dụ: 123->321
    for (;x!=0;)
    {
        int s1= x%10;
        s=s1+s*10;
        x/=10;
    }

    //đọc số
    for (;s!=0;s=s/10)
    {
        f1= s%10; //5
        switch(f1){
        case 1: cout<<"Mot "; break;
        case 2: cout<<"Hai ";break;
        case 3: cout<<"Ba ";break;
        case 4: cout<<"Bon ";break;
        case 5: cout<<"Nam ";break;
        case 6: cout<<"Sau ";break;
        case 7: cout<<"Bay ";break;
        case 8: cout<<"Tam ";break;
        case 9: cout<<"Chin ";break;
        case 0: cout<<"Khong "; break;}
    }
}
