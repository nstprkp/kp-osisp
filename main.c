#include <sys/socket.h>
#include <netdb.h>		// getaddrinfo()
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    struct addrinfo hints, *res, *rp;

    if (argc != 3) {
		printf("You should print: ./ftclient <hostname> <port>\n");
		exit(0);
	}

    memset(&sock, 0, sizeof(struct addrinfo));
    sock.ai_family = AF_UNSPEC;
    sock.ai_socktype = SOCK_STREAM;

    char *host = argv[1];
	char *port = argv[2];

    printf("smth\n");
    return 0;
}