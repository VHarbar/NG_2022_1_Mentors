#include "cpu.h"

CPU::CPU()
{
    m_cores = -1;
    m_hertz = -1;
    m_socket = "NOSOCKET";
}

void CPU::setCores(int cores)
{
    if(cores <= 0)
    {
        cout << "Cores amount can't be lower or equal 0." << endl;
        return;
    }
    m_cores = cores;
}

void CPU::setHertz(float hertz)
{
    if(hertz <= 0)
    {
        cout << "Hertz resolution can't be lower or equal 0." << endl;
        return;
    }
    m_hertz = hertz;
}

void CPU::getInfo()
{
    cout << "[CPU INFO]: " << endl <<
            "   Name: " << getName() << endl <<
            "   Price: " << getPrice() << endl <<
            "   Socket: " << getSocket() << endl <<
            "   Company: " << getCompany() << endl <<
            "   Hertz: " << getHertz() << endl <<
            "   Cores: " << getCores() << endl;
}
