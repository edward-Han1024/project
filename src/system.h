#pragma once
#include"CXX.h"

#if HAVE_CSTDLIB
int sys(string command){
    return system(command.c_str());
}
#endif
