#include<iostream>
using namespace std;
#include <vector>
#define len 100

vector <int> findInteger( char* a){
vector<int> v;
for(int i = 0; a[i]; i++){

    int k = (int) a[i];
    if( k >= 47 && k<= 58){
        v.push_back(k);
    }

}
return v;
}
int main(){
    vector<int> v;
    vector<int>:: iterator it;
    char a[len];
    cout<<"Enter a string: ";
    gets(a);

    v = findInteger(a);
    it = v.begin();
    for(it; it != v.end(); it++){
        cout<<(char)*it<<" ";
    }
}

