.PHONY: clean

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra -Werror

# Source Code Files
FILES_Person = Person.cpp Person.h

# Unit test files
TEST_Person = PersonTest.cpp Person.o

# Custom path to search directories
vpath %.cpp src/ tests/ util/
vpath %.h include/

PersonTest: $(TEST_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o PersonTest.o -o $@

Person.o: $(FILES_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

clean:
	rm *.o PersonTest