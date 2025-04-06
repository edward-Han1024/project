#include"includes.h"

namespace colortext {
    string color(string original, string color){
        string rest("\033[39m");
        rest = original + rest;
        if(color == string("black")){
            return string("\033[30m") + rest;
        } else if(color == string("red")){
            return string("\033[31m") + rest;
        } else if(color == string("green")){
            return string("\033[32m") + rest;
        } else if(color == string("yellow")){
            return string("\033[33m") + rest;
        } else if(color == string("blue")){
            return string("\033[34m") + rest;
        } else if(color == string("magenta")){
            return string("\033[35m") + rest;
        } else if(color == string("cyan")){
            return string("\033[36m") + rest;
        } else if(color == string("white")){
            return string("\033[37m") + rest;
        } else if(color == string("bright black") || color == string("bright_black") || color == string("gray") || color == string("grey")){
            return string("\033[90m") + rest;
        } else if(color == string("bright red") || color == string("bright_red")){
            return string("\033[91m") + rest;
        } else if(color == string("bright green") || color == string("bright_green")){
            return string("\033[92m") + rest;
        } else if(color == string("bright yellow") || color == string("bright_yellow")){
            return string("\033[93m") + rest;
        } else if(color == string("bright blue") || color == string("bright_blue")){
            return string("\033[94m") + rest;
        } else if(color == string("bright magenta") || color == string("bright_magenta") || color == string("pink")){
            return string("\033[95m") + rest;
        } else if(color == string("bright cyan") || color == string("bright_cyan")){
            return string("\033[96m") + rest;
        } else if(color == string("bright white") || color == string("bright_white")){
            return string("\033[97m") + rest;
        } else{
            throw std::invalid_argument("Color is not one of the accepted ones.");
            return original;
        }
    }
    string bold(string original){
        return string("\033[1m") + original + string("\033[22m");
    }
    string dim(string original){
        return string("\033[2m") + original + string("\033[22m]");
    }
    string it(string original){
        return string("\033[3m") + original + string("\033[22m");
    }
}
