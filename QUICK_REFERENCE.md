# Quick Reference Guide

## 🏃 Running the Program

```bash
run.bat
```

---

## 📦 What's Implemented

### ✅ Process Class (Dev 1)

```cpp
Process p("P1", 2, 5);  // ID, memory blocks, execution time
p.getId();              // Returns "P1"
p.getMemoryNeeded();    // Returns 2
p.getExecutionTime();   // Returns 5
p.getState();           // Returns "READY", "RUNNING", or "DONE"
p.setState("RUNNING");  // Change state
```

### ✅ Memory Class (Dev 1)

```cpp
Memory mem(10);                    // Create 10 memory blocks
mem.hasSpace(3);                   // Check if 3 blocks available
mem.allocate("P1", 3);             // Allocate 3 blocks to P1
mem.deallocate("P1");              // Free all P1's blocks
mem.printStatus();                 // Display memory state
```

### ⏳ Scheduler Class (Dev 2 - TODO)

```cpp
Scheduler sched;
sched.addProcess(&p1);             // Add process to queue
sched.isEmpty();                   // Check if queue empty
sched.printQueue();                // Display queue
Process* next = sched.getNext();   // Get shortest job
```

---

## 🔧 Common Tasks

### Adding a New Process

```cpp
Process* p = new Process("P1", 2, 5);
// Use the process...
delete p;  // Don't forget to clean up!
```

### Checking Memory Before Allocation

```cpp
if (memory.hasSpace(process->getMemoryNeeded())) {
    memory.allocate(process->getId(), process->getMemoryNeeded());
    process->setState("RUNNING");
}
```

### Running a Process

```cpp
// 1. Get from scheduler
Process* p = scheduler.getNext();

// 2. Allocate memory
memory.allocate(p->getId(), p->getMemoryNeeded());

// 3. Run
p->setState("RUNNING");
// ... simulate execution ...
p->setState("DONE");

// 4. Free memory
memory.deallocate(p->getId());
```

---

## 🐛 Debugging Tips

### Build Errors

- Check for missing semicolons
- Make sure all #include statements are present
- Verify class names match file names

### Runtime Errors

- Check if pointers are nullptr before using
- Make sure memory is allocated before running process
- Don't forget to deallocate memory

### Logic Errors

- Use `printStatus()` to see memory state
- Print process states to track flow
- Add cout statements to debug

---

## 📝 Code Style

### Naming

- Classes: `PascalCase` (Process, Memory)
- Variables: `camelCase` (processId, memoryNeeded)
- Constants: `UPPER_CASE` (if you add any)

### Comments

```cpp
// Single line comment for brief explanations

/* Multi-line comment
   for longer explanations */
```

### Formatting

- Indent with 4 spaces
- Opening brace on same line
- One blank line between functions

---

## 🎯 Testing Checklist

### Developer 1

- [x] Process creates with correct values
- [x] Process state changes work
- [x] Memory allocates correctly
- [x] Memory deallocates correctly
- [x] Memory rejects over-allocation

### Developer 2

- [ ] Scheduler adds processes
- [ ] Scheduler returns shortest job first
- [ ] Scheduler handles empty queue
- [ ] Scheduler displays queue correctly

### Developer 3

- [ ] Menu displays correctly
- [ ] User can add processes
- [ ] User can run processes
- [ ] Memory status displays
- [ ] Program exits cleanly

---

## 🆘 Common Errors

### "undefined reference to..."

- Missing .cpp file in CMakeLists.txt
- Function declared but not implemented

### "no matching function for call to..."

- Wrong number of arguments
- Wrong argument types

### Segmentation fault / Access violation

- Using nullptr pointer
- Accessing deleted object
- Array out of bounds

---

## 📞 Getting Help

1. Read the error message carefully
2. Check your task file (DEV1_TASKS.md, etc.)
3. Look at working code for examples
4. Ask your team lead
