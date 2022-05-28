#ifndef CPUMANAGER_H
#define CPUMANAGER_H
#include "cpu.h"
#include <vector>

class CPUManager
{
public:
    CPUManager();

    void addCPU(CPU cpu);

    void showInfo();
    void showInfo(string name);


private:
    vector<CPU> cpus;
};

#endif // CPUMANAGER_H
