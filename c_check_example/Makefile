CC = gcc
CFLAGS = -g -W -Wall -Wextra -pedantic -O0 -std=c2x
LDFLAGS = 
LIBS = -lm -lc
DEPS = common.h
OBJ = app.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<
  
application: $(OBJ)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^
	
app_tests:
	gcc tests/app_check.c -lcheck -lsubunit -lm -lrt -lpthread -o check_unit_tests
	chmod +x check_unit_tests
	./check_unit_tests
	rm -rf check_unit_tests

.PHONY: clean

clean:
	rm -f *.o
	rm -f *.out
	rm -f application