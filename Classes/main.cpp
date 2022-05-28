#include <iostream>
#include "cpu.h"
#include "cpumanager.h"

using namespace std;

int main()
{
    CPUManager manager;
    CPU Intel;
    Intel.setName("Intel");
    Intel.setPrice(1000);

    CPU amd;
    amd.setName("AMD");
    amd.setPrice(10);

    manager.addCPU(Intel);
    manager.addCPU(amd);

    manager.showInfo("Intel");

    return 0;
}
