all: ToyExample Toy2Example BatteryOperatedToyExample

ToyExample: Toy.h Toy.cpp ToyExample.cpp
	g++ -o ToyExample ToyExample.cpp Toy.cpp

Toy2Example: Toy2.h Toy2.cpp Toy2Example.cpp
	g++ -o Toy2Example Toy2Example.cpp Toy2.cpp

BatteryOperatedToyExample: Toy2.h Toy2.cpp BatteryOperatedToy.h BatteryOperatedToy.cpp BatteryOperatedToyMaintenance.h BatteryOperatedToyMaintenance.cpp BatteryOperatedToyExample.cpp
	g++ -o BatteryOperatedToyExample BatteryOperatedToyExample.cpp BatteryOperatedToy.cpp BatteryOperatedToyMaintenance.cpp Toy2.cpp

clean:
	rm -f ToyExample Toy2Example BatteryOperatedToyExample
