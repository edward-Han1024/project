dnl configure.ac : file to find configure things
dnl ignore next line
# configure : file containing tests
# Copyright (C) 2025  Edward Han

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

dnl define macro to check for header and define and print message all in one
AC_DEFUN([FIND_HEADER], [AC_CHECK_HEADERS([$1],
  [AC_DEFINE([HAVE_$1], [1], [Define to 1 if you have the <$1> header file.])],
  [AC_MSG_ERROR([<$1> header not found. Please check that you are using a C++ compiler and not a C compiler.])]
)])
AC_INIT([cust], [0.1], [Edward Han])
AM_INIT_AUTOMAKE
AC_PROG_CXX
AC_PROG_CC
LT_INIT
AC_CONFIG_MACRO_DIRS([m4])
dnl check header block
dnl current: iostream, string, fstream, vector, sstream, cstdlib
AC_LANG_PUSH([C++])
FIND_HEADER([iostream])
FIND_HEADER([string])
FIND_HEADER([fstream])
FIND_HEADER([vector])
FIND_HEADER([sstream])
FIND_HEADER([cstdlib])
FIND_HEADER([functional])
AC_LANG_POP([C++])
dnl has to be at the end
# add src/CXX.h support for automatic detection
AC_CONFIG_HEADERS([config.h:config.h.in])
printf "#include \"includes.h\"
extern const string CXX(\"" > $srcdir/src/CXX.h
printf $CXX >> $srcdir/src/CXX.h
echo "\");" >> $srcdir/src/CXX.h
printf "extern const string CC(\"" >> $srcdir/src/CXX.h
printf $CC >> $srcdir/src/CXX.h
echo "\");" >> $srcdir/src/CXX.h
AC_CONFIG_FILES([Makefile])
# generate
AC_CONFIG_COMMANDS([src/cust.h], [
echo "// cust.h
// This file includes the definitions of the cust library
// To include this file, link with -lcust
// This file was automatically generated when config.status was ran
#pragma once
#ifndef CUSTHINCLUDED
#define CUSTHINCLUDED
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
" > $srcdir/src/cust.h
cat $srcdir/config.h >> $srcdir/src/cust.h
cat $srcdir/src/includes.h >> $srcdir/src/cust.h
cat $srcdir/src/cust.h.in >> $srcdir/src/cust.h
echo "#endif" >> $srcdir/src/cust.h
])
AC_OUTPUT
