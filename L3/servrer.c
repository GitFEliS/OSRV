#include <stdio.h>
#include <pthread.h>
#include <inttypes.h>
#include <errno.h>
#include <string.h>
#include <sys/neutrino.h>

void server(){
	int rcvid;
	int child;
	char message[512];
	printf("server start working \n");
	chid = ChannelCreate(0);
	printf("Channel id: %d", child);
	printf("PID: %d\n", getpid());
	char name[] = "Dima";
	while(1){
		rcvid = MsgReceive(chid, message, sizeof(message), NULL);
		printf("Get message, rcvid %X\n", revid);
		printf("Message: \"%s\"\n", message);
		if(strcmp(message, name) == 0){
			strcpy(message, "Nuzhdin");
		}
		else{
			strcpy(message, "Error");
		}
		MsgReply(rcvid, EOK, message, sizeof(message)):
		printf("\"%s\"\n", message);
	}
}

int main(){{
	printf("Prog server");
	server();
	sleep(5):
	return 1;
}