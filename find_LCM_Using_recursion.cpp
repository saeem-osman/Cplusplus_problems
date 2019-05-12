#include<iostream>
using namespace std;
int findLCM(int n1, int n2){
static int common = 1;

if(common%n1 == 0 && common%n2 == 0)
    return common;
common++;
findLCM(n1,n2);

}


int main(){
cout<<"Enter a number : ";
int m,n;
cin>>m;
cout<<"Enter another number: ";
cin>>n;
int result = findLCM(m,n);
cout<<result<<endl;

}
