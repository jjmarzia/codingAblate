#include <iostream>

//hour 6

//float display_multiples(int base, int loops){
//    for (int i=0; i<loops; i++){
//        int iteration = base*(i+1);
//        std::cout << iteration << "\n";
//    }
//    return 0;
//}

//int badteacher(char grade){
//    switch (grade){
//        case 'A':
//            std::cout << "good\n";
//            break;
//        case 'B':
//            std::cout << "not good\n";
//            break;
//        case 'C':
//            std::cout << "bad\n";
//            break;
//        case 'D':
//            std::cout << "really bad\n";
//            break;
//        case 'F':
//            std::cout << "awful get out\n";
//            break;
//        default:
//            std::cout << "not even a grade\n";
//            break;
//    }
//    return 0;
//}
//
//int main(){
//    char mygrade;
//    std::cout << "enter a grade (ABCDF): ";
//    std::cin >> mygrade;
//    badteacher(mygrade);
//    display_multiples(4, 200);
//    return 0;
//}

//hour 7
int sentence(std::string firstname, std::string lastname){
    std::cout << "at a party you could introduce yourself by saying, 'my name is " << firstname << " " << lastname << "'";
    return 0;
}

//float linspace(int a, int b, int c){
//    float line[c];
//    float delta = (b-a)/(c-1);
//    for (int i=0; i<c; i++){
//        line[i] = i*delta;
//    }
//    return line;
//}

int weightGoals(float myweight, float goalweight){
//    int c=6;
    float goals[] = {0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1, 0};
    for (int i=0; i<10; i++){
        std::cout << "goal " << i+1 << ": " << myweight - (myweight-goalweight)*(1-goals[i]) << "\n";
    }
    return 0;

}

int main(){
    float myweight;
    float goalweight;
//    std::string myfirstname;
//    std::string mylastname;
//    std::cout << "what's your first name?: ";
//    std::cin >> myfirstname;
//    std::cout << "what's your last name?: ";
//    std::cin >> mylastname;
//    sentence(myfirstname, mylastname);
    std::cout << "what's your weight?: ";
    std::cin >> myweight;
    std::cout << "what's your goal weight?: ";
    std::cin >> goalweight;
    weightGoals(myweight, goalweight);
    return 0;
}
