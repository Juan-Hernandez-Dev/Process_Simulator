#include <iostream>
#include "Process.h"
#include "Memory.h"
#include "Scheduler.h"

using namespace std;

// Simple test program to demonstrate Developer 1's classes
int main() {
    cout << "=================================\n";
    cout << "   PROCESS MANAGER - DEV 1 DEMO\n";
    cout << "=================================\n\n";

    // Test 1: Create some processes
    cout << "Creating processes...\n";
    Process p1("P1", 2, 5);  // Process P1 needs 2 blocks, takes 5 time units
    Process p2("P2", 1, 3);  // Process P2 needs 1 block, takes 3 time units
    Process p3("P3", 3, 7);  // Process P3 needs 3 blocks, takes 7 time units

    cout << "Process " << p1.getId() << " created - Memory: " << p1.getMemoryNeeded()
         << " blocks, Time: " << p1.getExecutionTime() << " units, State: " << p1.getState() << "\n";
    cout << "Process " << p2.getId() << " created - Memory: " << p2.getMemoryNeeded()
         << " blocks, Time: " << p2.getExecutionTime() << " units, State: " << p2.getState() << "\n";
    cout << "Process " << p3.getId() << " created - Memory: " << p3.getMemoryNeeded()
         << " blocks, Time: " << p3.getExecutionTime() << " units, State: " << p3.getState() << "\n\n";

    // Test 2: Create memory and allocate blocks
    cout << "Creating memory with 5 blocks...\n";
    Memory memory(5);
    memory.printStatus();

    // Allocate memory for P1
    cout << "Allocating memory for " << p1.getId() << "...\n";
    if (memory.allocate(p1.getId(), p1.getMemoryNeeded())) {
        cout << "Success! Memory allocated.\n";
        p1.setState("RUNNING");
    } else {
        cout << "Failed! Not enough memory.\n";
    }
    memory.printStatus();

    // Allocate memory for P2
    cout << "Allocating memory for " << p2.getId() << "...\n";
    if (memory.allocate(p2.getId(), p2.getMemoryNeeded())) {
        cout << "Success! Memory allocated.\n";
        p2.setState("RUNNING");
    } else {
        cout << "Failed! Not enough memory.\n";
    }
    memory.printStatus();

    // Try to allocate memory for P3 (should fail - not enough space)
    cout << "Allocating memory for " << p3.getId() << "...\n";
    if (memory.allocate(p3.getId(), p3.getMemoryNeeded())) {
        cout << "Success! Memory allocated.\n";
        p3.setState("RUNNING");
    } else {
        cout << "Failed! Not enough memory.\n";
    }
    memory.printStatus();

    // Deallocate P1's memory
    cout << "Process " << p1.getId() << " finished. Deallocating memory...\n";
    memory.deallocate(p1.getId());
    p1.setState("DONE");
    memory.printStatus();

    // Now P3 should be able to allocate
    cout << "Allocating memory for " << p3.getId() << " again...\n";
    if (memory.allocate(p3.getId(), p3.getMemoryNeeded())) {
        cout << "Success! Memory allocated.\n";
        p3.setState("RUNNING");
    } else {
        cout << "Failed! Not enough memory.\n";
    }
    memory.printStatus();

    cout << "\n=================================\n";
    cout << "   DEV 1 DEMO COMPLETE!\n";
    cout << "=================================\n";

    return 0;
}
