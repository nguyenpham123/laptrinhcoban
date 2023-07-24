#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Nhap canh a: ";
    cin>>a;
    cout<<"Nhap canh b: ";
    cin>>b;
    cout<<"Nhap canh c: ";
    cin>>c;
    if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&c+a>b) {
        cout<<"Ba canh "<<a<<","<<b<<","<<c<<" la do dai cac canh cua mot tam giac"<<endl;
        if (a==b&&b==c){
            cout<<"Day la tam giac deu"<<endl;
        }else if(a==b||b==c||c==a){
            cout<<"Day la tam giac can"<<endl;
        } else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
            cout<<"Day la tam giac vuong"<<endl;
        } else{
            cout<<"Day la tam giac nhon"<<endl;
        }
    } else {
        cout<<"Ba so "<<a<<", "<<b<<", "<<c<<" khong phai la do dai cac canh cua mot tam giac"<<endl;
    }
    return 0;
}