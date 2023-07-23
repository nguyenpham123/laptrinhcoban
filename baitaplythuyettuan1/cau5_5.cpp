#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    return(year%4==0&&year%100!=0) || (year%400==0);
}
int thangnam(int month, int year) {
    switch(month){
        case 1://t1
        case 3://t3
        case 5://t5
        case 7://t7
        case 8://t8
        case 10://t10
        case 12://12
    return 31;
        case 4://t4
        case 6://t6
        case 9://t9
        case 11://t11
    return 30;
        case 2://t2
    return isLeapYear(year)?29:28;
    default:
    return -1;
    }
}
int main() {
    int month, year;
    cout<<"nhap thang: ";
    cin>>month;
    cout<<"nhap nam lon hon 1975: ";
    cin>>year;
    if (month<1||month>12||year<=1975){
        cout<<"Thang hoac nam bi sai"<<endl;
    }else{
        int days=thangnam(month, year);
        if (days==-1){
            cout << "Thang bi sai"<<endl;
        }else{
            cout<<"thang "<<month<<" nam "<<year<<" co "<<days<<" ngay"<<endl;
        }
    }
    return 0;
}