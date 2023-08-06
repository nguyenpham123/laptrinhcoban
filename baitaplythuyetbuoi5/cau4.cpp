#include <iostream>
#include <climits>
using namespace std;
int timgiatri(int a[], int n){
    int giatriam = INT_MIN;
    int vitri = -1;
    for (int i=0;i<n;i++) {
        if(a[i]<0&&a[i]>giatriam) {
            giatriam = a[i];
            vitri = i;
        }
    }
    return vitri;
}
int main() {
    int n;
    cout<<"Nhap kich thuoc mang: ";
    cin>>n;
    int *a = new int[n];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int vitri = timgiatri(a, n);
    if(vitri != -1) {
        cout<<"Phan tu am lon nhat co gia tri "<<a[vitri]<<" va o vi tri "<<vitri<<" trong mang."<<endl;
    } else{
        cout<<"Khong co phan tu am trong mang."<<endl;
    }
    delete[] a;
    return 0;
}