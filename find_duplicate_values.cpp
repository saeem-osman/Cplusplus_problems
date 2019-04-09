//finding duplicate value in an array

#include <iostream>
using namespace std;
#define size 20
int main()
{
int arr[20], arr2[30];
int n;
cout<<"How many numbers? ";
cin>>n;
cout<<"Enter values: ";
for(int i = 0; i<20; i++)
    arr2[i] = 0;
for(int i = 0; i<n; i++){
    cin>>arr[i];
}
for(int i = 0; i<n; i++){
    int k = arr[i];
    arr2[k] = arr2[k] + 1;

}
cout<<"Duplicate values are: ";
for(int i = 0; i<10; i++){
    if(arr2[i]>1){
        cout<<i<<" ";
    }
}
}
