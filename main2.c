/*

#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>

int main(void){
	int num, result;
	FILE *fp = fopen("hello.txt", "rt");
	
	if( fp == NULL )
	{
		printf("file read error!");
		return 0;
	}
	
	
	printf("number:");
	scanf("%d", &num);
	
	for(int n=1; n<=num; n++){
		fscanf(fp, "%d\n", &result);
	}
	
	printf("The answer is: %d", result);
	
	fclose(fp);
	return 0;
}

#endif

*/