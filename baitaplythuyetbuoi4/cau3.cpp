#include <iostream>
using namespace std;
bool isPrime(int a)
{
    if(a<=1)
{
        return false;
}
    for(int i=2;i*i<=num;i++)
{
        if(a%i==0)
{
        return false;
}
}
    return true;
}
int main()
{
    int N;
    cout<<"Nhap N (N<100): ";
    cin>>N;
    cout<<"Cac so nguyen to nho hon "<<N<<" la: ";
    for(int i=2;i<N;i++)
{
        if(isPrime(i)) 
{
        cout<<i<<" ";
}
}
    cout<<endl;
    return 0;
}