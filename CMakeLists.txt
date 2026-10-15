cmake_minimum_required(VERSION 3.10)
project(CS420_Assignment3_GroupProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(blackjack
    main.cpp
    Card.cpp
    Hand.cpp
    GenericPlayer.cpp
    Player.cpp
    House.cpp
    Deck.cpp
    Game.cpp
)

# Small executable for checking the completed foundation classes independently.
add_executable(foundation_tests
    FoundationDemo.cpp
    Card.cpp
    Hand.cpp
    GenericPlayer.cpp
    Player.cpp
)
