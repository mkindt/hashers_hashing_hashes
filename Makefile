
CPP = g++
CFLAGS = -Wall -Wextra -Werror


# ttest: tree_test.cpp BST.o Node.o
#	$(CPP) $(CFLAGS) -o ttest $^

# Hash.o: Hash.h Hash.cpp
#	$(CPP) $(CFLAGS) -c Hash.cpp

etest: entry_test.cpp Entry.o
	$(CPP) $(CFLAGS) -o etest entry_test.cpp Entry.o

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o;
	rm -f ntest; rm -f ttest;
	rm -f *~;
