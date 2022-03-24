moneypa3: main.o Money.o Account.o
	g++ -o moneypa3 main.o Money.o Account.o

main.o: main.cpp Money.h Account.h
	g++ -c main.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp
clean :
	rm moneypa3 *.o
