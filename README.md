# Process Manager - Simple C++ Project

A beginner-friendly process management simulator for learning C++.

---

## 🚀 Quick Start

```bash
run.bat
```

This builds and runs the program automatically.

---

## 👥 Team Structure (4 Developers)

### Developer 1 - Foundation ✅ DONE

- **Process class**: Represents a program
- **Memory class**: Manages memory blocks
- **Status**: Fully implemented and tested
- **File**: `DEV1_TASKS.md`

### Developer 2 - Scheduler ⏳ TODO

- **Scheduler class**: Shortest Job First algorithm
- **Depends on**: Developer 1
- **File**: `DEV2_TASKS.md`

### Developer 3 - Display ⏳ TODO

- **Display class**: Formatted console output
- **Depends on**: Developer 1 & 2
- **File**: `DEV3_TASKS.md`

### Developer 4 - Main Program ⏳ TODO

- **Main program**: Interactive menu and user interface
- **Depends on**: Developer 1, 2 & 3
- **File**: `DEV4_TASKS.md`

---

## 📁 Project Files

```
ProcessManager/
├── Process.h / Process.cpp      # Dev 1 ✅
├── Memory.h / Memory.cpp        # Dev 1 ✅
├── Scheduler.h / Scheduler.cpp  # Dev 2 ⏳
├── Display.h / Display.cpp      # Dev 3 ⏳
├── main.cpp                     # Dev 4 ⏳
├── CMakeLists.txt               # Build config
├── run.bat                      # Build script
├── REQUIREMENTS.md              # Full requirements
├── DEV1_TASKS.md                # Developer 1 guide
├── DEV2_TASKS.md                # Developer 2 guide
├── DEV3_TASKS.md                # Developer 3 guide
├── DEV4_TASKS.md                # Developer 4 guide
├── QUICK_REFERENCE.md           # Code examples
└── PROJECT_STATUS.md            # Current status
```

---

## 🎯 What This Program Does

Simulates how operating systems manage:

- **Processes**: Programs that need memory and CPU time
- **Memory**: Fixed blocks that can be allocated/freed
- **Scheduling**: Deciding which process runs next (shortest first)

---

## 📚 Key Concepts

### Process

- Has an ID (e.g., "P1")
- Needs memory blocks
- Has execution time
- States: READY → RUNNING → DONE

### Memory

- Fixed number of blocks
- Tracks which blocks are free/occupied
- Allocates blocks to processes
- Frees blocks when process finishes

### Scheduler

- Maintains queue of waiting processes
- Uses Shortest Job First (SJF) algorithm
- Always picks process with shortest execution time

### Display

- Formats output for readability
- Shows memory status, process info, queue
- Provides consistent user interface

---

## 🛠️ Requirements

- C++ compiler (g++ with MinGW)
- CMake 3.10 or higher
- Windows OS (for run.bat)

---

## 📖 For Developers

### Your Task File

Each developer has a task file with:

- What you need to implement
- Code examples and hints
- Testing instructions
- Dependencies

### Development Order

```
Dev 1 (Foundation) → Dev 2 (Scheduler) → Dev 3 (Display) → Dev 4 (Main)
```

**Important**: Wait for previous developers to finish before starting!

### How to Work

1. Read your `DEV#_TASKS.md` file
2. Edit only your assigned files
3. Test frequently with `run.bat`
4. Commit when tests pass
5. Notify next developer

---

## 🧪 Testing

Run the program after each change:

```bash
run.bat
```

The build script will:

1. Create build directory
2. Configure with CMake
3. Compile your code
4. Run the program
5. Show any errors

---

## 📊 Current Status

- **Overall Progress**: 25%
- **Developer 1**: ✅ Complete
- **Developer 2**: ⏳ Waiting
- **Developer 3**: ⏳ Waiting
- **Developer 4**: ⏳ Waiting

See `PROJECT_STATUS.md` for details.

---

## ❓ Getting Help

1. Check your task file (`DEV#_TASKS.md`)
2. Look at `QUICK_REFERENCE.md` for code examples
3. Read completed classes for reference
4. Ask your team lead

---

## 🎓 Learning Goals

- Basic C++ class structure
- Working with pointers and references
- Using STL containers (vector)
- Algorithms (sorting)
- User input handling
- Team collaboration
- Build systems (CMake)

---

## 📝 Notes

- Keep code simple and readable
- Add comments to explain your logic
- Test after every change
- Don't modify other developers' files
- Ask questions if stuck!

---

## 🤝 Collaboration Tips

- Communicate with your team
- Respect the development order
- Test your code thoroughly before passing to next dev
- Document any issues or assumptions
- Help each other learn!
