//finding Fibonacci series using recursion

#include <iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int a;
    cout<<"Enter the range: ";
    cin>>a;

    for(int i = 0; i<a; i++){
        cout<<fibonacci(i)<<" ";
    }
}
int fibonacci(int a){
//base case
if(a == 0) return 0;
else if(a == 1 ) return 1;
else return fibonacci(a-1) + fibonacci(a - 2);
}
