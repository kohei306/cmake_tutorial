#ifndef MYLIBRARIES_INCLUDE_MYLIBRARIES_MY_LIBRARY_A_HPP_
#define MYLIBRARIES_INCLUDE_MYLIBRARIES_MY_LIBRARY_A_HPP_

#include "some_libraries/some_library_a.hpp"

namespace MyLibraries {

class MyLibraryA {
 public:
  void Function();

 private:
  SomeLibraries::SomeLibraryA sla;
};

}  // namespace MyLibraries

#endif  // MYLIBRARIES_INCLUDE_MYLIBRARIES_MY_LIBRARY_A_HPP_
