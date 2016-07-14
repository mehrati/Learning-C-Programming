#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main()
{
    pid_t pid;
    pid = fork();

    if (pid < 0) { perror("fork"); exit(0); }

    if (pid == 0) {
       printf("Child process created and will now wait for signal...\n");
       pause(); //waits for signal
    }
    else {
       //do some other work in parent process here
       printf("Killing child (%ld) from parent process!", (long) pid);
       kill(pid, SIGKILL);
    }
    return 0;
}
