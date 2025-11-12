#include "Memory.h"
#include <iostream>

// Constructor - initialize memory with all blocks free
Memory::Memory(int numBlocks) {
    totalBlocks = numBlocks;
    // Create vector with all blocks empty (free)
    blocks.resize(totalBlocks, "");
}

// Allocate memory blocks to a process
bool Memory::allocate(std::string processId, int blocksNeeded) {
    // First check if we have enough free space
    if (!hasSpace(blocksNeeded)) {
        return false;
    }

    // Find free blocks and assign them to the process
    int allocated = 0;
    for (int i = 0; i < totalBlocks && allocated < blocksNeeded; i++) {
        if (blocks[i] == "") {  // Block is free
            blocks[i] = processId;
            allocated++;
        }
    }

    return true;
}

// Free all blocks used by a process
void Memory::deallocate(std::string processId) {
    for (int i = 0; i < totalBlocks; i++) {
        if (blocks[i] == processId) {
            blocks[i] = "";  // Mark block as free
        }
    }
}

// Check if enough free blocks exist
bool Memory::hasSpace(int blocksNeeded) const {
    int freeCount = 0;
    for (int i = 0; i < totalBlocks; i++) {
        if (blocks[i] == "") {
            freeCount++;
        }
    }
    return freeCount >= blocksNeeded;
}

// Display memory status
void Memory::printStatus() const {
    std::cout << "\n=== MEMORY STATUS ===\n";
    std::cout << "Total Blocks: " << totalBlocks << "\n";

    int freeCount = 0;
    for (int i = 0; i < totalBlocks; i++) {
        if (blocks[i] == "") {
            freeCount++;
        }
    }

    std::cout << "Free Blocks: " << freeCount << "\n";
    std::cout << "Used Blocks: " << (totalBlocks - freeCount) << "\n\n";

    std::cout << "Block Details:\n";
    for (int i = 0; i < totalBlocks; i++) {
        std::cout << "Block " << i << ": ";
        if (blocks[i] == "") {
            std::cout << "[FREE]\n";
        } else {
            std::cout << "[" << blocks[i] << "]\n";
        }
    }
    std::cout << "====================\n\n";
}
