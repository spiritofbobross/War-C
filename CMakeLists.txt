cmake_minimum_required(VERSION 3.19)
project(War)

set(CMAKE_CXX_STANDARD 14)

add_executable(War src/war/War.cpp src/war/Card.cpp src/war/Card.h src/war/Rank.cpp src/war/Rank.h src/war/Suit.cpp src/war/Suit.h src/war/Pile.cpp src/war/Pile.h src/war/Player.cpp src/war/Player.h)