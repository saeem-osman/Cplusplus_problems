#include<iostream>
using namespace std;
#define len 100

int findGCD(int x, int y){

int m = x>y ? x: y;

int gcd;
for(int i= x*y; i>=m; i--){
    if( i%x == 0 && i%y == 0){
        gcd = i;
    }
}
return gcd;
}
int main(){
int a[len];
int n;
cout<<"Enter array size: ";
cin>>n;
cout<<"Enter values: ";
for(int i = 0; i<n; i++)
    cin>>a[i];

int gcd  = 1;

for(int i = 0; i<n; i++){

    int k = a[i];
    gcd = findGCD(gcd,k);
}

cout<<"GCD is "<<gcd;

}
