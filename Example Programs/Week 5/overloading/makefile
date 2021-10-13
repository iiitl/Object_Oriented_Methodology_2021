all: OperatorOverloadingExample MethodOverloadingExample

OperatorOverloadingExample: OperatorOverloadingExample.cpp Toy3.h Toy3.cpp cheap_toy_selector.h cheap_toy_selector.cpp
	g++ -o OperatorOverloadingExample OperatorOverloadingExample.cpp Toy3.cpp cheap_toy_selector.cpp

MethodOverloadingExample: MethodOverloadingExample.cpp ../Toy2.h ../Toy2.o ../BatteryOperatedToy2.h ../BatteryOperatedToy2.o ToyDemonstrator.h ToyDemonstrator.cpp
	g++ -o MethodOverloadingExample MethodOverloadingExample.cpp ToyDemonstrator.cpp ../Toy2.o ../BatteryOperatedToy2.o

clean:
	rm -f OperatorOverloadingExample MethodOverloadingExample
