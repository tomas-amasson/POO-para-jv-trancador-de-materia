#include "fracao.h"

Fracao::Fracao(int num, int den)
{
    set_numerador(num);
    set_denominador(den);
}

int Fracao::get_denominador()
{
    return denominador;
}

int Fracao::get_numerador()
{
    return numerador;
}

void Fracao::set_denominador(int den)
{
    if (!den)
    {
        den = 1;
    }
    denominador = den;
}

void Fracao::set_numerador(int num)
{
    numerador = num;
}

Fracao operator*(Fracao f1, Fracao f2)
{
    Fracao f3;

    f3.set_denominador(f1.get_denominador() * f2.get_denominador());
    f3.set_numerador(f1.get_numerador() * f2.get_numerador());

    return f3;
}

Fracao Fracao::mult(Fracao f2)
{
    Fracao f3;

    f3.set_denominador(get_denominador() * f2.get_denominador());
    f3.set_numerador(get_numerador() * f2.get_numerador());

    return f3;
}
