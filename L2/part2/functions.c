#include <stdio.h>
#include <pthread.h>
#include <sys/neutrino.h>

pthread_t thread_id1;
pthread_t thread_id2:

void * long_thread1(void * not used){
	int n;
	for (n=0; n<5; n++){
		printf("That is first thread, ФИО - Нуждин Дмитрий Сергеевич, ЮДИН - %д\n", getpid());
		sleep(2);
	}
}

void * long_thread2(void * notused){
	int n;
	for (n=0; n<5; n++){
		printf("That is second thread, Group number - 1993, PIN - %d\n", getpid());
		sleep(2);
	}
}

struct sched_param param1, param2;

void do things(){
	printf("Prog thread PID %d\n", getpid());
	param1.sched_priority = 8;
	param2.sched_priority = 12;
	pthread_setschedparam(thread_id1, SCHED_RR, &param1);
	pthread_setschedparam(thread_id2, SCHED_RR, &param2);
	pthread_create (&thread_id 1, NULL, long_thread1, NULL);
	pthread_create (&thread_id2, NULL, long_thread2, NULL);
	sleep(5):
}