#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Nhap so thu 1: ";
    cin>>a;
    cout<<"Nhap so thu 2: ";
    cin>>b;
    cout<<"Nhap so thu 3: ";
    cin>>c;
    int maxNumber = a;
    if (b > maxNumber) {
        maxNumber = b;
    }
    if (c > maxNumber) {
        maxNumber = c;
    }
    cout << "So lon nhat trong ba so la: " << maxNumber << endl;
    return 0;
}