#ifndef PACK_T
#define PACK_T
typedef struct {
	int isInstalled;
	int isRemoved;
	int isUnpacked;
	int isDownloaded;
	char* name;
} package_t;
#endif
