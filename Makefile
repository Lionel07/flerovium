SRC_CORE:="src/main.c"

all: core install

core:
	@gcc -O2 ${SRC_CORE} -o fpm
install:
	
clean:
	@rm -rf fpm *.o
