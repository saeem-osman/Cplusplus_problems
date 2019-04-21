#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<string.h>
using namespace std;
int main(){

    map<string,int> m;
    map<string,int>::iterator it;
    int n;
    cout<<"How many data to add: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        char a[100];
        int w;
        cout<<"Enter name: ";
        cin>>a;
        cout<<"Enter value: ";
        cin>>w;
        m.insert(make_pair(a,w));
        if(m[a]){
            m[a] = w;
        }
    }
    it = m.begin();

   for(it; it != m.end(); it++){

    cout<<"Name is: "<<it->first<<" and roll: "<<it->second<<endl;


   }
}
