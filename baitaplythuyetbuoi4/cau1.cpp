#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    double tong=0.0;
    for (int i = 1; i <= n; i++)
{
        tong+=1.0/(2*i);
}
    cout<<"Tong S la: "<<tong<< endl;
    return 0;
}