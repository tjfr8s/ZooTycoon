
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = 

SRCEXT = cpp
INCEXT = hpp

SRCS = $(shell find . -maxdepth 1 -type f -name \*.$(SRCEXT))
OBJS = $(patsubst ./%, ./%, $(SRCS:.$(SRCEXT)=.o))
INCS = $(shell find . -maxdepth 1 -type f -name \*.$(INCEXT))

ZooTycoon: $(OBJS)
	$(CXX) $^ -o ZooTycoon

AnimalTest: Animal.o AnimalTest.o
	$(CXX) $^ -o AnimalTest

TigerTest: Animal.o Tiger.o TigerTest.o
	$(CXX) $^ -o TigerTest

PenguinTest: Animal.o Penguin.o PenguinTest.o
	$(CXX) $^ -o PenguinTest

TurtleTest: Animal.o Turtle.o TurtleTest.o
	$(CXX) $^ -o TurtleTest


$(OBJS): $(SRCS) $(INCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.$(SRCEXT))

AnimalTest.o: ./test/AnimalTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/AnimalTest.cpp

TigerTest.o: ./test/TigerTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/TigerTest.cpp

PenguinTest.o: ./test/PenguinTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/PenguinTest.cpp
	
TurtleTest.o: ./test/TurtleTest.cpp
	$(CXX) $(CXXFLAGS) -c ./test/TurtleTest.cpp


.PHONY: clean
clean:
	rm *.o ZooTycoon AnimalTest TigerTest PenguinTest TurtleTest
	

