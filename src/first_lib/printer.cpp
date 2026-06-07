#include "printer.h"
#include <iostream>
#include <nlohmann/json.hpp>

/**
 * @brief: simple printer fo hello 
 */
void print_hello(){
    std::cout << "Ylo Mr. Gaben, Release Half life 2 faster please ~ Lichenstein in some video on RUSH B\n";
    std::cout << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "is the version\n";
}
