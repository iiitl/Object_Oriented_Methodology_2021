all: TheFamilyTree shm

TheFamilyTree: TheFamilyTree.cpp
	g++ -o TheFamilyTree TheFamilyTree.cpp

shm: RunMeFirst.cpp ThenRunMeToo.cpp
	g++ -o RunMeFirst RunMeFirst.cpp
	g++ -o ThenRunMeToo ThenRunMeToo.cpp

clean:
	rm -f TheFamilyTree RunMeFirst ThenRunMeToo
