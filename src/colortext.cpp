// test/colortext.cpp : contains the colortext namespace
// Copyright (C) 2025  Edward Han

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "includes.h"

namespace colortext {
    string color(string original, string color){
        string rest("\033[39m");
        rest = original + rest;
        // go through each color
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
            throw std::invalid_argument("Color is not one of the accepted ones. (" + color + ")");
            return original;
        }
    }
    // Not colors
    string bold(string original){
        return string("\033[1m") + original + string("\033[22m");
    }
    string dim(string original){
        return string("\033[2m") + original + string("\033[22m");
    }
    string it(string original){
        return string("\033[3m") + original + string("\033[23m");
    }
    string u(string original){
        return string("\033[4m") + original + string("\033[24m");
    }
}
