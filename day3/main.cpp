#include <iostream>

int add(int x, int y, int z){
    std::cout << "calculating...\n";
    return (x+y+z);
}

int displayMotto(){
    std::cout << "hello world\n";
    return 0;
}

int main(){
    std::cout << add(1,2,5) << "\n";
    displayMotto();
    return 0;
}