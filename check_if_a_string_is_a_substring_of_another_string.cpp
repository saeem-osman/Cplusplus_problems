#include<iostream>
#include<string.h>
using namespace std;

bool isSubsequence(char* a, char* b);
//function declaration

int main(){

char a[100],b[100];
cout<<"Enter a string: ";
gets(a);
cout<<"Enter another string: ";
gets(b);

if(isSubsequence(a,b))
    cout<<"Yes!";
else
    cout<<"No"<<endl;
}

bool isSubsequence(char* a, char* b){

    int m = strlen(a);
    int n = strlen(b);
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<m && j<n){
        if(a[i] == b[j]){
            i++;
            j++;
            count++;
        }
        else i++;
    }



    return count==n;

}
