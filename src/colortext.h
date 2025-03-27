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
        } else if(color == string("bright black") || color == string("gray") || color == string("grey")){
            return string("\033[90m") + rest;
        } else if(color == string("bright red")){
            return string("\033[91m") + rest;
        } else if(color == string("bright green")){
            return string("\033[92m") + rest;
        } else if(color == string("bright yellow")){
            return string("\033[93m") + rest;
        } else if(color == string("bright blue")){
            return string("\033[94m") + rest;
        } else if(color == string("bright magenta") || color == string("pink")){
            return string("\033[95m") + rest;
        } else if(color == string("bright cyan")){
            return string("\033[96m") + rest;
        } else if(color == string("bright white")){
            return string("\033[97m") + rest;
        } else{
            throw std::invalid_argument("Color is not one of the accepted ones.");
            return original;
        }
    }
}
