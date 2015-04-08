#include<stdio.h>



int runTimer(int timeout){
    pthread_t tid;
    int timePipe;
    Timestruct* tsp = malloc(sizeof(Timestruct));

    pipe(time);
}


int main(){

    FILE* conf;
    FILE* file;
    char buf[256];

    routingEntry* neighbor;
    fileEntry* Files;
    int num;

	int localSocket;
	int cgiSocket;
	struct sockaddr_in cgiAddr;
	unsigned int cgiAddrLength;
	char buffer[10];
	ssize_t re;
	memset(buffer, '\0', 10);
	char method[10];
	char objectName[100];
	int objLength;
	int pathLength;
	char path[100];
	char response[256];
	fd_set sockList, master;
	int fdmax;
	char* clientArr[1024];
	int p;
	
	
	
	// these are for UDP listening
    int remoteSocket;
    struct sockaddr_in udpAddr, outAddr;
	unsigned int udpAddrLength;
	char ttlUDP;
	short typeUDP;
	int senderIdUDP;
	int seqNumberUDP;
	int numLinksUDP;
	int numFilesUDP;

    //these are for ``

	//parse arguments 
	nodeID = atoi(argv[1]);
	
}


