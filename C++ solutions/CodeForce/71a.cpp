#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    string str;
    cin >> a;
   for (int i=0; i<a;i++)
    {
        cin >> str;
        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}