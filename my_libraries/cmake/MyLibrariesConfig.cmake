include(CMakeFindDependencyMacro)

find_dependency(SomeLibraries REQUIRED)

include("${CMAKE_CURRENT_LIST_DIR}/MyLibrariesTargets.cmake")
