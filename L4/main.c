#include <stdio.h>
#include <time.h>
#include <sync.h>
#include <sys/neutrino.h>

barrier_t barrier;

void *thread1 (void * not_used){
	time_t now;
	char buf[27];
	time(&now);
	printf("Stream 1, start time %s\n", ctime_r(&now, buf));
	printf("Dmitriy Nuzhdin\n");
	sleep(3);
	barrier_wait(&barrier);
	time(&now);
	printf("Barrier in stream 1, time of activation %s\n", ctime_r(&now, buf));
}

void *thread2 (void * not_used){
	time_t now;
	char buf[27];
	time(&now);
	printf("Stream 2, start time %s\n", ctime_r(&now, buf));
	printf("I993\n");
	sleep(3);
	barrier_wait(&barrier);
	time(&now);
	printf("Barrier in stream 2, time of activation %s\n", ctime_r(&now, buf));
}

main(){
	time_t now;
	char buf[27];
	barrier_init(&barrier, NULL, 3);
	printf("Start\n");
	pthread_create(NULL, NULL, thread1, NULL);
	pthread_create(NULL, NULL, thread2, NULL);
	time(&now);
	printf("Main(): wait time barrier, time %s\n", ctime_r(&now, buf));
	barrier_wait(&barrier):
	time(&now);
	printf("barrier in main(), time of activation &s\n", ctime_r(&now, buf));
	sleep(5);
}