#ifndef DISPLAY_H
#define DISPLAY_H

#include "Process.h"
#include "Memory.h"
#include "Scheduler.h"
#include <string>

// Display class - handles all console output
// TODO: Developer 3 - Implement this class
class Display {
public:
    // Show memory status with block details
    static void showMemoryStatus(Memory& memory);

    // Show information about a single process
    static void showProcessInfo(Process& process);

    // Show all processes in the scheduler queue
    static void showQueue(Scheduler& scheduler);

    // Show the main menu options
    static void showMenu();

    // Show a formatted message
    static void showMessage(std::string message);
};

#endif
