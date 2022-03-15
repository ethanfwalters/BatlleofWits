CXX = g++
CXXFLAGS  = -std=c++17 -Wall

all: main

clean:
	rm main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main