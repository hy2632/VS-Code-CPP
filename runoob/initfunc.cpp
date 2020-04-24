#include <iostream>
using namespace std;


class Line{
    
    public:
        void setlength(double len);
        double getlength(void);
        Line();
    
    private:
        double length;
};

Line::Line(){
    cout << "initialize class" << endl;
}

void Line::setlength(double len){
    length = len;
    cout << "Length is set" << endl;
}

double Line::getlength(void){
    return length;
}

int main(){
    Line line;
    double a;
    cin >> a;
    line.setlength(a);
    cout << "length is: " << line.getlength()<<endl;
    return 0;
}