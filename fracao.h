#ifndef FRACAO_H
#define FRACAO_H

class Fracao
{
    private:
        int numerador, denominador;

    public:
        Fracao(int num= 0, int den= 1);

        int get_numerador();
        int get_denominador();

        void set_numerador(int num);
        void set_denominador(int den);
        Fracao mult(Fracao f2);
};

Fracao operator*(Fracao f1, Fracao f2);

#endif
