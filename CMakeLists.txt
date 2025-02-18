cmake_minimum_required(VERSION 3.10)

project(LoggerExample)

# Stel de C++ standaard in
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Zet CMake-instellingen voor betere VSCode-ondersteuning
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Voeg de source files toe
set(SOURCES
    src/main.cc
    src/Logger.cc
)

# Maak een uitvoerbaar bestand
add_executable(${PROJECT_NAME} ${SOURCES})

# Voeg voor debug builds de macro ENABLE_LOGGING toe
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(ENABLE_LOGGING)
endif()
# Voeg extra instellingen toe, indien nodig (bijvoorbeeld voor optimisaties in release builds)
