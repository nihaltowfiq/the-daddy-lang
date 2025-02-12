root/
│
├── 01-introduction/
│ ├── 000.hello-world.c # Basic hello world example
│ ├── 001.introduction-to-c.c # Introduction to C syntax and concepts
│ ├── 002.data-types.c # Basic data types (int, float, etc.)
│ ├── 003.control-structures.c # if-else, loops (for, while)
│ ├── 004.functions.c # Function declaration and definition
│ ├── 005.pointers.c # Basic pointers in C
│ ├── 006.memory-management.c # malloc, free, calloc, etc.
│
├── 02-data-structures/
│ ├── 010.linked-list.c # Singly linked list
│ ├── 011.doubly-linked-list.c # Doubly linked list
│ ├── 012.stack.c # Stack data structure
│ ├── 013.queue.c # Queue data structure
│ ├── 014.binary-tree.c # Binary tree implementation
│ ├── 015.binary-search-tree.c # Binary search tree (BST)
│ ├── 016.heap.c # Max-heap and min-heap
│ ├── 017.hash-table.c # Hash table implementation
│
├── 03-algorithms/
│ ├── 020.sorting-bubble.c # Bubble sort
│ ├── 021.sorting-selection.c # Selection sort
│ ├── 022.sorting-insertion.c # Insertion sort
│ ├── 023.sorting-quick.c # Quick sort
│ ├── 024.sorting-merge.c # Merge sort
│ ├── 025.sorting-heap.c # Heap sort
│ ├── 026.searching-binary.c # Binary search
│ ├── 027.searching-linear.c # Linear search
│ ├── 028.dynamic-programming-knapsack.c # Knapsack problem (Dynamic Programming)
│ ├── 029.dfs-bfs.c # Depth-first and breadth-first search algorithms
│ ├── 030.greedy-algorithms.c # Example of greedy algorithms
│ ├── 031.shortest-path-dijkstra.c # Dijkstra’s algorithm for shortest path
│ ├── 032.floyd-warshall.c # Floyd-Warshall for all pairs shortest path
│
├── 04-advanced-concepts/
│ ├── 040.threading.c # Introduction to multithreading
│ ├── 041.mutex-lock.c # Mutex and thread synchronization
│ ├── 042.semaphores.c # Semaphores in C
│ ├── 043.memory-mapped-files.c # Memory-mapped files
│ ├── 044.inter-process-communication.c # IPC (Inter-process communication)
│ ├── 045.socket-programming.c # Network socket programming (TCP/UDP)
│ ├── 046.file-io.c # Advanced file input/output handling
│ ├── 047.synchronization-primitives.c # Various synchronization primitives
│ ├── 048.low-level-assembly.c # Introduction to inline assembly in C
│
├── 05-design-patterns/
│ ├── 050.singleton-pattern.c # Singleton design pattern
│ ├── 051.factory-pattern.c # Factory design pattern
│ ├── 052.strategy-pattern.c # Strategy design pattern
│ ├── 053.observer-pattern.c # Observer design pattern
│ ├── 054.decorator-pattern.c # Decorator design pattern
│ ├── 055.adapter-pattern.c # Adapter design pattern
│
├── 06-system-programming/
│ ├── 060.process-management.c # Creating and managing processes
│ ├── 061.memory-management-systems.c # Memory allocation in OS
│ ├── 062.signals-and-handlers.c # Signal handling in C
│ ├── 063.file-system-operations.c # File system operations and syscalls
│ ├── 064.dmesg-logs.c # Reading kernel messages using dmesg
│ ├── 065.system-monitor.c # Monitoring system resources (CPU, memory, etc.)
│
├── 07-optimization/
│ ├── 070.time-complexity.c # Time complexity analysis
│ ├── 071.space-complexity.c # Space complexity analysis
│ ├── 072.cache-optimization.c # Cache optimization techniques
│ ├── 073.parallel-processing.c # Parallel computing and optimizations
│
├── 08-testing-and-debugging/
│ ├── 080.unit-testing.c # Unit testing using a C framework (e.g., CUnit)
│ ├── 081.memory-leaks.c # Detecting memory leaks using Valgrind
│ ├── 082.debugging-gdb.c # Debugging C code using GDB
│ ├── 083.profiler-optimization.c # Profiling C programs using gprof
│
├── README.md # Project overview and description
├── LICENSE.md # Project license
├── .gitignore # Git ignore file
├── Makefile # Makefile for easy compilation
├── docs/ # Documentation folder (optional)
│ ├── index.md # Introduction and overview
│ ├── setup.md # Project setup instructions
│
└── tests/ # Unit and integration tests
├── test_linked_list.c # Test cases for linked list
├── test_sorting_algorithms.c # Test cases for sorting algorithms
├── test_dfs_bfs.c # Test cases for DFS/BFS
