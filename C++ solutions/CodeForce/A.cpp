#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        if (b%2==0){
            cout<< "0""\n";
        }
        else{
            cout<<a<< "\n";
        }
    }
    
    return 0;
}
