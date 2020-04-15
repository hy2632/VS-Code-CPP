#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char hello[6] = {'h', 'e', 'l', 'l', 'o'};

    cout << hello << endl;
    cout << "length of string : " << strlen(hello) << endl;
    cout << "length of string : " << string(hello).size() << endl;

    return 0;
}
