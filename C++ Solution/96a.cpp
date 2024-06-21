#include <iostream>
#include <string>
using namespace std;
 
int main()
{
int count=0;
string str;
 
cin>>str;
 
for(int i=0;i<str.length();i++)
{
  if(str[i]==str[i+1])
  { 
   count++;
    if(count==6)
    {
     cout<<"YES"<<endl;
     return 0;
    }
  }
  else
  {  
   count=0;
  }
}
cout<<"NO"<<endl;
 
return 0;
}