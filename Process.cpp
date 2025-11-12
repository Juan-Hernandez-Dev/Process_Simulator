#include "Process.h"

// Constructor - initialize a new process with given values
Process::Process(std::string processId, int memory, int time) {
    id = processId;
    memoryNeeded = memory;
    executionTime = time;
    state = "READY";  // All processes start in READY state
}

// Get the process ID
std::string Process::getId() const {
    return id;
}

// Get how many memory blocks this process needs
int Process::getMemoryNeeded() const {
    return memoryNeeded;
}

// Get how long this process takes to execute
int Process::getExecutionTime() const {
    return executionTime;
}

// Get the current state of the process
std::string Process::getState() const {
    return state;
}

// Change the process state (e.g., from READY to RUNNING)
void Process::setState(std::string newState) {
    state = newState;
}
