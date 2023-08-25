#include <iostream>

//hour 3
//int score(int touchdowns,int field_goals, int extra_points, int safeties){
//    return (7*touchdowns + 3*field_goals + extra_points + 2*safeties);
//}
//
//float vol(float length, float width, float height){
//    return (length*width*height);
//}
//
//int main(){
//    std::cout << "total score: " << score(2, 3, 5, 1);
//    std::cout << "\nvolume: " << vol(3.4, 1.2, 8);
//}

//hour 4

//int grade(float mygrade, float maxscale){
//    float truegrade = 100*(mygrade/maxscale);
//    if (truegrade > 100) {
//        std::cout << "not a real grade\n" << "(" <<truegrade << ")";
//    }
//        else {
//            if (truegrade >= 90){
//                std::cout << "you got an A\n" << "(" <<truegrade << ")";
//            }
//            else {
//                if (truegrade >= 80){
//                    std::cout << "you got a B\n" << "(" <<truegrade << ")";
//                }
//                else {
//                    if (truegrade >= 70){
//                        std::cout << "you got a C\n" << "(" <<truegrade << ")";
//                    }
//                    else {
//                        std::cout << "you got an F\n" << "(" <<truegrade << ")";
//                    }
//                }
//            }
//        }
//
//    return 0;
//}
//
//int main(){
//    float thegrade;
//    float thescale;
//    std::cout << "enter a grade: ";
//    std::cin >> thegrade;
//    std::cout << "what's the scale: ";
//    std::cin >> thescale;
//    grade(thegrade, thescale);
//    return 0;
//}

//hour 5

float c_to_f(float celsius){
    float fahrenheit = (9*celsius)/5 + 32;
    return fahrenheit;
}

float calc_avg(float no1, float no2){
    auto avg = (no1 + no2)/2;
    return avg;
}

//long calc_avg(long no1, long no2){
//    auto avg = (no1 + no2)/2;
//    return avg;
//}
//
//int calc_avg(int no1, int no2){
//    auto avg = (no1 + no2)/2;
//    return avg;
//}

int main(){
    float tempC;
    std::cout << "enter temp in C: ";
    std::cin >> tempC;
    std::cout << "temp in F: " << c_to_f(tempC) << "\n";

    float i1=5;
    float i2=2;
    std::cout << "avg of i1,i2: " << calc_avg(i1,i2);
    return 0;
}