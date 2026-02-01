*Managing Header Files"

Header files should go inside "include" and all the cpp files should go inside "src" directories.

CMakeLists.txt files inside each library directory is updated to use the src and include directories.

Having a folder with the exact library name inside "include" will help in identifying from where the header files are pulled for dependency.


Compiling steps are same as module 2.

mkdir build

cd build

From inside the build directory,
cmake .. 

The above command tells cmake to look for CMakeLists.txt file one level up and generates the intermediate files inside build directory.

This will generate the make file (Eg. Makefile).

Execute "make" command from the build directory