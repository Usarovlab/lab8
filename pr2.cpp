#include<iostream>
using namespace std;
double average(int array[], int n) {
    int sum=0;
    for (int i=0; i<n; i++) {
        sum+=array[i];
    }
    return (double)sum/n;
}
int main() {
    int n;
    cout<<"n= ";
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"avg= "<<average(a,n)<<endl;
    return 0;
}
