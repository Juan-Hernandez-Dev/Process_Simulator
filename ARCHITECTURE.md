# Architecture Overview

## 🏗️ System Design (Simplified for Juniors)

```
┌─────────────────────────────────────────────┐
│              main.cpp                       │
│         (User Interface)
│  - Shows menu                               │
│  - Gets user input                          │
│  - Coordinates everything                   │
└─────────────────────────────────────────────┘
                    │
                    │ uses
                    ▼
    ┌───────────────────────────────┐
    │                               │
    ▼                               ▼
┌─────────┐                   ┌──────────┐
│ Memory  │                   │Scheduler │
│ Class   │                   │  Class   │
└─────────┘                   └──────────┘
    │                               │
    │ manages                       │ manages
    ▼                               ▼
┌─────────┐                   ┌──────────┐
│ Memory  │                   │ Process  │
│ Blocks  │                   │  Queue   │
└─────────┘                   └──────────┘
                                    │
                                    │ contains
                                    ▼
                              ┌──────────┐
                              │ Process  │
                              │  Class   │
                              └──────────┘
```

---

## 📦 Class Responsibilities

### Process (Developer 1) ✅

**What it is**: A single program that needs to run

**What it stores**:

- Process ID (like "P1", "P2")
- How much memory it needs
- How long it takes to run
- Current state (READY, RUNNING, DONE)

**What it does**:

- Keeps track of process information
- Changes state when needed

**Used by**: Scheduler, main.cpp

---

### Memory (Developer 1) ✅

**What it is**: The system's memory divided into blocks

**What it stores**:

- Total number of blocks
- Which blocks are free
- Which process owns each block

**What it does**:

- Allocates blocks to processes
- Frees blocks when process is done
- Checks if enough space is available
- Shows memory status

**Used by**: main.cpp

---

### Scheduler (Developer 2) ⏳

**What it is**: Decides which process runs next

**What it stores**:

- Queue of processes waiting to run

**What it does**:

- Adds processes to queue
- Picks shortest job first (SJF)
- Removes process from queue when selected
- Shows what's in the queue

**Used by**: main.cpp

---

### main.cpp (Developer 3) ⏳

**What it is**: The main program that ties everything together

**What it does**:

- Creates Memory and Scheduler objects
- Shows menu to user
- Handles user choices:
  - Add new process
  - Run next process
  - Show system status
  - Exit program

**Uses**: Process, Memory, Scheduler

---

## 🔄 Data Flow

### Adding a Process

```
User Input
    │
    ▼
main.cpp creates Process object
    │
    ▼
main.cpp adds Process to Scheduler
    │
    ▼
Process waits in Scheduler queue
```

### Running a Process

```
main.cpp asks Scheduler for next Process
    │
    ▼
Scheduler returns shortest job
    │
    ▼
main.cpp checks if Memory has space
    │
    ├─ Yes ─▶ Allocate memory
    │         │
    │         ▼
    │         Run process
    │         │
    │         ▼
    │         Free memory
    │
    └─ No ──▶ Show error message
```

---

## 🎯 Dependencies

```
Developer 1 (Foundation)
    │
    ├─▶ Process class ──────┐
    │                       │
    └─▶ Memory class        │
                            │
                            ▼
                    Developer 2 (Scheduler)
                            │
                            │ Scheduler class
                            │
                            ▼
                    Developer 3 (Main Program)
                            │
                            │ main.cpp
                            │
                            ▼
                    Complete Program
```

**Key Point**: Each developer depends on the previous one!

---

## 📝 File Relationships

### Header Files (.h)

- Define what a class can do
- List all methods and variables
- Like a "table of contents"

### Implementation Files (.cpp)

- Contain the actual code
- Implement what the header promised
- Like the "chapters" of a book

### Example: Process

```
Process.h          Process.cpp
┌─────────┐       ┌──────────┐
│ class   │       │ Actual   │
│ Process │◀──────│ code for │
│ {       │       │ each     │
│  ...    │       │ method   │
│ };      │       └──────────┘
└─────────┘
```

---

## 🔧 Build Process

```
Source Files (.cpp)
    │
    ▼
CMake reads CMakeLists.txt
    │
    ▼
Compiler creates object files (.o)
    │
    ▼
Linker combines them
    │
    ▼
ProcessManager.exe
```

**run.bat does all of this automatically!**

---

## 💡 Design Principles

### 1. One Class = One Job

- Process: Store process info
- Memory: Manage memory blocks
- Scheduler: Manage process queue

### 2. Simple Interactions

- No complex inheritance
- No abstract interfaces
- Direct method calls

### 3. Clear Ownership

- main.cpp owns everything
- Classes don't create other classes
- Easy to understand flow

### 4. Beginner-Friendly

- No templates
- No advanced C++ features
- Lots of comments

---

## 🎓 Learning Path

### Week 1: Developer 1

- Learn basic class structure
- Understand constructors
- Practice with vectors
- **Goal**: Foundation classes working

### Week 2: Developer 2

- Learn about pointers
- Understand sorting algorithms
- Practice with queues
- **Goal**: Scheduler working

### Week 3: Developer 3

- Learn user input handling
- Understand program flow
- Practice integration
- **Goal**: Complete program

---

## 🧪 Testing Strategy

### Unit Testing (Each Class)

```
Process ──▶ Test creation, getters, setState
Memory  ──▶ Test allocate, deallocate, hasSpace
Scheduler ─▶ Test addProcess, getNext, SJF order
```

### Integration Testing (All Together)

```
main.cpp ──▶ Test full workflow:
             - Add processes
             - Run them in order
             - Check memory management
```

---

## 🚀 Future Enhancements (Optional)

After completing the basic version, you could add:

1. **Process Priority**: Not just shortest first
2. **Memory Fragmentation**: Show how memory gets fragmented
3. **Process States**: Add WAITING, BLOCKED states
4. **Statistics**: Show average wait time, throughput
5. **Save/Load**: Save processes to file

**But first**: Get the basics working!

---

## 📚 Key Concepts Learned

### Object-Oriented Programming

- Classes and objects
- Encapsulation (private/public)
- Methods and constructors

### Data Structures

- Vectors (dynamic arrays)
- Queues (FIFO)
- Simple algorithms

### Software Engineering

- Modular design
- Dependencies
- Build systems
- Documentation

### Operating Systems Concepts

- Process management
- Memory allocation
- CPU scheduling
- Resource management

---

## 🎯 Success Metrics

You'll know you're successful when:

- ✅ Code compiles without errors
- ✅ Program runs without crashes
- ✅ Processes execute in correct order (shortest first)
- ✅ Memory is allocated and freed correctly
- ✅ User can interact with the program
- ✅ You understand how all pieces fit together

---

## 💬 Common Questions

**Q: Why not use inheritance?**
A: Keeping it simple for beginners. These classes don't share behavior.

**Q: Why pointers in Scheduler?**
A: To avoid copying Process objects. More efficient.

**Q: Why not use smart pointers?**
A: Learning manual memory management first is important.

**Q: Can I add features?**
A: Yes! But finish the basic version first.

**Q: What if I'm stuck?**
A: Check your task file, look at completed code, ask for help.
