#include <stdio.h>
#include <string.h>
#include "libcommon.h"
#include "log.h"

int main(int arg, char *argv[])
{
	int i = 0;
	char out[1024];
	
	LogD("%d\n", arg);
	for(i = 0; i < arg; i++){
		LogD("%s\n",argv[i]);
	}

	printf("add a\n");
	printf("add b\n");
	
	memset(out, 0x00, sizeof(out));
	
	//×¢ÊÍ
	
	//Ìí¼Ó×¢ÊÍ1
	return 0;
}