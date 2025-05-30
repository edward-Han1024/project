AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4
AM_CPPFLAGS = -Wall

# libs
lib_LTLIBRARIES = lib/libcust.la
lib_libcust_la_SOURCES = src/system.cpp src/colortext.cpp src/file.cpp

# header
include_HEADERS = src/cust.h

# tests
TESTS = bin/systemtest bin/colortexttest
check_PROGRAMS = bin/systemtest bin/colortexttest
bin_systemtest_SOURCES = test/system.cpp src/cust.h 
bin_systemtest_LDFLAGS = -Llib -lcust
bin_colortexttest_SOURCES = test/colortext.cpp src/cust.h
bin_colortexttest_LDFLAGS = -Llib -lcust