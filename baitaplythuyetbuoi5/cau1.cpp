#include <iostream>
#include <vector>
using namespace std;
bool ktsonguyento(int n) {
    if (n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++) {
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>a;
    int n;
    cout<<"Nhap mot day tang dan: \n";
    while(true){
        cin>>n;
        if(n<0||(!a.empty()&&n<=a.back())) {
            break;
        }
        a.push_back(n);
    }

    cout<<"Cac so nguyen to trong mang la: \n";
    for (int i=0;i<a.size(); i++) {
        if (ktsonguyento(a[i])) {
            cout<<a[i] << " ";
        }
    }
    cout<<endl;
    return 0;
}