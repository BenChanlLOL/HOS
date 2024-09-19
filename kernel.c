//
// Created by jefferson on 2024/09/11.
//
#include "graphics.c"
#include "memory.c"

void setup() {
    VideoCardDriver_main(); // setup vid driver and print 8
    MemoryDriver_Main(5); //setup for 5 programs

}

void KernelStage2() {

}
void KernelEnd() {

}


void KernelMain() {
    setup();
    KernelStage2();
    KernelEnd();
}