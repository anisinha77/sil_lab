#include <stdio.h>
#include <unistd.h>

int main() {
	int pid = fork();
	printf("Process id: %d\n", pid);
	if (pid==0)
		printf("Parent Process\n");
	else
		printf("Child Process\n");
	return 0;
}


