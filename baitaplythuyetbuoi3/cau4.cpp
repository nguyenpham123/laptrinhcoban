#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap tong cac chu so ban muon: ";
    cin>>n;
    int tong=0;
    int a=n;
    while(n>0)
{
        int b=n%10;
        tong+=b;
        n/=10;
}
    cout<<"Tong cac chu so cua " <<a<<" la: "<<tong<<endl;
    return 0;
}