OBJ = main.o mytunes.o UI.o command.o str_util.o

mytunes: $(OBJ)
	g++ -o mytunes $(OBJ)

main.o:	main.cpp 
	g++ -c main.cpp

mytunes.o:	mytunes.cpp mytunes.h UI.h
	g++ -c mytunes.cpp

UI.o:	UI.cpp UI.h 
	g++ -c -std=c++11 UI.cpp
	
command.o:	command.cpp command.h 
	g++ -c -std=c++11 command.cpp

str_util.o:	str_util.cpp str_util.h 
	g++ -c -std=c++11 str_util.cpp

clean:
	rm -f $(OBJ) mytunes
