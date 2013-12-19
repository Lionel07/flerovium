SRC_CORE:="src/main.c"
INSTALL_DIRECTORY="/usr/bin/"
all: core install

core:
	@echo "Building Flerovium"
	@gcc -O2 ${SRC_CORE} -o fpm
install:
	@echo "Installing into ${INSTALL_DIRECTORY}"
	@sudo cp fpm ${INSTALL_DIRECTORY}
	-@sudo mkdir /usr/local/flevorium
	-@sudo mkdir /usr/local/flevorium/cache
uninstall:
	@echo "Removing from ${INSTALL_DIRECTORY}"
	@sudo rm ${INSTALL_DIRECTORY}/fpm
clean:
	@rm -rf fpm *.o
prepdist: clean
