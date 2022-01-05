.PHONY: clean build move_exec move_o

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra -Werror

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
vpath *.o obj/

build:
	make Person.o
	make BasicManager.o
	make Student.o
	make Manager.o
	make run_test.o
	make PersonTest
	make BasicManagerTest
	make ManagerTest
	make move_o
	make move_exec

ManagerTest: $(TEST_Manager)
	@echo "Building test executable file for Manager"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Manager.o BasicManager.o Student.o Person.o run_test.o ManagerTest.o -o $@

BasicManagerTest: $(TEST_BasicManager)
	@echo "Building test executable file for BasicManager"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ BasicManager.o Person.o run_test.o BasicManagerTest.o -o $@

PersonTest: $(TEST_Person)
	@echo "Building test executable file for Person"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o run_test.o PersonTest.o -o $@

run_test.o: $(FILES_run_test)
	@echo "Building all the test utility files"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Manager.o: $(FILES_Manager)
	@echo "Compiling Manager.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Student.o: $(FILES_Student)
	@echo "Compiling Student.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

BasicManager.o: $(FILES_BasicManager)
	@echo "Compiling BasicManager.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Person.o: $(FILES_Person)
	@echo "Compiling Person.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

move_o:
	@echo "Moving all object files to 'obj' folder"
	mkdir obj/
	mv *.o ./obj/

move_exec:
	@echo "Moving all executables to 'build' folder"
	mkdir build
	mv ./PersonTest ./build/
	mv ./BasicManagerTest ./build/
	mv ./ManagerTest ./build/

clean:
	@echo "Removing all object files"
	rm -rf obj/
	@echo "Removing all executable files"
	rm -rf build/