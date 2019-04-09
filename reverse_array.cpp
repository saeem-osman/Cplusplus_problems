//reverse array list
#include<iostream>
using namespace std;
#define size 10
int main(){
    int a[size], prr[size];
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter values: ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    };
    int i = 0;
    for(i; i<n/2; i++){
        int temp = a[n-1-i];
        a[n-1-i] = a[i];
        a[i] = temp;
    }
cout<<"After sorting: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
