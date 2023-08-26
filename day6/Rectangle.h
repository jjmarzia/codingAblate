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
    Rectangle(int newTop, int newLeft, int newBottom, int newRight);

    ~Rectangle() {};

    int getTop() {
        return top;
    }

    int getLeft() {
        return left;
    }

    int getBottom() {
        return bottom;
    }

    int getRight() {
        return right;
    }

    Point getUpperLeft(){
        return upperLeft;
    }
    Point getUpperRight(){
        return upperRight;
    }
    Point getLowerLeft(){
        return lowerLeft;
    }
    Point getLowerRight(){
        return lowerRight;
    }
    void setTop(int newTop){
        top = newTop;
        upperLeft.setY(top);
        upperRight.setY(top);
    };
    void setBottom(int newBottom){
        bottom = newBottom;
        lowerLeft.setY(bottom);
        lowerRight.setY(bottom);
    };
    void setLeft(int newLeft){
        left = newLeft;
        lowerLeft.setX(left);
        upperLeft.setX(left);
    };
    void setRight(int newRight){
        right = newRight;
        lowerRight.setX(right);
        upperRight.setX(right);
    };

    void setUpperLeft(Point upperLeftPoint){
        upperLeft = upperLeftPoint;
        top = upperLeftPoint.getY();
        left = upperLeftPoint.getX();
        upperRight.setY(top); //if upper left point is known, top is known to upper right
        lowerLeft.setX(left); //if upper left point is known, left is known to lowerleft

    }
    void setUpperRight(Point upperRightPoint){
        upperRight = upperRightPoint;
        top = upperRightPoint.getY();
        right = upperRightPoint.getX();
        upperLeft.setY(top);
        lowerRight.setX(right);
    };
    void setLowerLeft(Point lowerLeftPoint){
        lowerLeft = lowerLeftPoint;
        left = lowerLeftPoint.getX();
        bottom = lowerLeftPoint.getY();
        upperLeft.setX(left);
        lowerRight.setY(bottom);
    };
    void setLowerRight(Point lowerRightPoint){
        lowerRight = lowerRightPoint;
        bottom = lowerRightPoint.getY();
        right = lowerRightPoint.getX();
        lowerLeft.setY(bottom);
        upperRight.setX(right);
    };

    int getArea(){
        return (right-left * top-bottom);
    };

private:
    int top;
    int bottom;
    int left;
    int right;
    Point upperLeft;
    Point upperRight;
    Point lowerLeft;
    Point lowerRight;
};