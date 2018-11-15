all: Four_Right_Turns

Four_Right_Turns: main.o Room.o Map.o
	g++ -std=c++11 -lSDL2 -lSDL2_image -lSDL2_ttf main.o Room.o Map.o -o Four_Right_Turns

main.o: main.cpp Room.h Map.h
	g++ -std=c++11 -c -lSDL2 -lSDL2_image -lSDL2_ttf main.cpp

Room.o: Room.cpp Room.h
	g++ -std=c++11 -c Room.cpp

Map.o:
	g++ -std=c++11 -c Map.cpp

clean:
	rm -f main main.o Room.o Map.o
