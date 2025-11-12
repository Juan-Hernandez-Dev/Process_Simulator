#ifndef PROCESS_H
#define PROCESS_H

#include <string>

// Simple Process class - represents a program that needs memory and CPU time
class Process {
private:
    std::string id;           // Process identifier (e.g., "P1", "P2")
    int memoryNeeded;         // Number of memory blocks required
    int executionTime;        // Time units needed to complete
    std::string state;        // Current state: "READY", "RUNNING", or "DONE"

public:
    // Constructor - creates a new process
    Process(std::string processId, int memory, int time);

    // Getters - retrieve process information
    std::string getId() const;
    int getMemoryNeeded() const;
    int getExecutionTime() const;
    std::string getState() const;

    // Setter - change process state
    void setState(std::string newState);
};

#endif
