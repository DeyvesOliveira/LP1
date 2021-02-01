#include<iostream>
#include"func.hpp"

int main()
{
//  Variavel para armazenar a quantidade de entradas no programa
    int qnt_entradas;

//  Solicitando ao usuario a quantidade de entradas que ele ira utilizar
    std::cout<<"Digite a quatidade de entradas: "<<std::endl;
    std::cin>>qnt_entradas;

//  Vetor de string para armazenar as entradas do usuario
    std::string nomes[qnt_entradas];

//  Preenche o vetor
    preencher_vetor(nomes,qnt_entradas);

// Imprimindo vetor alterado
    print_vetor(nomes,qnt_entradas);

//  Finalizando o programa
    return 0;
}