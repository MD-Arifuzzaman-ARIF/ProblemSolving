#include <iostream>
#include <string>
using namespace std;
 
int main(){
    
    string str,t;
    cin>>str;
    cin>>t;
    
    int p = str.length();
    int l = t.length();
    int i,j;
    
    for(i=0,j=l-1;i<p,j>=0;i++,j--){
        if(str[i] != t[j]){
            cout<<" NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}