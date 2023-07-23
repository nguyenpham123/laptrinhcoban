#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if (a==0) {
        if (b==0) {
            cout<< "Pt co vo so nghiem." << endl;
        } else {
            cout<< "Pt vo nghiem." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Nghiem cua pt la: " << x << endl;
    }
    return 0;
}