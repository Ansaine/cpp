## Fork and Spawn processes in c++

1. fork() creates a new process (child process) by duplicating the parent process.
The child gets a copy of the parent's memory space but runs as an independent process.
    The return value of fork():
     0 → Inside the child process.
    >0 → Inside the parent process (returning child’s PID).
    <0 → Error (process creation failed).

2. 
spawn() is used to create a new process and execute a program immediately.
Unlike fork(), spawn() doesn’t duplicate the process but directly runs a new executable.
Common in POSIX systems (posix_spawn) and Windows (CreateProcess).

3. 
Orphan Process - When a process is still running after its parent exits, The init process (PID 1) adopts this orphan processes.
Zombie Process - A terminated child process that is not cleaned up by its parent. Still exists in the process table until the
parent reads its exit status using wait().

Ways to clean zombie processes?



