#//http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/


#make 3_functions
c++ -c 3_Utilities.cpp -o 3_Utilities
c++ -c 3_functions.cpp -o 3_functions
c++ -o 3_functionsall 3_Utilities 3_functions
chmod +x 3_functionsall
./3_functionsall
#//chmod +x build.sh
#//./build.sh

