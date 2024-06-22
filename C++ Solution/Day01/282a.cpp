#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int a, X=0;
    cin >> a;
 
    string str;
    for (int i=0; i<a; i++)
    {
        cin >> str;
        if (str[1] == '+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }
 
    cout << X << endl;
    return 0;
}