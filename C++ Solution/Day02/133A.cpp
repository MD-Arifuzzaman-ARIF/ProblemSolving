#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int count=0, check=0;
    string str;
    cin >> str;
   for (int i=0; i<str.length();i++)
    {
        if (str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
           count=1;
        }
        else
        {
            check=0;
        }
    }
    if(count==0 && check==0){
    cout<<"NO"<<endl;
  } 
  else{
    cout<<"YES"<<endl;
  }
    
return 0;
}