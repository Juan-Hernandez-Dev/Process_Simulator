#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Process.h"
#include <vector>

// Scheduler class - manages process queue using Shortest Job First (SJF)
// TODO: Developer 2 - Implement this class
class Scheduler {
private:
    std::vector<Process*> queue;  // List of processes waiting to run

public:
    // Add a process to the queue
    void addProcess(Process* process);

    // Get the next process (shortest execution time)
    // Returns nullptr if queue is empty
    Process* getNext();

    // Check if queue is empty
    bool isEmpty() const;

    // Display all processes in the queue
    void printQueue() const;
};

#endif
