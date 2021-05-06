//
//  main.cpp
//  dummy
//
//  Created by Chris on 05.05.21.
//

#include <iostream>

void myCoolMethod() {}

void thisIsAnewMethod() {
    std::cout << "There will be so many conflicts..." << std::endl;
    //hopefully this doesn't create a conflict
    //but it happened
    //some fixes wuhu
}

void anotherMethod() {}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Marc Kurz!" << std::endl;
    if(argc) {
        std::cout << "argc is always atleast 1" << std::endl;
    }
    return 0;
}
