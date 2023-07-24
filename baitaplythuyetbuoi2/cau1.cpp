#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);
    }
    if(a>b){
        swap(a,b);
    }
    cout<<"Cac so theo thu tu tang dan la: "<<a<<","<<b<<","<<c<<endl;
    return 0;
}