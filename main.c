#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include "util.h"
#include <assert.h>
#include <string.h>
int main(int x, char** argv)
{
printf("%d \n",filesize(argv[1]));
return 0;
}
