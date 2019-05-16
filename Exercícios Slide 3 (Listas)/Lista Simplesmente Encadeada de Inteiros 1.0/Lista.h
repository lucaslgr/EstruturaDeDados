#pragma once
#include "No.h"
#include <iostream>

using namespace std;

class Lista
{
    private:
        No *primeiro;

    public:
        Lista(); //PASS
        ~Lista(); //PASS

        void insereInicio(int val); //PASS
        void insereFinal(int val);//PASS

        void removeInicio(); //PSS //CORRIGIDO O ERRO, estav no destrutor do nó
        void removeFinal(); //PASS
        bool removePorValor(int val); 

        bool busca(int val);
        void imprime(); //PASS
};