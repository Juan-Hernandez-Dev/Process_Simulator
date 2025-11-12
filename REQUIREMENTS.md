# Process Manager - Requirements

## Overview

A simple C++ console application that simulates basic process management with memory allocation and CPU scheduling.

## Core Concepts (Simplified)

- **Process**: A program that needs memory and CPU time
- **Memory**: Fixed number of memory blocks that can be allocated to processes
- **Scheduler**: Decides which process runs next (shortest job first)

---

## Developer 1 - Foundation Classes (MUST BE DONE FIRST)

### Task 1.1: Process Class

Create a simple Process class that stores:

- Process ID (string)
- Memory blocks needed (int)
- Execution time (int)
- Current state: "READY", "RUNNING", or "DONE"

Methods:

- Constructor to initialize a process
- Getters for all attributes
- Setter to change state

### Task 1.2: Memory Class

Create a Memory class that manages memory blocks:

- Total number of blocks (set at initialization)
- Track which blocks are free or occupied
- Track which process owns each occupied block

Methods:

- Constructor to set total blocks
- `allocate(processId, blocksNeeded)` - returns true if successful
- `deallocate(processId)` - frees all blocks for a process
- `hasSpace(blocksNeeded)` - checks if enough free blocks exist
- `printStatus()` - shows which blocks are free/occupied

---

## Developer 2 - Scheduler (DEPENDS ON DEV 1)

### Task 2.1: Scheduler Class

Create a Scheduler class that manages process queue:

- Maintains a list of processes waiting to run
- Sorts processes by execution time (shortest first)

Methods:

- `addProcess(Process*)` - adds process to queue
- `getNext()` - returns and removes the shortest job
- `isEmpty()` - checks if queue is empty
- `printQueue()` - displays waiting processes

---

## Developer 3 - Display Functions (DEPENDS ON DEV 1 & 2)

### Task 3.1: Display Class

Create a Display class with static methods:

- `showMemoryStatus(Memory& memory)` - displays memory blocks
- `showProcessInfo(Process& process)` - displays process details
- `showQueue(Scheduler& scheduler)` - displays waiting processes
- `showMenu()` - displays menu options
- `showMessage(string message)` - displays formatted messages

---

## Developer 4 - Main Program (DEPENDS ON DEV 1, 2 & 3)

### Task 4.1: Main Program

Create main.cpp that:

- Initializes memory (ask user for total blocks)
- Shows menu: Add Process, Run Next Process, Show Status, Exit
- Handles user input and validation
- Coordinates between Memory, Scheduler, and Display
- Manages process lifecycle (create, run, cleanup)

---

## Success Criteria

- Program compiles without errors
- User can add processes
- Processes execute in shortest-job-first order
- Memory is allocated and freed correctly
- Clear console output shows what's happening
