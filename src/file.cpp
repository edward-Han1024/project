#include "includes.h"

namespace file{
    string readall(string filename){
        ostringstream sstream{}; // vexing parse fix. Not a typo!
        ifstream file(filename);
        sstream << file.rdbuf();
        return sstream.str();
    }
}