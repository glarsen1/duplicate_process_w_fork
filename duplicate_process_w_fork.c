#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();

    if(pid == 0)
    {
        // Child process
        printf("Child Process: PID = %d, PPID = %d\n", getpid(), getppid());
    }
    else if(pid > 0)
    {
        // Parent process
        printf("Parent Process: PID = %d, PPID = %d\n", getpid(), getppid());
    }
    else
    {
        // fork failed
        perror("fork failed");
    }
    
    return 0;
}
