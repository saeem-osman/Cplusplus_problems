//removing vowels

#include<iostream>
#include<string.h>
using namespace std;

bool isVowel(char a){

a = tolower(a);
return a== 'a' || a== 'e' || a == 'i' || a == 'o' || a == 'u';

}

void removingVowel(char *a){

for(int i = 0; a[i]; i++){
    char k = a[i];
    if(isVowel(k)){
        int j = i;
        while(a[j]){
            a[j] = a[j+1];
            j++;
        }
        i--;
    }
}

cout<<a<<endl;

}

int main(){

char a[100];
cout<<"Enter a string: ";
gets(a);
removingVowel(a);

}
