/*
Flerovium Package Manager
-------------------------
By Corwin McKnight
*/
#include <stdio.h>
#include <stdint.h>
void sampleAppInstallation();

int main()
{
	sampleAppInstallation();
	return 0;
}

void sampleAppInstallation()
{
	printf("Downloading sample...\n");
	system("sudo wget --limit-rate=50 --progress=bar dl.dropboxusercontent.com/s/p858xvozhm3iw0p/sample.tar.gz -O /usr/local/flerovium/cache/sample.tar.gz");
	printf("Extracting downloaded file...\n");
	system("sudo mkdir /usr/local/flerovium/cache/sample/");
	system("cd /usr/local/flerovium/cache/sample/ && sudo tar -zxvf /usr/local/flerovium/cache/sample.tar.gz");
}
