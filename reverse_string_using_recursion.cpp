#include<iostream>
#include<string>
#include<string.h>
using namespace std;
#define len 100

//alternative
void printReverse(char *a){

if(*a){
    printReverse(a+1);
    cout<<*a;
}

}
void reverseString( char* a, int n){
if( n == -1 ) return;

else
    cout<<a[n]<<" ";
    return reverseString(a, n-1);


}

int main(){

cout<<"Enter a string: ";
char a[len];
gets(a);

puts(a);

reverseString(a,strlen(a) - 1);


}
