#include <iostream>
using namespace std;
int main() {
    const int km1=1;
    const int km2=2;
    const int km5=5;
    const int km6=6;
    const int giamgia=120;
    double gia1kmdau=15000;
    double giakmtu2den5=13500;
    double giakmtu6trolen=11000;
    double kmtongcong;
    cout<<"Nhap so km da di chuyen ";
    cin>>kmtongcong;
    double giatien=0.0;

    if(kmtongcong>=km1){
        giatien+=gia1kmdau;
    }
    if(kmtongcong>km1&&kmtongcong<=km5){
        giatien+=(kmtongcong-km1)*giakmtu2den5;
    }else if(kmtongcong>km5){
        giatien+=(km5-km1)*giakmtu2den5+(kmtongcong-km5)*giakmtu6trolen;
    }
    if(kmtongcong>giamgia){
        giatien*=0.9;
    }
    cout<<"Tong so tien ban phai tra khi di taxi la: "<<giatien<<"đ"<<endl;
    return 0;
}