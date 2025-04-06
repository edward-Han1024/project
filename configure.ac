Define(VERSION, [0.1])
AC_INIT([cust], VERSION, [Edward Han])
AM_INIT_AUTOMAKE
AC_PROG_CXX
LT_INIT
AC_CONFIG_MACRO_DIRS([m4])
dnl check header block
dnl current: iostream, string, fstream, vector, sstream, cstdlib
AC_LANG_PUSH([C++])
AC_CHECK_HEADERS([iostream],
  [AC_DEFINE([HAVE_IOSTREAM], [1], [Define to 1 if you have the <iostream> header file.])],
  [AC_MSG_WARN([<iostream> header not found, it's okay, but resulting library will be limited])])
AC_CHECK_HEADERS([string],
  [AC_DEFINE([HAVE_STRING], [1], [Define to 1 if you have the <string> header file.])],
  [AC_MSG_ERROR([<string> header not found, this is not okay, check if you are using C++ and not C])])
AC_CHECK_HEADERS([fstream],
  [AC_DEFINE([HAVE_FSTREAM], [1], [Define to 1 if you have the <fstream> header file.])],
  [AC_MSG_WARN([<fstream> header not found, it's okay, but resulting library will be limited])])
AC_CHECK_HEADERS([vector],
  [AC_DEFINE([HAVE_VECTOR], [1], [Define to 1 if you have the <vector> header file.])],
  [AC_MSG_WARN([<vector> header not found, it's okay, but resulting library will be limited])])
AC_CHECK_HEADERS([sstream],
  [AC_DEFINE([HAVE_SSTREAM], [1], [Define to 1 if you have the <sstream> header file.])],
  [AC_MSG_WARN([<sstream> header not found, it's okay, but resulting library will be limited])])
AC_CHECK_HEADERS([cstdlib],
  [AC_DEFINE([HAVE_CSTDLIB], [1], [Define to 1 if you have the <cstdlib> header file.])],
  [AC_MSG_WARN([<cstdlib> header not found, it's okay, but resulting library will be limited])])
AC_LANG_POP([C++])
AC_CONFIG_HEADERS([config.h:config.h.in])
cp $srcdir/config.h $srcdir/src/config.h
dnl has to be at the end
AC_CONFIG_FILES([Makefile])
AC_OUTPUT