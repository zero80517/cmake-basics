#include <iostream>
#include <cmath>
#include "TutorialConfig.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  } else {
    const double inputValue = std::stod(argv[1]);
    std::cout << "Square root of " << argv[1] << " is " << sqrt(inputValue) << std::endl;
    return 0;
  }
}
