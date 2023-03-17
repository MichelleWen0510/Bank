main: main.o Bank.o Account.o
	g++ -o main main.o Bank.o Account.o

main.o: main.cpp Bank.hpp Account.hpp

Bank.o: Bank.cpp Bank.hpp Account.hpp

Account.o: Account.cpp Account.hpp

clean:
	rm -f *.o
