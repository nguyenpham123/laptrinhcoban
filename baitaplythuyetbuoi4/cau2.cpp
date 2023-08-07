#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    double tong=0.0;
    double a = 1.0;
    for (int i = 1; i <= n; i++)
{
        a*=i;
        tong+=a;
}
    cout<<"Tong S la: "<<tong<<endl;
    return 0;
}