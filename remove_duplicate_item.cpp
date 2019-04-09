//removing duplicate item
#include<iostream>
using namespace std;
#define size 30

int main(void){

int arr[size],n;
cout<<"Enter size: ";
cin>>n;
cout<<"Enter values: ";
for(int i = 0; i<n; i++)
    cin>>arr[i];

for(int i =0; i<n; i++){
    for(int j = i+1; j<n;){
        if(arr[i] == arr[j]){
            for(int k = j; k<n -1; k++){
                arr[k] = arr[k+1];
            }
            n--;
        }else j++;
    }
}

cout<<"After removing duplicate: ";
for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

}
