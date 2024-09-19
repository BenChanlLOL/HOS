#define MEMORYSTART 0x100000000  // A more reasonable value, adjust according to your system
#include <stddef.h>
#include "graphics.c"

typedef struct {
    void* StartAddr;
    void* EndAddr;
    char header[];
} MemoryBlock;

void MemoryInit(MemoryBlock* mc, int numBlocks) {
    // Initialize memory map or bitmap to mark memory regions as free
    for (int i = 0; i < numBlocks; i++) {
        mc[i].header[0] = 0; // Mark the memory block as free
    }
}

void* MemoryAllocator(MemoryBlock* mc, int numBlocks, int size) {
    // Search for a free memory block that meets the requested size
    for (int i = 0; i < numBlocks; i++) {
        if (mc[i].header[0] == 0 && mc[i].EndAddr - mc[i].StartAddr >= size) {
            // Mark the memory block as allocated
            mc[i].header[0] = 1; // or set a flag in your memory map structure

            // Return a pointer to the allocated memory block
            return mc[i].StartAddr;
        }
    }

    // Handle out-of-memory error
    return NULL;
}

void MemoryDriver_Main(int programs) {
    const int numBlocks = 10;  // Define the number of memory blocks
    MemoryBlock mb[numBlocks];

    // Initialize memory map or bitmap
    for (int i = 0; i < numBlocks; i++) {
        mb[i].StartAddr = (void*)((MEMORYSTART - i * 1024) & ~(0xFFF));  // Initialize start address
        mb[i].EndAddr = (void*)((MEMORYSTART - i * 1024) + 1024);  // Initialize end address
    }
    MemoryInit(mb, numBlocks);

    void* allocatedMemory = MemoryAllocator(mb, numBlocks, 1024);
    if (allocatedMemory != NULL) {
        int* GoodMemory = (int*)allocatedMemory;
        // Use the allocated memory
    } else {
        putchar(vc.character_upH, &vc, 0x1);

    }
}