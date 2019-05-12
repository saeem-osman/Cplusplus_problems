#include<iostream>
using namespace std;


bool isPossible(char* a){
    int index[256] = {0};
    for(int i = 0; a[i]; i++){
        int k = (int)a[i];
        index[k]++;
    }

    int odd_count = 0;
    for(int i = 0; i<256; i++){
        if(index[i] > 0){
            int w = index[i];
            if(w%2 != 0){
                odd_count++;
            }
        }
    }
    return !(odd_count>1);


}

int main(){
char a[100];
cout<<"Enter a string : ";
gets(a);

if(isPossible(a))
    cout<<"Possible.";
else
    cout<<"Not possible.";

}
