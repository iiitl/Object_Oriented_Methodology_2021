all: OverridingExample

OverridingExample: base.h base.cpp derived.h derived.cpp OverridingExample.cpp
	g++ -o OverridingExample OverridingExample.cpp base.cpp derived.cpp

clean:
	rm -f OverridingExample
