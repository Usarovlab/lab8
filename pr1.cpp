#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"n= ";
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
       cin>>a[i];
        sum+=a[i];
    }
    cout<<"sum= "<<sum;
    return 0;
}
