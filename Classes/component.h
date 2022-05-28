#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <iostream>

using namespace std;

class Component
{
public:
    Component();

    void setPrice(int price);
    int getPrice(){return m_price;}

    void setName(string name){m_name = name;}
    string getName(){return m_name;}

    void setCompany(string company){m_company = company;}
    string getCompany(){return m_company;}

private:
    int m_price;
    string m_name;
    string m_company;
};

#endif // COMPONENT_H
