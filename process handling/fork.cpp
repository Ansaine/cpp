#include<bits/stdc++.h>

using namespace std;

int main(){
    pid_t pid = fork();     // create child process

    if (pid == 0) {                                         // Inside the child process.
        sleep(2);
        printf("Child Process (PID: %d)\n", getpid());      
    } else if (pid > 0) {                                   // Inside the parent process (returning child’s PID).
        printf("Parent Process (PID: %d)\n", getpid());     
    } else {
        printf("Fork failed!\n");                           // Error (process creation failed).
    }

    return 0;
}