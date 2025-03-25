#ifndef STRING
#define STRING
#include<string>
using std::string;
#endif

string error_red(string original){
    return string("\033[1;31m") + original + string("\033[22;39m");
}

string warning_pink(string original){
    return string("\033[1;35m") + original + string("\033[22;39m");
}

string error_text = error_red("Error: ");
string warning_text = warning_pink("Warning: ");