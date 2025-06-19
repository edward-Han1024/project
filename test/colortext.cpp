// test/colortext.cpp : test the colortext namespace
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

#include"../src/cust.h"
using namespace colortext;

void testcolor(string test, string real){
    try{
        if(color("this", test) == real){
            cout << "PASS: colortext.color" << test << endl;
        } else {
            cout << "FAIL: colortext.color" << test << endl;
            exit(1);
        }
    } catch (exception &e){
        cout << "ERROR: colortext.color" << test << endl;
        cout << e.what() << endl;
        exit(99);
    }
}

void testcolorfail(string test){
    try{
        color("this", test);
        cout << "FAIL: colortext.color.error." << test << endl;
        exit(1);
    } catch (exception &e){
        cout << "PASS: colortext.color.error." << test << endl;
    }
}

void testnoncolor(function<string(string)> notcolorfunction, string expected, string expectedlong, string name){
    try{
        if(notcolorfunction("this") == expected && notcolorfunction(color("this", "red")) == expectedlong){
            cout << "PASS: " << name << endl;
        } else {
            cout << "FAIL: " << name << endl;
            ;
        }
    } catch (exception &e){
        cout << "ERROR: colortext.bold" << endl;
        cout << e.what() << endl;
        exit(99);
    }
};

int main(int argc, char** argv){
    // --------------------------------- test all colors
    testcolor("black", "\033[30mthis\033[39m");
    testcolor("red", "\033[31mthis\033[39m");
    testcolor("green", "\033[32mthis\033[39m");
    testcolor("yellow", "\033[33mthis\033[39m");
    testcolor("blue", "\033[34mthis\033[39m");
    testcolor("magenta", "\033[35mthis\033[39m");
    testcolor("cyan", "\033[36mthis\033[39m");
    testcolor("white", "\033[37mthis\033[39m");
    testcolor("bright black", "\033[90mthis\033[39m");
    testcolor("bright_black", "\033[90mthis\033[39m");
    testcolor("gray", "\033[90mthis\033[39m");
    testcolor("grey", "\033[90mthis\033[39m");
    testcolor("bright red", "\033[91mthis\033[39m");
    testcolor("bright_red", "\033[91mthis\033[39m");
    testcolor("bright green", "\033[92mthis\033[39m");
    testcolor("bright_green", "\033[92mthis\033[39m");
    testcolor("bright yellow", "\033[93mthis\033[39m");
    testcolor("bright_yellow", "\033[93mthis\033[39m");
    testcolor("bright blue", "\033[94mthis\033[39m");
    testcolor("bright_blue", "\033[94mthis\033[39m");
    testcolor("bright magenta", "\033[95mthis\033[39m");
    testcolor("bright_magenta", "\033[95mthis\033[39m");
    testcolor("pink", "\033[95mthis\033[39m");
    testcolor("bright cyan", "\033[96mthis\033[39m");
    testcolor("bright_cyan", "\033[96mthis\033[39m");
    testcolor("bright white", "\033[97mthis\033[39m");
    testcolor("bright_white", "\033[97mthis\033[39m");
    testcolorfail("notacolor");
    testcolorfail("bright Red");
    testcolorfail("bright  red");
    // --------------------------------- test all bold names
    testnoncolor(bold, "\033[1mthis\033[22m", "\033[1m\033[31mthis\033[39m\033[23m", "colortext.bold");
    testnoncolor(strong, "\033[1mthis\033[22m", "\033[1m\033[31mthis\033[39m\033[22m", "colortext.strong");
    testnoncolor(em, "\033[1mthis\033[22m", "\033[1m\033[31mthis\033[39m\033[22m", "colortext.em");
    // --------------------------------- test all dim names
    testnoncolor(dim, "\033[2mthis\033[22m", "\033[2m\033[31mthis\033[39m\033[23m", "colortext.dim");
    testnoncolor(faint, "\033[2mthis\033[22m", "\033[2m\033[31mthis\033[39m\033[22m", "colortext.faint");
    // --------------------------------- test all it names
    testnoncolor(it, "\033[3mthis\033[23m", "\033[3m\033[31mthis\033[39m\033[223", "colortext.it");
    testnoncolor(italics, "\033[3mthis\033[23m", "\033[3m\033[31mthis\033[39m\033[22m", "colortext.italics");
    testnoncolor(italicize, "\033[3mthis\033[23m", "\033[3m\033[31mthis\033[39m\033[22m", "colortext.italicize");
    testnoncolor(italic, "\033[3mthis\033[23m", "\033[3m\033[31mthis\033[39m\033[22m", "colortext.italic");
    // --------------------------------- test all u names
    testnoncolor(u, "\033[4mthis\033[24m", "\033[4m\033[31mthis\033[39m\033[24m", "colortext.u");
    testnoncolor(underline, "\033[4mthis\033[24m", "\033[4m\033[31mthis\033[39m\033[24m", "colortext.u");
    return 0;
}
