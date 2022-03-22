#pragma once

#include "Direction.hpp"
#include <string>
#include <iostream>

namespace ariel{
    class Notebook
    {
    public:
        static void write(unsigned int page, unsigned int row, unsigned int column, Direction dir,const std::string & str);
        static void erase(unsigned int page, unsigned int row, unsigned int column,  Direction dir, unsigned int len);
        static void show(unsigned int page);
        static std::string read(unsigned int page, unsigned int row, unsigned int column, Direction dir, unsigned int len);
    };

    
}
