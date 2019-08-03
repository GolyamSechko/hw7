#include "vintage_port.h"
#include <string.h>

VintagePort::VintagePort() : Port()
{
    nickname = strdup("none");
    year = 0; 
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "vintage", b)
{
    nickname = strdup(nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
    nickname = strdup(vp.nickname); 
    year = vp.year;
}

VintagePort& VintagePort::operator= (const VintagePort& vp)
{
    if (&vp == this) return *this;
    
    Port::operator=(vp);
    nickname = strdup(vp.nickname);   
    year = vp.year;
 
    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl; 
    std::cout << "Year: " << year << std::endl;
}

std::ostream& operator<< (std::ostream& os, const VintagePort& vp)
{
    os << static_cast<Port>(vp);
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}

