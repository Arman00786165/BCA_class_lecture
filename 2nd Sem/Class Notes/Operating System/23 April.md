# Unit 3 interposes communication & synchronization

Task -> program -> process -> threads

processes

    -p1 
Cpu -p2
    -p3

**System calls**

_Dll_ - Data link liberal

*Interposes communication(IPC)*
    1. Shared memory system/process
        Exchange of information within the program.
        e.g. p1 have the address of p2 and p2 have the address of p3 to execute them later

    2. Message passing
        Ever sender is going to send something to receiver and then the receiver will become the sender
        p1(sender) -> p2(receiver)
        p2(sender) -> p3(receiver)

**interposes synchronization**

    1. Serialization 
        The CPU is going to share then time between process.
        All tasks execute parallel.
        OS can perform multiple  task same time

    2. Mutual exclusion(MUTEXES)
        Every task is mutually exclusive on each other
        If one process need to execute other needs to get executed too 
        Task depending on each other
        P1 and p2 is going to combine to complete a task so they will share the same resources 

        B1 page 63,64

        process     p1      p2
        resources   R1      R2
                 (monitor)(printer)




**CLASSICAL PROBLEMS IN CONCURRENT PROGRAMMING**
    Executing multiple program problem
    if the CPU is able to execute the program  

*Producers/Consumers Problem*
        a problem where is too much task to done but cpu cant handle them
        A problem where CPU is in idle state due to low number of task

*Readers and Writers Problem*
        is a problem 


*Dining- Philosophers Problem*
        is a problem where all the pogrom having the same importance so the CPU get confuses which one to execute first


*Sleeping Barber Problem*
        is a problem where if the CPU is busy the other program wait sometime in ready queue and then goes back to ready state

*Locks*
    if one program asks for a recourse the CPU lock the resource and execute the process

**DEADLOCKS**

*Mutual Exclusion Condition*

*Hold and Wait Condition*

*No-Preemptive Condition*

*Circular Wait Condition*
