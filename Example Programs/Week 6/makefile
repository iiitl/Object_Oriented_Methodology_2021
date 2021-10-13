all: ToyPamphletGenerator ToyValidationExample

ToyPamphletGenerator: Toy2.h Toy2.o ToyPamphlet.h ToyPamphlet.cpp ToyPamphletGenerator.cpp
	g++ -o ToyPamphletGenerator ToyPamphletGenerator.cpp ToyPamphlet.cpp Toy2.o

ToyValidationExample: Toy2.h Toy2.o ToyValidator.h ToyValidator.cpp ToyValidationExample.cpp
	g++ -o ToyValidationExample ToyValidationExample.cpp ToyValidator.cpp Toy2.o

clean:
	rm -f ToyPamphletGenerator ToyValidationExample
