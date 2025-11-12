#ifndef MEMORY_H
#define MEMORY_H

#include <string>
#include <vector>

// Simple Memory class - manages memory blocks for processes
class Memory {
private:
    int totalBlocks;                      // Total number of memory blocks
    std::vector<std::string> blocks;      // Each block stores process ID (empty string = free)

public:
    // Constructor - creates memory with specified number of blocks
    Memory(int numBlocks);

    // Allocate memory blocks to a process
    // Returns true if successful, false if not enough space
    bool allocate(std::string processId, int blocksNeeded);

    // Free all memory blocks used by a process
    void deallocate(std::string processId);

    // Check if enough free blocks are available
    bool hasSpace(int blocksNeeded) const;

    // Display current memory status
    void printStatus() const;
};

#endif
