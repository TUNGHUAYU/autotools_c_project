# -f: force
# -i: install ( auxiliary files )
# -v: verbose
autoreconf -fiv


# create build directory ( out of source tree )
mkdir build
cd build

# execute configure 
# prefix: install place what you want.
./../configure --prefix=$(pwd)/install

# make
make 

# install
make install



