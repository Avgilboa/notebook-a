#include "Notebook.hpp"
using namespace std;
using namespace ariel;

        void Notebook::write( int page, int row, int column, Direction dir, const std::string & str){
          cout <<"test" <<endl;
    }
        void Notebook::erase( int page,  int row,  int column, Direction dir,  int len){
            cout <<"test_erse" <<endl;
    }
        void Notebook::show( int page){
            cout <<"show test" <<endl;
    }
        string Notebook::read(int page, int row, int column, Direction dir,  int len){
            return "test function";
    }