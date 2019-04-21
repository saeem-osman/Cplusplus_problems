#include<iostream>
#include<string.h>
using namespace std;
#define size 100

int checkAnagram(char *a, char *b, int x){

int flag = 1;
for(int i = 0; i<x; i++){
    for(int j = 0; j<x; j++){
        if(a[i] == b[j]){
            b[j] = '*';
            a[i] = '*';
        }
    }
}

for(int i = 0; i<x; i++){

    if(b[i] != a[i]){
        flag = 0;
        break;
    }
}
return flag;

}

int main(){

char a[size], b[size];
cout<<"Enter a value: ";
cin>>a;
cout<<"Enter another value: ";
cin>>b;
for(int i =0; i<strlen(a); i++){
    a[i] = tolower(a[i]);
}
for(int j = 0; j<strlen(b); j++){
    b[j] = tolower(b[j]);
}
int flag = 0;
if(strlen(a) == strlen(b)){
    flag = checkAnagram(a,b,strlen(a));
    if(flag){
        cout<<"They are anagram of each other.";
    }
    else{
        cout<<"They are not anagram.";
    }
}else{
    cout<<"They are not anagram.";
}
}
