
#include <iostream>

using namespace std;

string removeZero(string str)
{
   
    int i = 0;
    while (str[i] == '0')
        i++;
    str.erase(0, i);

    return str;
}

int main()
{
    string str;
    str = "00000123569";
    str = removeZero(str);
    cout << str << endl;
    return 0;
}
