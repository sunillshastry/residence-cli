.PHONY: clean

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra -Werror

# Files
FILES_Person = Person.cpp Person.h
TEST_Person = PersonTest.cpp Person.o

vpath %.cpp src/ test/ util/
vpath %.h include/

PersonTest: $(TEST_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o PersonTest.o -o $@

Person.o: $(FILES_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

clean:
	rm *.o PersonTest