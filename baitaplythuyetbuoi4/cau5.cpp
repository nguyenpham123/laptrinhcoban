#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while(b!=0)
{
        int n=b;
        b=a%b;
        a=n;
}
    return a;
}
int main()
{
    int a, b;
    cout<<"Nhap a,b: ";
    cin>>a>>b;
    int kq=gcd(a,b);
    cout<<"Uoc so chung lon nhat cua "<<a<<" va "<<b<<" la: "<<kq<<endl;
    return 0;
}