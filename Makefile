INSTALL_DIRECTORY="/usr/bin/"
all: core

core:
	@echo "Building Flerovium"
	@cc -O2 src/main.c src/network.c src/package.c src/fs.c src/md5.c -o fpm
install:
	@echo "Installing into ${INSTALL_DIRECTORY}"
	@sudo cp fpm ${INSTALL_DIRECTORY}
	-@sudo mkdir /usr/local/flerovium/
	-@sudo mkdir /usr/local/flerovium/cache
uninstall:
	@echo "Removing from ${INSTALL_DIRECTORY}"
	@sudo rm ${INSTALL_DIRECTORY}/fpm
clean:
	@rm -rf fpm *.o
clean-cache:
	@sudo rm -rf /usr/local/flerovium/cache/
	-@sudo mkdir /usr/local/flerovium/cache

prepdist: clean
