# Stacks, Queues - LIFO, FIFO :magnet:

## What do LIFO and FIFO mean:question:
FIFO is an abbreviation for first in, first out. It is a method for handling data structures where the first element is processed first and the newest element is processed last.

<img src=”https://tutorialspoint.dev/image/FIFO.jpg” alt=”FIFO”>

LIFO is an abbreviation for Last in, first out is same as fist in, last out (FILO). It is a method for handling data structures where the last element is processed first and the first element is processed last.

<img src=”https://tutorialspoint.dev/image/LIFO.jpg” alt=”LIFO”>

| FIFO | LIFO |
| ----------- | ----------- |
| In this, the new element is inserted below the existing element, So that the oldest element can be at the top and taken out first. | In this, the new element is inserted above the existing element, So that the newest element can be at the top and taken out first. |
| Therefore, the First element to be entered in this approach, gets out First. | Therefore, the First element to be entered in this approach, gets out Last. |
| In computing, FIFO approach is used as an operating system algorithm, which gives every process CPU time in the order they arrive. | In computing, LIFO approach is used as a queuing theory that refers to the way items are stored in types of data structures. |
| The data structure that implements FIFO is Queue. | The data structure that implements LIFO is Stack. |

## What is a stack, and when to use it:question:

Is a data structure used to store a collection of objects. Individual items can be added and stored in a stack using a push operation. Objects can be retrieved using a pop operation, which removes an item from the stack. LIFO stacks, for example, can be used to retrieve recently used objects, from a cache.

#### Strengths:

    • Fast operations. All stack operations take O(1) time.

#### Uses:

• The call stack is a stack that tracks function calls in a program.
 When a function returns, which function do we "pop" back to? The last one that "pushed" a function call.

• Depth-first search uses a stack (sometimes the call stack) to keep track of 
which nodes to visit next.

• String parsing—stacks turn out to be useful for several types of string parsing.

#### Implementation:
You can implement a stack with either a linked list or a dynamic array—they both work pretty well.


## What is a queue, and when to use it:question:
is a list of jobs that are awaiting to be processed. When a job is sent to a queue, it is simply added to the list of jobs. Computer programs often work with queues as a way to order tasks. For example, when the CPU finishes one computation, it will process the next one in the queue.

#### Strengths:

    • Fast operations. All queue operations take O(1) time.

#### Uses

• Breadth-first search uses a queue to keep track of the nodes to visit next.

• Printers use queues to manage jobs—jobs get printed in the order 
they're submitted.

• Web servers use queues to manage requests—page requests get fulfilled in the order they're received.

• Processes wait in the CPU scheduler's queue for their turn to run.

#### Implementation
Queues are easy to implement with linked lists:
    • To enqueue, insert at the tail of the linked list.
    • To dequeue, remove at the head of the linked list.

## What is the proper way to use global variables:question:


Global variables are variables that are accessible regardless of scope.

Global variables should be used when multiple functions need to access the data or write to an object. For example, if you had to pass data or a reference to multiple functions such as a single log file, a connection pool, or a hardware reference that needs to be accessed across the application. This prevents very long function declarations and large allocations of duplicated data.

You should typically not use global variables unless absolutely necessary because global variables are only cleaned up when explicitly told to do so or your program ends. If you are running a multi-threaded application, multiple functions can write to the variable at the same time. If you have a bug, tracking that bug down can be more difficult because you don't know which function is changing the variable. You also run into the problem of naming conflicts unless you use a naming convention that explicitly gives global variables a unique name.