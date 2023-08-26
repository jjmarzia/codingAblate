#include <iostream>
 //hour 8
class Tricycle {
public:
    Tricycle(int initialSpeed, int initialWheelSize);
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
    void setWheelSize(int wheelSize);
    int getWheelSize();
private:
    int speed;
    int wheelSize;
};

Tricycle::Tricycle(int initialSpeed, int initialWheelSize){ //constructor that gives ability in main() to create object Tricycle with condition initialSpeed
    setSpeed(initialSpeed);
    setWheelSize(initialWheelSize);
}

Tricycle::~Tricycle(){}; //destructor

void Tricycle::setWheelSize(int newWheelSize){
    if (newWheelSize >= 4){
        wheelSize = newWheelSize;
    }
    else {
        wheelSize = 4;
    }
}

int Tricycle::getWheelSize(){
    return wheelSize;
}

int Tricycle::getSpeed(){
    return speed;
}
void Tricycle::setSpeed(int newSpeed){
    if (newSpeed >= 0){
        speed = newSpeed;
    }
    else {
        speed = 0;
    }
}

void Tricycle::pedal(){
    setSpeed(speed + 1);
    std::cout << "pedaling... speed=" << getSpeed() << "\n";
}
void Tricycle::brake(){
    if (speed > 0){
        setSpeed(speed - 1);
    }
    std::cout << "braking... speed=" << getSpeed() << "\n";
}

int main(){
    Tricycle syracuse(1, 5);
//    syracuse.setSpeed(-1);
//    std::cout << "speed: " << syracuse.getSpeed() <<"\n";
    syracuse.pedal();
    syracuse.pedal();
    syracuse.pedal();
    syracuse.brake();
    syracuse.brake();
    syracuse.brake();
    syracuse.brake();
    syracuse.brake();
    syracuse.brake();

    Tricycle buffalo(5, 3);
    buffalo.pedal();
    std::cout << "buffalo wheel size is: " << buffalo.getWheelSize();

    return 0;
}