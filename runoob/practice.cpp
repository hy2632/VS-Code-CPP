#include <iostream>
using namespace std;

int main()
{
    /*
    int a[3][4] = {
        {0, 1, 2, 3},
        {1, 2, 3, 4},
        {5, 6, 7, 8}};
*/
    int i, j;

    int a[4][4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            a[i][j] = i * 4 + j;
        }
    }

    // 访问数组元素
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "a[i][j]: " << a[i][j] << endl;
        }
    }

    return 0;
}