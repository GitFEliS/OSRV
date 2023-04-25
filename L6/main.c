#include <stdio.h>
#include <pthread.h>

int data_ready = 0;
int inf = 0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condvar = PTHREAD_COND_INITIALIZER;

void *consumer (void * notused){
	printf("this is consumer\n");
	while(1){
		pthread_mutex_lock(&mutex);
		printf("W1 \n");
		while(!data_ready){
			printf("W2\n");
			printf("Group I993\n");
			pthread_cond_wait(&condvar, &mutex);
			printf("W3\n");
		}
		printf("Realisation data: %d\n", inf);
		data_ready = 0;
		pthread_cond_signal(&condvar);
		pthread_mutex_unlock(&mutex);
	}
}

void *producer (void *notused){
	printf("This is suplyer\n");
	while(1){
		sleep(2);
		printf("Suplyer get data from h/w = %d\n", inf);
		pthread_mutex_lock(&mutex);
		printf("Wp1\n");
		printf("Nuzhdin Dmitriy\n");
		while(data_ready){
			printf("Wp2\n");
			pthread_cond_wait(&condvar, &mutex);
		}
		data_ready = 1;
		inf++;
		printf("Wp3\n");
		pthread_cond_signal(&condvar);
		pthread_mutex_unlock(&mutex);
	}
}

int main(){
	printf("Start\n");
	pthread_create(NULL, NULL, consumer, NULL);
	pthread_create(NULL, NULL, producer, NULL):
	sleep(10);
}
