#include"../src/cust.h"
#include"../src/includes.h"
using namespace colortext;

int testcolor(string test, string real){
    try{
        if(color("this", test) == real){
            cout << "PASS: colortext.color" << test << endl;
        } else {
            cout << "FAIL: colortext.color" << test << endl;
            return 99;
        }
    } catch (std::exception &e){
        cout << "FAIL: colortext.color" << test << endl;
        cout << e.what() << endl;
        return 99;
    }
    return 0;
}
int testcolorfail(string test){
    try{
        color("this", test);
        cout << "FAIL: colortext.color.error." << test << endl;
        return 1;
    } catch (std::exception &e){
        cout << "PASS: colortext.color.error." << test << endl;
        return 0;
    }
}

int main(int argc, char** argv){
    int returned;
    returned = testcolor("black", "\033[30mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("red", "\033[31mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("green", "\033[32mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("yellow", "\033[33mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("blue", "\033[34mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("magenta", "\033[35mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("cyan", "\033[36mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("white", "\033[37mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright black", "\033[90mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_black", "\033[90mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("gray", "\033[90mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("grey", "\033[90mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright red", "\033[91mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_red", "\033[91mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright green", "\033[92mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_green", "\033[92mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright yellow", "\033[93mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_yellow", "\033[93mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright blue", "\033[94mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_blue", "\033[94mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright magenta", "\033[95mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_magenta", "\033[95mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("pink", "\033[95mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright cyan", "\033[96mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_cyan", "\033[96mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright white", "\033[97mthis\033[39m");
    if(returned){return returned;}
    returned = testcolor("bright_white", "\033[97mthis\033[39m");
    if(returned){return returned;}
    returned = testcolorfail("notacolor");
    if(returned){return returned;}
    returned = testcolorfail("bright Red");
    if(returned){return returned;}
    returned = testcolorfail("bright  red");
    if(returned){return returned;}
    try{
        if(bold("this") == string("\033[1mthis\033[22m") && bold(color("this", "red")) == string("\033[1m\033[31mthis\033[39m\033[22m")){
            cout << "PASS: colortext.bold" << endl;
        } else {
            cout << "FAIL: colortext.bold" << endl;
            return 99;
        }
    } catch (std::exception &e){
        cout << "FAIL: colortext.bold" << endl;
        cout << e.what() << endl;
        return 99;
    }
    try{
        if(strong("this") == string("\033[1mthis\033[22m") && bold(color("this", "red")) == string("\033[1m\033[31mthis\033[39m\033[22m")){
            cout << "PASS: colortext.strong" << endl;
        } else {
            cout << "FAIL: colortext.strong" << endl;
            return 99;
        }
    } catch (std::exception &e){
        cout << "FAIL: colortext.strong" << endl;
        cout << e.what() << endl;
        return 99;
    }
    try{
        if(em("this") == string("\033[1mthis\033[22m") && bold(color("this", "red")) == string("\033[1m\033[31mthis\033[39m\033[22m")){
            cout << "PASS: colortext.em" << endl;
        } else {
            cout << "FAIL: colortext.me" << endl;
            return 99;
        }
    } catch (std::exception &e){
        cout << "FAIL: colortext.em" << endl;
        cout << e.what() << endl;
        return 99;
    }
    return 0;
}
