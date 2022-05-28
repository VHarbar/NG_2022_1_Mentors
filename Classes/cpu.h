#ifndef CPU_H
#define CPU_H
#include "component.h"

class CPU : public Component
{
public:
    CPU();

    void setCores(int cores);
    int getCores(){return m_cores;}

    void setHertz(float hertz);
    float getHertz(){return m_hertz;}

    void setSocket(string socket){m_socket = socket;}
    string getSocket(){return m_socket;}

    void getInfo();

private:
    float m_hertz;
    string m_socket;
    int m_cores;
};

#endif // CPU_H
