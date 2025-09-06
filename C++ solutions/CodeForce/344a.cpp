#include<iostream>
using namespace std;
 
int main(){
 
int n,count=1;
cin>>n;
string a,b;
cin>>a;
 
for(int i=1;i<n;i++){
    cin>>b;
    if(b!=a){
        count++;
    }
    a=b;
}
 
cout<<count<<endl;
 
return 0;
}