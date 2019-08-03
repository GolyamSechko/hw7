#include "port.h"
#include <string.h>

Port::Port(const char* br, const char* st, int b)
{
    brand = strdup(br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port& p)
{
    brand = strdup(p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port& Port::operator= (const Port& p)
{
    if (&p == this) return *this;
    
    brand = strdup(p.brand);
    strcpy(style, p.style);
    bottles = p.bottles; 
 
    return *this;
}

Port& Port::operator+= (int b)
{
    bottles += b;
    return *this;   
}
    
Port& Port::operator-= (int b)
{
    bottles = (bottles > b) ? bottles - b : 0;
    return *this;   
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Kind: " << style << std::endl; 
    std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream& operator<< (std::ostream& os, const Port& p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}
