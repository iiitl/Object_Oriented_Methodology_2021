all: SimpleThreadsExample CommunicatingThreadsExample

SimpleThreadsExample: SimpleThreadsExample.cpp Toy2.h Toy2.o BatteryOperatedToy2.h BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.h BatteryOperatedToyMaintenance2.o ToyDemonstrator2.h ToyDemonstrator2.cpp
	g++ -o SimpleThreadsExample SimpleThreadsExample.cpp ToyDemonstrator2.cpp Toy2.o BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.o -lpthread

CommunicatingThreadsExample: CommunicatingThreadsExample.cpp Toy2.h Toy2.o BatteryOperatedToy2.h BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.h BatteryOperatedToyMaintenance2.o ToyDemonstrator2.h ToyDemonstrator2.cpp
	g++ -o CommunicatingThreadsExample CommunicatingThreadsExample.cpp ToyDemonstrator2.cpp Toy2.o BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.o -lpthread

clean:
	rm -f SimpleThreadsExample CommunicatingThreadsExample
