#include "printer.h"
#include <iostream>
#include <nlohmann/json.hpp>
#include <cxxopts.hpp>
#include <spdlog/logger.h>


int main() {
  print_hello();
  std::cout << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR
            << "\n";
}