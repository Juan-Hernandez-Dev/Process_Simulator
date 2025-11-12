# 🚀 START HERE - Process Manager Project

## Welcome!

This is a simple C++ project designed for **4 junior developers** to learn C++ through building a process management simulator.

---

## ✅ What's Already Done

**Developer 1** has completed the foundation:

- ✅ Process class (stores process information)
- ✅ Memory class (manages memory blocks)
- ✅ Demo program (shows how classes work)
- ✅ Build system (CMakeLists.txt + run.bat)

**You can run it right now!**

```bash
run.bat
```

---

## 📋 What Needs to Be Done

### Developer 2 - Scheduler Class

**Status**: ⏳ Ready to start
**Task File**: `DEV2_TASKS.md`
**What to do**: Implement the Shortest Job First scheduling algorithm

### Developer 3 - Display Class

**Status**: ⏳ Waiting for Dev 2
**Task File**: `DEV3_TASKS.md`
**What to do**: Create formatted console output methods

### Developer 4 - Main Program

**Status**: ⏳ Waiting for Dev 2 & 3
**Task File**: `DEV4_TASKS.md`
**What to do**: Build interactive menu system

---

## 🎯 For Each Developer

### Step 1: Find Your Task File

- Developer 2 → Read `DEV2_TASKS.md`
- Developer 3 → Read `DEV3_TASKS.md`
- Developer 4 → Read `DEV4_TASKS.md`

### Step 2: Understand Dependencies

```
Dev 1 (DONE) → Dev 2 → Dev 3 → Dev 4
```

**Wait for previous developers to finish before starting!**

### Step 3: Implement Your Part

- Open the files mentioned in your task file
- Replace `// TODO` comments with real code
- Follow the examples and hints provided

### Step 4: Test Your Code

```bash
run.bat
```

This will compile and run the program automatically.

### Step 5: Commit and Notify

- Commit your changes when tests pass
- Let the next developer know you're done

---

## 📚 Important Files

| File                 | Purpose                    |
| -------------------- | -------------------------- |
| `DEV#_TASKS.md`      | Your specific instructions |
| `REQUIREMENTS.md`    | Full project requirements  |
| `README.md`          | Project overview           |
| `QUICK_REFERENCE.md` | Code examples and tips     |
| `PROJECT_STATUS.md`  | Current progress           |
| `run.bat`            | Build and run script       |

---

## 🛠️ How to Build and Run

### Simple Way (Recommended)

```bash
run.bat
```

### Manual Way

```bash
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
cmake --build .
ProcessManager.exe
```

---

## 🎓 What You'll Learn

### Developer 2

- Working with pointers
- Using std::sort with lambda functions
- Queue management
- Algorithm implementation

### Developer 3

- Static methods
- Console formatting
- Working with references
- Output styling

### Developer 4

- User input handling
- Menu systems
- Integrating multiple classes
- Memory management (new/delete)

---

## ❓ Common Questions

### Q: Can I start before the previous developer finishes?

**A**: No. Each developer depends on the previous one's code. Wait for them to finish and commit.

### Q: What if I get stuck?

**A**:

1. Read your task file carefully
2. Check `QUICK_REFERENCE.md` for examples
3. Look at completed classes (Process.cpp, Memory.cpp)
4. Ask your team lead

### Q: Can I modify other developers' files?

**A**: No. Only edit the files assigned to you in your task file.

### Q: How do I know if my code works?

**A**: Run `run.bat`. If it compiles and runs without errors, you're good!

### Q: What if the build fails?

**A**:

1. Read the error message carefully
2. Check for syntax errors (missing semicolons, brackets)
3. Make sure you included all necessary headers
4. Ask for help if needed

---

## 🎯 Success Criteria

### Developer 2

- [ ] Scheduler adds processes to queue
- [ ] getNext() returns shortest job
- [ ] Queue sorts correctly
- [ ] Code compiles without errors

### Developer 3

- [ ] All display methods work
- [ ] Output is formatted nicely
- [ ] Methods use other classes correctly
- [ ] Code compiles without errors

### Developer 4

- [ ] Menu displays and works
- [ ] User can add processes
- [ ] Processes run in correct order
- [ ] Memory is managed correctly
- [ ] Program exits cleanly

---

## 🚦 Current Status

```
✅ Developer 1: COMPLETE
⏳ Developer 2: READY TO START
⏳ Developer 3: WAITING
⏳ Developer 4: WAITING
```

---

## 🤝 Team Tips

- **Communicate**: Let others know when you're done
- **Test thoroughly**: Don't pass broken code to the next person
- **Ask questions**: It's better to ask than to guess
- **Help each other**: You're a team!
- **Keep it simple**: Don't overcomplicate things

---

## 🎉 When You're Done

The final program will:

1. Ask user for memory size
2. Show interactive menu
3. Let user add processes
4. Run processes in shortest-job-first order
5. Display memory and queue status
6. Handle errors gracefully

---

## 📞 Need Help?

1. Read your task file (`DEV#_TASKS.md`)
2. Check `QUICK_REFERENCE.md`
3. Look at working code (Process.cpp, Memory.cpp)
4. Ask your team lead

---

## 🎯 Ready to Start?

**Developer 2**: Open `DEV2_TASKS.md` and start coding!
**Developer 3 & 4**: Wait for your turn, but feel free to read ahead!

Good luck! 🚀
