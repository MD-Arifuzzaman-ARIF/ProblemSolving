#include <iostream>
using namespace std;
 
int main()
{
    int a,b;
    int rem;
    
    cin>>a>>b;
    
    for(int i=1; i<=b; i++)
    {
        rem=a%10;
        
        if(rem==0)
        {
            a=a/10;
        }
        else
            a=a-1;
    }
    cout<<a;
 
    return 0;
}