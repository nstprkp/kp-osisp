#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fstream>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>

#ifdef WINDOWS
#include <direct.h>
    #define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

#define BUFFER_SIZE 4096

struct command {
    char code[250];
    char serv_code[250];
    char arg[50];
};

void menu_client();
void read_input(char* buffer, int size);
int create_socket(int port,char *addr);
int read_command_client(char* buf, int size, struct command *cstruct);
void client_show_list(int sockfd, char* server_ip);
void client_get_file(int sockfd, char* server_ip, struct command cmd);
void client_put_file(int sockfd, char* server_ip, struct command cmd);
void client_cd_action(int sockfd, struct command cmd);
void client_pwd_action(int sockfd);
void client_help_action();