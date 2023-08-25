#include <iostream>

class Point {
public:
    Point(int initialx, int initialy){
        setX(initialx);
        setY(initialy);
    };
    ~Point(){};
    void setX(int newX){
        x = newX;
    };
    void setY(int newY){
        y = newY;
    };
    int getX(){
        return x;
    };
    int getY(){
        return y;
    };
private:
    int x;
    int y;
};

class Rectangle {
public:
    Rectangle(int initialTopLeft, int initialTopRight, int initialBottomLeft, int initialBottomRight){

    }
//    void setTopLeft(int newTopLeft){
//        topleft
//    }
private:
//    int topleftx;
//    int toplefty;
//    Point topleft(topleftx,toplefty);
};