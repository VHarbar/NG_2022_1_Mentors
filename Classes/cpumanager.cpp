#include "cpumanager.h"

CPUManager::CPUManager()
{

}

void CPUManager::addCPU(CPU cpu)
{
    cpus.push_back(cpu);
}

void CPUManager::showInfo()
{
    for(CPU cpu : cpus)
    {
        cpu.getInfo();
    }
}

void CPUManager::showInfo(string name)
{
    for(CPU cpu : cpus)
    {
        if(cpu.getName().find(name) != -1)
            cpu.getInfo();
    }
}
