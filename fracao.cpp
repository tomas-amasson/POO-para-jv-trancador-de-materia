#include "fracao.h"

Fracao::Fracao(int num, int den)
{
    set_numerador(num);
    set_denominador(den);
}

int Fracao::get_denominador() const
{
    return denominador;
}

int Fracao::get_numerador() const
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

Fracao operator*(Fracao f1, int n)
{
    Fracao f3;

    f3.set_denominador(f1.get_denominador());
    f3.set_numerador(f1.get_numerador() * n);

    return f3;
}

Fracao Fracao::mult(Fracao f2) const
{
    Fracao f3;

    f3.set_denominador(get_denominador() * f2.get_denominador());
    f3.set_numerador(get_numerador() * f2.get_numerador());

    return f3;
}

Fracao Fracao::mult(int n) const
{
    Fracao f3;
    f3.set_denominador(get_denominador());
    f3.set_numerador(get_numerador() * n);
    return f3;
}

Fracao operator*(int n, Fracao f1)
{
    return f1 * n;
}
