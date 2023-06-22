
all: LinkedList

LinkedList: Demo.o SingleList.o
	g++ -o Demo.exe Demo.o SingleList.o

Demo.o: Demo.cpp 
	g++ -c Demo.cpp -o Demo.o

SingleList.o: SingleList.cpp
	g++ -c SingleList.cpp -o SingleList.o

clean:
	del Demo.o
	del SingleList.o
	del Demo.exe
