

Layout of autotools hello project

[project layout]
.
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── configure.ac
└── readme.txt

2 directories, 6 files

[`autoreconf -fiv`]
.
├── autom4te.cache
│   ├── output.0
│   ├── output.1
│   ├── requests
│   ├── traces.0
│   └── traces.1
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── Makefile.in
├── aclocal.m4
├── auto_build.sh
├── compile
├── config.guess
├── config.h.in
├── config.sub
├── configure
├── configure.ac
├── depcomp
├── install-sh
├── ltmain.sh
├── missing
└── readme.txt

3 directories, 23 files

[`mkdir` build]
.
├── autom4te.cache
│   ├── output.0
│   ├── output.1
│   ├── requests
│   ├── traces.0
│   └── traces.1
├── build
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── Makefile.in
├── aclocal.m4
├── auto_build.sh
├── compile
├── config.guess
├── config.h.in
├── config.sub
├── configure
├── configure.ac
├── depcomp
├── install-sh
├── ltmain.sh
├── missing
└── readme.txt

4 directories, 23 files


[`./../configure --prefix=$(pwd)/install` in build/]
.
├── autom4te.cache
│   ├── output.0
│   ├── output.1
│   ├── requests
│   ├── traces.0
│   └── traces.1
├── build
│   ├── lib
│   ├── main
│   ├── Makefile
│   ├── config.h
│   ├── config.log
│   ├── config.status
│   ├── libtool
│   └── stamp-h1
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── Makefile.in
├── aclocal.m4
├── auto_build.sh
├── compile
├── config.guess
├── config.h.in
├── config.sub
├── configure
├── configure.ac
├── depcomp
├── install-sh
├── ltmain.sh
├── missing
└── readme.txt

6 directories, 29 files

[`make` in build/]
.
├── autom4te.cache
│   ├── output.0
│   ├── output.1
│   ├── requests
│   ├── traces.0
│   └── traces.1
├── build
│   ├── lib
│   │   ├── libhello_la-hello.lo
│   │   └── libhello_la-hello.o
│   ├── main
│   │   └── say_hello-main.o
│   ├── Makefile
│   ├── config.h
│   ├── config.log
│   ├── config.status
│   ├── libhello.la
│   ├── libtool
│   ├── say_hello
│   └── stamp-h1
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── Makefile.in
├── aclocal.m4
├── auto_build.sh
├── compile
├── config.guess
├── config.h.in
├── config.sub
├── configure
├── configure.ac
├── depcomp
├── install-sh
├── ltmain.sh
├── missing
└── readme.txt

6 directories, 34 files

[after `make install` in build/]
.
├── autom4te.cache
│   ├── output.0
│   ├── output.1
│   ├── requests
│   ├── traces.0
│   └── traces.1
├── build
│   ├── install
│   │   ├── bin
│   │   │   └── say_hello
│   │   ├── include
│   │   │   └── hello.h
│   │   └── lib
│   │       ├── libhello.a
│   │       ├── libhello.la
│   │       ├── libhello.so -> libhello.so.0.0.0
│   │       ├── libhello.so.0 -> libhello.so.0.0.0
│   │       └── libhello.so.0.0.0
│   ├── lib
│   │   ├── libhello_la-hello.lo
│   │   └── libhello_la-hello.o
│   ├── main
│   │   └── say_hello-main.o
│   ├── Makefile
│   ├── config.h
│   ├── config.log
│   ├── config.status
│   ├── libhello.la
│   ├── libtool
│   ├── say_hello
│   └── stamp-h1
├── lib
│   ├── hello.c
│   └── hello.h
├── main
│   └── main.c
├── Makefile.am
├── Makefile.in
├── aclocal.m4
├── auto_build.sh
├── compile
├── config.guess
├── config.h.in
├── config.sub
├── configure
├── configure.ac
├── depcomp
├── install-sh
├── ltmain.sh
├── missing
└── readme.txt

10 directories, 41 files
