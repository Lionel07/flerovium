//package.c
#include "package.h"
int install_package()
{
}
int remove_package()
{
}
int check_package_dependencies(package_t pack)
{
	
}
int extract_package(char* archive_path,package_t pack)
{
	system("cd /usr/local/flerovium/cache/ && tar -zxf "+archive_path)
}
void populate_package()
{
}
