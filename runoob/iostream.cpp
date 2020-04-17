#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setiosflags(ios::left | ios::showpoint);
    cout.precision(5);
    cout << 123.456789 << endl;
    cout.width(10);
    cout.fill('*');
    cout << setiosflags(ios::right); // 设置右对齐
    cout << 123.456789 << endl;

    return 0;
}