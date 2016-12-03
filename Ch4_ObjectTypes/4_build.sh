#//http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/


# 
#c++ -c 4_calculateCircle.cpp -o 4_calculateCircle
#c++ -c 4_ObjectsTypes.cpp -o 4_ObjectsTypes
#c++ -o 4_objecttypes 4_ObjectsTypes 4_calculateCircle -v
#chmod +x 4_objecttypes
#./4_objecttypes
#//chmod +x build.sh
#//./build.sh

#rm 4_objecttypes
c++  4_ObjectsTypes.cpp -o 4_objecttypes -v
chmod +x 4_objecttypes 
./4_objecttypes
