#ifndef FRACAO_H
#define FRACAO_H

class Fracao
{
    private:
        int numerador, denominador;

    public:
        Fracao(int num= 0, int den= 1);

        int get_numerador() const;
        int get_denominador() const;

        void set_numerador(int num);
        void set_denominador(int den);
        Fracao mult(Fracao f2) const;
        Fracao mult(int n) const;
};

Fracao operator*(Fracao f1, int n);
Fracao operator*(int n, Fracao f1);
Fracao operator*(Fracao f1, Fracao f2);

#endif
