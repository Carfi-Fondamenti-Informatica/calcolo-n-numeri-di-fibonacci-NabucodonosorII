#include <iostream>
using namespace std;
int main() {
    int n=0;int j=1;int k=1;int l;
    cin >> n;
    if(n>=2){cout<< j << endl << k << endl;
        for(int i=2;i<n;i++){l=j+k;j=k;k=l;cout<<l<<endl;
        }
    }else{
        cout<<"errore"<<endl;}
    return 0;
}
