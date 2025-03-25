#pragma once

#if defined(__GNUC__) && !defined(CXX)
const string CXX("g++");
#elif defined(__clang__)
const string CXX("clang++");
#elif defined(_MSC_VER)
#error please use g++ or clang++ instead to compile
#endif

#ifdef HAVE_CSTDLIB
int sys(string command){
    return system(command.c_str());
}
#endif