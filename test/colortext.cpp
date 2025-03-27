#include"../src/main.h"
#include"../src/includes.h"
using namespace colortext;

int main(int argc, char** argv){
    try{
        if(color("this", "red") == string("\033[31mthis\033[39m")){
            cout << "PASS: color.red" << endl;
        } else {
            cout << "FAIL: color.red" << endl;
            return 99;
        }
    } catch (...){
        cout << "FAIL: color.red" << endl;
        return 99;
    }
}
