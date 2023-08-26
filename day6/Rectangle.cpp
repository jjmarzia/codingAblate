#include "Rectangle.h"

int main(){
    Rectangle myRectangle(100, 20, 50, 80);
    int area = myRectangle.getArea();
    std::cout << "area: " << area;
    return 0;
}