#include <iostream>
using namespace std;
 
int main()
{
int count, check=0;
int b;
int a;
 
cin>>b;
 
for(int i=0;i<b;i++)
{
  cin>>a;
  if (a==0){
    count= 0;
  }
  else{
    check=1;
  }
}
  if(count==0 && check==0){
    cout<<"Easy"<<endl;
  } 
  else{
    cout<<"Hard"<<endl;
  }
 
return 0;
}