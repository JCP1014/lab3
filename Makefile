B: Clock.o B.o
	g++ -o B B.o Clock.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

B.o: B.cpp Clock.h
	g++ -c B.cpp

