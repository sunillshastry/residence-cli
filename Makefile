.PHONY: clean

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra -Werror

# Source Code Files
FILES_Person = Person.cpp Person.h
FILES_run_test = run_test.cpp run_test.h

# Unit test files
TEST_Person = PersonTest.cpp Person.o run_test.o
TEST_BasicManager = BasicManagerTest.cpp BasicManager.o Person.o run_test.o 

# Custom path to search directories
vpath %.cpp src/ tests/ util/
vpath %.h include/ util/

BasicManagerTest: $(TEST_BasicManager)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ BasicManager.o Person.o run_test.o BasicManagerTest.o -o $@

PersonTest: $(TEST_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o run_test.o PersonTest.o -o $@

run_test.o: $(FILES_run_test)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Person.o: $(FILES_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

clean:
	rm *.o PersonTest BasicManagerTest