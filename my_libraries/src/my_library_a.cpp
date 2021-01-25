#include "my_libraries/my_library_a.hpp"
#include "some_libraries/some_library_b.hpp"

namespace MyLibraries {

void MyLibraryA::Function() {
  SomeLibraries::SomeLibraryB slb;
  slb.Function();
}

}
