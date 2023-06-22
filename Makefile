all: LinkedList

LinkedList: Demo.o SingleList.o
	g++ -o .\LinkedList\Demo.exe .\LinkedList\Demo.o .\LinkedList\SingleList.o

Demo.o: Demo.cpp 
	g++ -c .\LinkedList\Demo.cpp -o .\LinkedList\Demo.o

SingleList.o: SingleList.cpp
	g++ -c .\LinkeList\SingleList.cpp -o .\LinkedList\SingleList.o

