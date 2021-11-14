#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string exert_gradle::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    exert_gradle::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}
