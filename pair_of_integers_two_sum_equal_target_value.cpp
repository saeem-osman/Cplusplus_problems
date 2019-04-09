#include <iostream>
//find pair of all integers who's sum is equal to a given number

using namespace std;
    #define size 100
    int main()
    {
        int arr[size];
        int a,n;
        cout<<"Insert values in the array or -1 to exit ";
        int w = 0;
        int j=0;
        while(j != -1){
            cin>>j;
            if(j!=-1){
            arr[w] = j;
            w++;
            }
        }
        int p = -1, q = -1;
        cout<<"Enter the target value: ";
        cin>>n;
        for(int i = 0; i<w; i++){
            for(int j = i; j<w; j++){
                if(arr[i]+arr[j] == n){
                    p = arr[i];
                    q = arr[j];
                    break;
                }
            }
        }
        if(p == -1){
            cout<<"Not found";
        }else{
            cout<<"The sum of "<<p<<" and "<<q<<" is "<<n;
        }
    }
