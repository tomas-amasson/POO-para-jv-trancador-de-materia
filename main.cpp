#include <iostream>
#include "fracao.h"

int main(int argc, char *argv[])
{
    Fracao f1(1, 2);
    Fracao f2(1, 4);

    Fracao f3;

    f3 = f1.mult(7);
    std::cout << f3.get_numerador() << std::endl;
    std::cout << f3.get_denominador() << std::endl;

    return 0;
}
