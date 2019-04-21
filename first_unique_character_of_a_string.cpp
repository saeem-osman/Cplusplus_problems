#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define length 256

int findChar(char *a){
    pair<int,int> arr[length];
    for(int i = 0; a[i]; i++){
        (arr[a[i]].first)++;
        arr[a[i]].second = i;
    }

    int res = INT_MAX;
    for(int i = 0; i<length; i++){
        if(arr[a[i]].first == 1){
            res = min(res,arr[a[i]].second);
        }
    }
    return res;

}
int main(){
    char a[length];
    cout<<"Enter string: ";
    gets(a);
    int i = findChar(a);
    if(i == INT_MAX)
        cout<<"Nothing found";
    else{
        cout<<"character is : "<<a[i];
    }
}
