CC=g++ -std=c++11
CFLAGS=-c -Wall

all: driver

driver: main.o budget.o budgetitem.o account.o envelope.o
	$(CC) main.o budget.o budgetitem.o account.o envelope.o  -o driver

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

budget.o: budget.cpp budget.h
	$(CC) $(CFLAGS) budget.cpp

budget_item.o: budget_item.cpp budget_item.h
	$(CC) $(CFLAGS) budget_item.cpp

account.o: account.cpp account.h
	$(CC) $(CFLAGS) account.cpp

envelope.o: envelope.cpp envelope.h
	$(CC) $(CFLAGS) envelope.cpp

clean:
	rm -f *.o driver