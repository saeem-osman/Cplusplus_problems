//duplicate characters in a string
#include<iostream>
#include<map>
#include<string>
using namespace std;
#define len 100
#define no_of_char 256

void printDuplicate(string a){

int w = a.length();
int arr[no_of_char] = {0};

for(int i = 0; i<w; i++){
    int p = (int)a[i];
    arr[p]++;
}
cout<<"Duplicate: ";
for(int i = 0; i<no_of_char; i++){
    if(arr[i] > 1){
        int r = i;
        char c = (char)i;
        cout<<c<<" ";
    }
}
}
int main(){
string a;
cout<<"Enter a string: ";
getline(cin,a);

printDuplicate(a);
}

