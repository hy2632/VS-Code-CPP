#include <iostream>
using namespace std;

class Box
{
    double width;

public:
    double length;
    friend void printWidth(Box box); // 请注意：printWidth() 不是任何类的成员函数
    // 添加友元类
    friend class BigBox;

    void setWidth(double wid);
};


class BigBox{
    public:
        void Print(int width, Box box){
            box.setWidth(width);
            cout << "width of box :" << box.width << endl;
        }
};


void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    cout << "Width of Box is :" << box.width << endl;
}

int main()
{
    Box box;
    box.setWidth(10.00);
    printWidth(box);

    BigBox bigbox;
    bigbox.Print(11, box);

    return 0;
}