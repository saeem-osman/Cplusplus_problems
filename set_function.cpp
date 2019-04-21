#include<bits/stdc++.h>
using namespace std;

int main(){

set<string> s;
set<string>::iterator it;

s.insert("Hello");
s.insert("why");

pair< set<string>::iterator, bool> p;

p = s.insert("John Cena");
if(p.second == false){
    cout<<"can't insert. ";
}else{
cout<<*p.first<<" inserted successfully"<<endl;

}



it = s.begin();
for(it; it != s.end(); it++){
    cout<<"key: "<<*it<<endl;
}


}
