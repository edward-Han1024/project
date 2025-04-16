#include "../src/cust.h"

#if HAVE_CSTDLIB
int main(int argc, char** argv){
    cout << "NOTE: Using CXX as " << CXX << endl;
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
        if (!sys(string(CXX + " --version > /dev/null"))){
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
int main(int argc, char ** argv){
    cout << "NOTE: sys test skipped" << endl;
    cout << "NOTE: CXX test skipped" << endl;
    return 77;
}
#endif