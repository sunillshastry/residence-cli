.PHONY: clean build move_exec move_o rebuild

# Variables
CPPVERSION = -std=c++11
CPPFLAGS = -Wall -Wextra -Werror

# Source Code Files
FILES_Person = Person.cpp Person.h
FILES_BasicManager = BasicManager.cpp BasicManager.h
FILES_Student = Student.cpp Student.h
FILES_Manager = Manager.cpp Manager.h
FILES_Consultant = Consultant.cpp Consultant.h
FILES_run_test = run_test.cpp run_test.h

# Unit test files
TEST_Person = PersonTest.cpp Person.o run_test.o
TEST_BasicManager = BasicManagerTest.cpp BasicManager.o Person.o run_test.o
TEST_Manager = ManagerTest.cpp Manager.o BasicManager.o Person.o run_test.o
TEST_Consultant = ConsultantTest.cpp Consultant.o Manager.o BasicManager.o Person.o run_test.o
TEST_Student = StudentTest.cpp Student.o Person.o run_test.o

# Custom path to search directories
vpath %.cpp src/ tests/ util/
vpath %.h include/ util/
vpath %.o obj/

build:
	make Person.o
	make BasicManager.o
	make Student.o
	make Manager.o
	make Consultant.o
	make run_test.o
	make PersonTest
	make BasicManagerTest
	make ManagerTest
	make StudentTest
	make ConsultantTest
	make move_o
	make move_exec

rebuild:
	make clean
	make build

ConsultantTest: $(TEST_Consultant)
	@echo "\nBuilding test executable file for Consultant"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Consultant.o Manager.o BasicManager.o Person.o run_test.o ConsultantTest.o -o $@

StudentTest: $(TEST_Student)
	@echo "\nBuilding test executable file for Student"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Student.o Person.o run_test.o StudentTest.o -o $@

ManagerTest: $(TEST_Manager)
	@echo "\nBuilding test executable file for Manager"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Manager.o BasicManager.o Person.o run_test.o ManagerTest.o -o $@

BasicManagerTest: $(TEST_BasicManager)
	@echo "\nBuilding test executable file for BasicManager"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ BasicManager.o Person.o run_test.o BasicManagerTest.o -o $@

PersonTest: $(TEST_Person)
	@echo "\nBuilding test executable file for Person"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<
	g++ Person.o run_test.o PersonTest.o -o $@

run_test.o: $(FILES_run_test)
	@echo "\nBuilding all the test utility files"
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Consultant.o: $(FILES_Consultant)
	@echo "\nCompiling Consultant.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Manager.o: $(FILES_Manager)
	@echo "\nCompiling Manager.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Student.o: $(FILES_Student)
	@echo "\nCompiling Student.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

BasicManager.o: $(FILES_BasicManager)
	@echo "\nCompiling BasicManager.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

Person.o: $(FILES_Person)
	@echo "\nCompiling Person.cpp to its object file..."
	g++ $(CPPVERSION) $(CPPFLAGS) -c $<

move_o:
	@echo "\nMoving all object files to 'obj' folder"
	mkdir obj/
	mv *.o ./obj/

move_exec:
	@echo "\nMoving all executables to 'build' folder"
	mkdir build
	mv ./PersonTest ./build/
	mv ./BasicManagerTest ./build/
	mv ./ManagerTest ./build/
	mv ./StudentTest ./build/
	mv ./ConsultantTest ./build/

clean:
	@echo "\nRemoving all object files"
	rm -rf obj/
	@echo "\nRemoving all executable files"
	rm -rf build/