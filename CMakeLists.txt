cmake_minimum_required(VERSION 2.8)
project(BMI)
add_executable(BMI BMI.c)
install(TARGETS bmi DESTINATION bin)
