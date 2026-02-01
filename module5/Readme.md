*Managing Header Files"

Header files should go inside "include" and all the cpp files should go inside "src" directories.



Compiling steps are same as module 2.


mkdir build

cd build

From inside the build directory,
cmake .. 

The above command tells cmake to look for CMakeLists.txt file one level up and generates the intermediate files inside build directory.

This will generate the make file (Eg. Makefile).

Execute "make" command from the build directory