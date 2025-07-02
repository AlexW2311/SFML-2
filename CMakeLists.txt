cmake_minimum_required(VERSION 3.28)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

# Add source files and headers
set(SOURCE_FILES
    src/main.cpp
    class/fontManager.cpp
    class/renderer.cpp
)

set(HEADER_FILES
    header/fontManager.hpp
    header/renderer.hpp
)


add_executable(main ${SOURCE_FILES} ${HEADER_FILES})

target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE SFML::Graphics)


# Group source files in Xcode
source_group("Source Files\\src" FILES src/main.cpp)
source_group("Source Files\\class" FILES class/fontManager.cpp class/renderer.cpp)

# Group header files in Xcode
source_group("Header Files\\header" FILES header/fontManager.hpp header/renderer.hpp)
