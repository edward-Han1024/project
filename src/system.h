#pragma once
#include"../preferences.h"

#if defined(__GNUC__) && !defined(USER_CXX)
extern const string CXX = "g++";
extern const string CC ="gcc";
#elif defined(__clang__)
extern const string CXX ="clang++";
extern const string CC ="clang";
#else
#error please use g++ or clang++ instead to compile. If that is not availible, or you used a different compiler, set that in preferences.h
#endif

#if HAVE_CSTDLIB
int sys(string command){
    return system(command.c_str());
}
#endif
