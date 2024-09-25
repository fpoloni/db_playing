#NOTE: THE PROJECT WAS NOT FINALIZED AND THERE IS A LOT WORK TO DO UNTIL WE GET A FUNCTIONAL PROGRAM RUNNING THE ALL EXPECTED
FEATURES.

# Database playing
The main project idea is to construct and use a database without database library resources. The whole implementation should be followed 
data of structure that might be std::vector, std::map among others.

The implementation was based on cmake, which was designed specifically for each group of files (layers). Below can be find the project structure
showing the development.

# Project structure
.
├── build.sh
├── CMakeLists.txt
├── core
│   ├── application
│   │   ├── application.cpp
│   │   └── application.h
│   ├── CMakeLists.txt
│   └── main.cpp
└── db
    ├── CMakeLists.txt
    └── repo
        ├── common
        │   └── common.h
        ├── db.cpp
        ├── db.h
        └── tables
            ├── films.h
            ├── order.h
            ├── room.h
            ├── schedule.h
            ├── screens.h
            ├── seat.h
            ├── ticket.h
            └── user.h

Description

-build.sh: script used to build the project where two different parameters can be inputted to select the platform, which can be x86 or ARM. Thus, 
when running the script without parameters, the project will be built on the ARM platform.
-core folder: here we can see the main.cpp file with gathering the whole library and secondary project components
-db folder: here there are the whole tables to allocate the database info during the program execution
