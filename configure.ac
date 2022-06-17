# AutoConfig Initialization
AC_INIT([hello], [1.0])
AC_PREREQ([2.69])
AC_CONFIG_SRCDIR([main/main.c]) # check if the file exist

# LibTool Setup
LT_INIT
LT_PREREQ([2.4])

# AutoMake Setup
# see https://www.gnu.org/software/automake/manual/html_node/List-of-Automake-options.html
# foreign: a strictness level.
# 1.13: version of automake.
# subdir-objects: put the object into sub-directory of the build directory corresponding to 
#                   the subdirectory of the source file.
AM_INIT_AUTOMAKE([foreign 1.13 subdir-objects])

# AutoConfig Setup
AC_PROG_CC
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
