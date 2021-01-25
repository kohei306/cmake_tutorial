#include <iostream>
#include "some_libraries/some_library_b.hpp"

namespace SomeLibraries {

void SomeLibraryB::Function() {
  std::cout << "Hello from SomeLibraryA::Function()" << std::endl;
}

}
