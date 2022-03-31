DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG -O3

FLAGS = $(RELEASE_FLAGS)

preprocess:
	g++ $(FLAGS) -E functions.cc > Temp.cc

assemble:
	g++ $(FLAGS) -S functions.cc

compile:
	g++ $(FLAGS) -c functions.cc -o functions.o

build:
	g++ $(FLAGS) functions.o -o functions

print_exe:
	objdumb -CS functions
