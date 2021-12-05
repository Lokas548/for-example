cmake_minimum_required(VERSION 3.22.0)


set(lab6)				 # имя проекта		 
project("${lab6}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable(lab6 lab6.cpp func.cpp)


