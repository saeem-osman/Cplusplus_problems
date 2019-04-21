#include<iostream>
using namespace std;
#define len 100


int recursiveSum(int *a, int n){

if(n == 0) return 0;
else return a[n-1] + recursiveSum(a, n-1);

}

int main(){
int arr[len], n;
cout<<"Enter the length of array: ";
cin>>n;
for(int i = 0; i<n; i++){
    cout<<"Enter value: ";
    cin>>arr[i];
}

int sum = recursiveSum(arr,n);
cout<<"Sum is: "<<sum;

}
