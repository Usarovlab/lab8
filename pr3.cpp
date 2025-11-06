#include<iostream>
using namespace std;
int main() {
    int n, min;
    cout<<"n= ";
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
      if (i==0) min=a[i];
        else if (a[i]<min) min=a[i];
    }
    cout<<"min= "<<min<<endl;
    return 0;
}
