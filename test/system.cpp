#include "../src/main.h"
#include "../src/includes.h"

#if HAVE_CSTDLIB
int main(int argc, char** argv){
    cout << CXX << endl;
    try {
        if(sys(string("mkdir testdir")) == 0){
            sys(string("rmdir testdir"));
            cout << "PASS: sys" << endl;
        } else {
            cout << "FAIL: sys" << endl;
            return 1;
        }
    } catch(...){
        cout << "FAIL: sys" << endl;
        return 99;
    }
    try {
        if (sys(string(CXX + " --version")) == 0){
            cout << "PASS: CXX" << endl;
        } else {
            cout << "FAIL: CXX" << endl;
            return 2;
        }
    } catch(...){
        cout << "FAIL: sys" << endl;
        return 99;
    }
    return 0;
}
#else
int main(int argc, char ** argv){return 77;}
#endif