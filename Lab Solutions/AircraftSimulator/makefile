all: Simulator

Simulator: Aircraft.h Aircraft.cpp X.h X.cpp Y.h Y.cpp Z.h Z.cpp Simulator.cpp
	g++ -o Simulator Simulator.cpp Aircraft.cpp X.cpp Y.cpp Z.cpp

clean:
	rm -f Simulator
