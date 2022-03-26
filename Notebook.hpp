#pragma once
#include "Direction.hpp"
#include <string>
#include <iostream>

namespace ariel{
    class Notebook
    {
    public:
        static void write(int page,  int row, int column, Direction dir,const std::string & str);
        static void erase( int page,  int row,  int column,  Direction dir,  int len);
        static void show(int page);
        static std::string read( int page,  int row,  int column, Direction dir,  int len);
    };
}
