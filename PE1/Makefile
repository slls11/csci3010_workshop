CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

all: main

clean:
	rm *.o main

main: Point.o
	$(CXX) $(CXXFLAGS) main.cpp Point.o -o main

Point.o: Point.cpp
	$(CXX) $(CXXFLAGES) -c Point.cpp