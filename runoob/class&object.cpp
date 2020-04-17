#include <iostream>
using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;

        // double get_volume(){
        //     return length * breadth * height;
        // }
        double get_volume();
        void set_length(double len);
};

double Box::get_volume()
{
    return length * breadth * height;
}

void Box::set_length(double len){
    length = len;
}

int main(){

    Box box1;
    Box box2;

    double volume = 0.0;

    box1.height = 6.0;
    box1.breadth = 5.0;
    box1.length = 7.0;

    box2.height = 6.0;
    box2.breadth = 5.0;
    box2.length = 7.0;

    box1.set_length(10);

    cout << box1.get_volume();

    return 0;
}