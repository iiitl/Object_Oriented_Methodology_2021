all: objects exec

exec: PlaneToyExample

objects: Toy2 BatteryOperatedToyMaintenance2 BatteryOperatedToy2 FlyingToy PlaneToy

Toy2: Toy2.h Toy2.cpp
	g++ -c Toy2.cpp

BatteryOperatedToyMaintenance2: BatteryOperatedToyMaintenance2.h BatteryOperatedToyMaintenance2.cpp
	g++ -c BatteryOperatedToyMaintenance2.cpp

BatteryOperatedToy2: BatteryOperatedToy2.h BatteryOperatedToy2.cpp
	g++ -c BatteryOperatedToy2.cpp

FlyingToy: FlyingToy.h FlyingToy.cpp
	g++ -c FlyingToy.cpp

PlaneToy: PlaneToy.h PlaneToy.cpp
	g++ -c PlaneToy.cpp

PlaneToyExample: Toy2.h Toy2.cpp BatteryOperatedToy2.h BatteryOperatedToy2.cpp BatteryOperatedToyMaintenance2.h BatteryOperatedToyMaintenance2.cpp FlyingToy.h FlyingToy.cpp PlaneToy.h PlaneToy.cpp PlaneToyExample.cpp
	g++ -o PlaneToyExample PlaneToyExample.cpp PlaneToy.cpp FlyingToy.cpp BatteryOperatedToy2.cpp BatteryOperatedToyMaintenance2.cpp Toy2.cpp

clean:
	rm -f *.o PlaneToyExample
