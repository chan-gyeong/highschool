#include <stdio.h>
#include "header.h"

int main(void){
	
	FILE *fp = fopen("hello.txt", "wt");     // hello.txt 파일을 쓰기 모드(w)로 열기.
	
	for (int n=1; n<100000000; n++){
		if (CheckPrime(n)=PRIME)
			fprintf(fp, "%d\n", n);
	}

	fclose(fp);
	return 0;
}