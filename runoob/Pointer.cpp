/*

#include <iostream>

using namespace std;

int main()
{
    int var = 20; // 实际变量的声明
    int *ip;      // 指针变量的声明

    ip = &var; // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    return 0;
}

*/

//递增指针

// #include <iostream>

// using namespace std;
// const int MAX = 4;

// int main()
// {
//     const char *names[MAX] = {
//         "Zara Ali",
//         "Hina Ali",
//         "Nuha Ali",
//         "Sara Ali",
//     };

//     for (int i = 0; i < MAX; i++)
//     {
//         cout << "Value of names[" << i << "] = ";
//         cout << names[i] << endl;
//     }
//     return 0;
// }


// 指针的指针



// #include <iostream>

// using namespace std;

// int main()
// {
//     int var;
//     int *ptr;
//     int **pptr;

//     var = 3000;

//     // 获取 var 的地址
//     ptr = &var;

//     // 使用运算符 & 获取 ptr 的地址
//     pptr = &ptr;

//     // 使用 pptr 获取值
//     cout << "var  :" << var << endl;
//     cout << "*ptr :" << *ptr << endl;
//     cout << "**pptr :" << **pptr << endl;

//     return 0;
// }





