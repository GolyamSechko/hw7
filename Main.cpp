#include "vintage_port.h"

int main()
{
    Port p = Port("Porto Valdouro", "tawny", 15);
    p.Show();
    p-=12;
    std::cout << "p-=12. p-> " << p << std::endl;
    std::cout << "BottleCount-> " << p.BottleCount() << std::endl;

    VintagePort v = VintagePort("Marques de Zenete", 2, "Tempranillo", 2002);
    v.Show();
    v+=1;
    std::cout << "v+=1. v-> " << v << std::endl;
    std::cout << "BottleCount-> " << v.BottleCount() << std::endl;

    Port* pv = new VintagePort("Taylor's", 1, "Silky mouth", 1967);
    pv->Show();
    delete pv;

    return 0;
}

