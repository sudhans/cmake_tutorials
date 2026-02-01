To compile:

mkdir build

cd build

From inside the build directory,
cmake .. 

The above command tells cmake to look for CMakeLists.txt file one level up and generates the intermediate files inside build directory.

This will generate the make file (Eg. Makefile).

Execute "make" command from the build directory
