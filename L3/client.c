#include <stdio.h>
#include <pthread.h>
#include <inttypes.h>
#include <errno.h>
#include <sys/neutrino.h>
#include <string.h>

int main(){
	char msg[20];
	char rmsg[200];
	int coid;
	long serv_pid;
	printf("Prog client\nenter servers PID\n");
	scanf("%ld", &seri pid):
	coid = ConnectAttach(0, serv_pid, 1, 0, 0):
	printf("Connect res %d,\enter message:\n", coid);
	scanf("%s", &msg);
	printf("You entered message: \"%s\"\n", smsg);
	if(MsgSend(coid, smsg, strlen(smsg)+ 1, rmsg, sizeof(rmsg)) == -1){
		printf("Error message send\n");
	}
	ConnectDetach(coid);
	printf("Type something and press enter to exit\n");
	scanf("%s", &smsg);
	return 1;
}