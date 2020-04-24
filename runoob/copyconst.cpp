
#include <iostream>
using namespace std;

class Line{
    public:
        Line(int len);
        Line(const Line &obj);
        int getlength();
        ~Line();

    private:
        int *ptr;
};


Line::Line(int len){
    ptr = new int;
    *ptr = len;
    cout << "调用构造函数" << endl;
}

Line::Line(const Line &obj){
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(){
    cout << "释放内存" << endl;
}

int Line::getlength(){
    return *ptr;
}

void display(Line obj){
    cout << "length is " << obj.getlength()<< endl;
}

int main(){
    Line line1(10);
    Line line2 = line1;
    display(line1);
    display(line2);
    return 0;
}
