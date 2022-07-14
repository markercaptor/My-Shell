#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>
#include <string>
#include <sys/wait.h>
#include <stdlib.h>

static void cleanup(int n);
static int command(int input,int first, int last);
static void split(char* cmd);
static int run(char* cmd, int input, int first, int last);

static char line[1024];
static int n=0;
static char* args[512];
pid_t pid;
int command_pipe[2];
#define READ 0
#define WRITE 1

int history(char* hist[], int current);
int clear_history(char* hist[]);
#define MAX_CMD_LEN 128
#define HISTORY_COUNT 10
static void RN(cahr* hist[], int current, int num);

int main()
{
	
	
	
}