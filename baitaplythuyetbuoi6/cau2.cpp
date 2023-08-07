#include <iostream>
using namespace std;
bool ktdoixung(int a[], int n){
    int left=0;
    int right=n-1;
    while (left < right) {
        if (a[left] != a[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    int n;
    cout<<"Nhap kich thuoc mang: ";
    cin>>n;
    int*a=new int[n];
    cout<<"Nhap cac phan tu cua mang: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(ktdoixung(a, n)) {
        cout<<"Mang doi xung."<<endl;
    } else {
        cout<<"Mang khong doi xung."<<endl;
    }
    delete[] a;
    return 0;
}