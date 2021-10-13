all: AirConditionerTest FreezerTest

AirConditionerTest: Compressor.h Compressor.cpp CoolingUnit.h CoolingUnit.cpp AirConditioner.h AirConditioner.cpp AirConditionerTest.cpp
	g++ -o AirConditionerTest AirConditionerTest.cpp AirConditioner.cpp CoolingUnit.cpp Compressor.cpp

FreezerTest: Compressor.h Compressor.cpp CoolingUnit.h CoolingUnit.cpp Freezer.h Freezer.cpp FreezerTest.cpp
	g++ -o FreezerTest FreezerTest.cpp Freezer.cpp CoolingUnit.cpp Compressor.cpp

clean:
	rm -f AirConditionerTest FreezerTest
