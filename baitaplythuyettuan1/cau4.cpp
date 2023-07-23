#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so nguyen duong: ";
    cin>>n;
    int sum=0;
    int digit;
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout<<"Tong cac chu so "<<n<<" la: "<<sum<< endl;
    return 0;
}