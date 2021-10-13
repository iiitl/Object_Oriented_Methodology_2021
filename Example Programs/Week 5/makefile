all: ToySellingExample

ToySellingExample: Toy2.h Toy2.o BatteryOperatedToy2.h BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.h BatteryOperatedToyMaintenance2.o FlyingToy.h FlyingToy.o PlaneToy.h PlaneToy.o ToySellingExample.cpp
	g++ -o ToySellingExample ToySellingExample.cpp Toy2.o BatteryOperatedToy2.o BatteryOperatedToyMaintenance2.o FlyingToy.o PlaneToy.o

clean:
	rm -f ToySellingExample
