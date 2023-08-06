#include <iostream>
using namespace std;
bool xoasnt(int a[], int &n, int k){
    if (k<0 || k>=n){
        return false;
    }
    for (int i=k;i<n-1;i++) {
        a[i] = a[i+1];
    }
    n--;
    return true;
}
int main() {
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    int *a = new int[n];
    cout<<"Nhap cac phan tu cua mang: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Nhap chi so phan tu can xoa (k): ";
    cin>>k;
    if(xoasnt(a, n, k)){
        cout<<"Xoa phan tu tai chi so "<<k<<" thanh cong."<<endl;
        cout<<"Mang sau khi xoa phan tu: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout<<endl;
    }else{
        cout << "Khong xoa duoc phan tu tai chi so " <<k<< "." <<endl;
    }
    delete[] a;
    return 0;
}