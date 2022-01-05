.PHONY: clean build

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra #-Werror

# Source Code Files
FILES_Person = Person.cpp Person.h
FILES_BasicManager = BasicManager.cpp BasicManager.h
FILES_Student = Student.cpp Student.h
FILES_Manager = Manager.cpp Manager.h
FILES_run_test = run_test.cpp run_test.h

# Unit test files
TEST_Person = PersonTest.cpp Person.o run_test.o
TEST_BasicManager = BasicManagerTest.cpp BasicManager.o Person.o run_test.o
TEST_Manager = ManagerTest.cpp Manager.o BasicManager.o Person.o Student.o run_test.o

# Custom path to search directories
vpath %.cpp src/ tests/ util/
vpath %.h include/ util/

build:
	make Person.o
	make BasicManager.o
	make Student.o
	make Manager.o
	make run_test.o
	make PersonTest
	make BasicManagerTest
	make ManagerTest

ManagerTest: $(TEST_Manager)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Manager.o BasicManager.o Student.o Person.o run_test.o ManagerTest.o -o $@

BasicManagerTest: $(TEST_BasicManager)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ BasicManager.o Person.o run_test.o BasicManagerTest.o -o $@

PersonTest: $(TEST_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o run_test.o PersonTest.o -o $@

run_test.o: $(FILES_run_test)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Manager.o: $(FILES_Manager)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Student.o: $(FILES_Student)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

BasicManager.o: $(FILES_BasicManager)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Person.o: $(FILES_Person)
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

clean:
	rm *.o PersonTest BasicManagerTest