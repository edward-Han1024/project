#if !defined(STRING)
#define STRING
#include<string>
using std::string;
#endif

#include"config.h"

// system.h
#if HAVE_CSTDLIB
extern int sys(string command);
#endif
extern const string CXX;

// colortext.h
namespace colortext{
    extern string color(string original, string color);
}