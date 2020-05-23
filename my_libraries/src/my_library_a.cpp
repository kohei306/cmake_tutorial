#include "MyLibraries/my_library_a.hpp"
#include "SomeLibraries/some_library_b.hpp"

namespace MyLibraries {

void MyLibraryA::Function() {
  SomeLibraries::SomeLibraryB slb;
  slb.Function();
}

}
