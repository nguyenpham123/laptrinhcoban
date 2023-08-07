#include <iostream>
#include <unordered_map>
using namespace std;
void ingiatri(int a[], int n) {
    unordered_map<int, int> dem;
    for (int i = 0;i<n;i++){
        dem[a[i]]++;
    }
    cout<<"Cac gia tri xuat hien dung 1 lan trong mang: ";
    for (int i=0;i<n;i++){
        if (dem[a[i]] == 1) {
            cout<<a[i]<< " ";
        }
    }
    cout<<endl;
}
int main() {
    int n;
    cout<<"Nhap kich thuoc mang: ";
    cin>>n;
    int *a = new int[n];
    cout<<"Nhap cac phan tu cua mang: ";
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    ingiatri(a, n);
    delete[] a;
    return 0;
}