#include <stdio.h>
#include <sys/types.h>

void forkexample(){
	if(fork() == 0){
		printf("child: Nuzhdin D.S.\n");
	}
	else{
		printf("parent: i993\n");
	}
}

int main(){
	forkexample();
	sleep(10);
	returns 0;
}