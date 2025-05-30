#include "CXX.h"
#include "includes.h"


int system(string command){
    return system(command.c_str());
}
