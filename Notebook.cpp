#include "Notebook.hpp"
using namespace std;
using namespace ariel;

        void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction dir, const std::string & str){
          cout <<"test" <<endl;
    }
        void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction dir, unsigned int len){
            cout <<"test_erse" <<endl;
    }
        void Notebook::show(unsigned int page){
            cout <<"show test" <<endl;
    }
        string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction dir, unsigned int len){
            return "test function";
    }