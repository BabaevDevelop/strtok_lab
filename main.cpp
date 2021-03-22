#include <iostream>
#include "strtokLab.h"


int main() {
    char string[100] = "hello my dear friend";
    char delimeter[] = " ";

    char *str = myStrtok(string, delimeter);
    while (str) {
        std::cout << str << std::endl;
        delete [] str;
        str = myStrtok(string, delimeter);
    }
    return 0;
}
