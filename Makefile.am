# Library Setup
lib_LTLIBRARIES = libhello.la
libhello_la_SOURCES = lib/hello.c
libhello_la_LDFLAGS = -version-info 0:0:0
libhello_la_CFLAGS = -ggdb -O0
include_HEADERS = lib/hello.h

# Binary Setup
bin_PROGRAMS = say_hello
say_hello_SOURCES = main/main.c
say_hello_LDADD = libhello.la
say_hello_CFLAGS = -I$(top_srcdir)/lib -ggdb -O0

