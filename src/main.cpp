#include "../config.h"
#include "colortext.h"
#include "system.h"

#if !defined(IOSTREAM) && HAVE_IOSTREAM
#define IOSTREAM
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
#endif

#if !defined(FSTREAM) && HAVE_FSTREAM
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

#if !defined(VECTOR) && HAVE_VECTOR
#define VECTOR
#include<vector>
using std::vector;
#endif

#if !defined(SSTREAM) && HAVE_SSTREAM
#include<sstream>
using std::ostringstream;
#endif

#if !defined(CSTDLIB) && HAVE_CSTDLIB
#include <cstdlib>
#endif
