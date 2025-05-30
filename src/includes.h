#if !defined(IOSTREAM)
#define IOSTREAM
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
#endif

#if !defined(FSTREAM)
#define FSTREAM
#include<fstream>
using std::ifstream;
using std::ofstream;
using std::remove;
#endif

#if !defined(STRING)
#define STRING
#include<string>
using std::string;
#endif

#if !defined(VECTOR)
#define VECTOR
#include<vector>
using std::vector;
#endif

#if !defined(SSTREAM)
#include<sstream>
using std::ostringstream;
#endif

#if !defined(CSTDLIB)
#include<cstdlib>
#endif

#if !defined(FUNCTIONAL)
#include<functional>
using std::function;
#endif

#if !defined(USINGS)
using std::exception;
#endif
