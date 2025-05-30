#include "../src/cust.h"

int main(int argc, char** argv){
    cout << "NOTE: Using CXX as " << CXX << endl;
    try {
        if(system(string("mkdir testdir")) == 0){
            system(string("rmdir testdir"));
            cout << "PASS: system" << endl;
        } else {
            cout << "FAIL: system" << endl;
            return 1;
        }
    } catch(...){
        cout << "FAIL: system" << endl;
        return 99;
    }
    try {
        if (!system(string(CXX + " --version > /dev/null"))){
            cout << "PASS: CXX" << endl;
        } else {
            cout << "FAIL: CXX" << endl;
            return 2;
        }
    } catch(...){
        cout << "FAIL: CXX" << endl;
        return 99;
    }
    try {
        if (!system(string(CC + " --version > /dev/null"))){
            cout << "PASS: CC" << endl;
        } else {
            cout << "FAIL: CC" << endl;
            return 2;
        }
    } catch(...){
        cout << "FAIL: CC" << endl;
        return 99;
    }
    return 0;
}
