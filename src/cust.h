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
    extern string bold(string original);
    extern string dim(string original);
    extern string it(string original);
    const auto &em = colortext::bold;
    const auto &strong = colortext::bold;
    const auto &faint = colortext::dim;
    const auto &italics = colortext::it;
    const auto &italic = colortext::it;
    const auto &italicize = colortext::it;
}
