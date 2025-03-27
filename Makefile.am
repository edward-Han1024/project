AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4
AM_CPPFLAGS = -Wall
lib_LTLIBRARIES = lib/libcust.la
lib_libcust_la_SOURCES = src/main.cpp src/colortext.h config.h src/system.h preferences.h

# tests
TESTS = bin/systemtest bin/colortexttest
check_PROGRAMS = bin/systemtest bin/colortexttest
bin_systemtest_SOURCES = test/system.cpp src/main.h src/includes.h config.h 
bin_systemtest_LDFLAGS = -Llib -lcust
bin_colortexttest_SOURCES = test/colortext.cpp src/main.h src/includes.h config.h
bin_colortexttest_LDFLAGS = -Llib -lcust