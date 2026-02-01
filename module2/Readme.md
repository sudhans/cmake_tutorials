Build using cmake:

To compile:

mkdir build

cd build

From inside the build directory,
cmake .. 

Note: Running cmake from inside source directory can pollute the source directories with intermediate files.

The above command tells cmake to look for CMakeLists.txt file one level up and generates the intermediate files inside build directory.

This will generate the make file (Eg. Makefile).

Execute "make" command from the build directory
