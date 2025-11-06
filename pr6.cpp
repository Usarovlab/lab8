#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"n= ";
    cin>>n;
    char arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n; i++) {
        char a=arr[i];
        if ( a>='A'&& a<='Z')
            cout<<"uppercase: "<<a;
        else if (a>='a' && a<='z')
            cout<<"loweercase: "<<a;
        else if (a>='0' && a<='9')
            cout<<"digit: "<<a;
        else
            cout<<"special: "<<a;
        cout<<endl;
    }
    return 0;
}
