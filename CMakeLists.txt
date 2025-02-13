cmake_minimum_required(VERSION 3.16.3)

project(dev_env_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Maak een executable van het main.cc bestand
add_executable(dev_env_project src/main.cpp)
