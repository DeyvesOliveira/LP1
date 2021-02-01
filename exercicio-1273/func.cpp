#include<string>
#include"func.hpp"

//Preenche o vetor com informações do usuario
void preencher_vetor(std::string vetor[], int tamanho_vet)
{
//  Contador para while
    int cont_while=0;

//  Percorrendo o vetor para preencher com as entrada
    while(cont_while < tamanho_vet)
    {
        std::cout<<"Digite a entrada:"<<std::endl;
        std::cin>>vetor[cont_while];
        cont_while++;
    }
}

//Fazendo a magica acontecer
void rodando(std::string vetor[], int tamanho_vet)
{
    int tamanho_maior_vet;

    maior_string(vetor, tamanho_vet, &tamanho_maior_vet);
    altera_string(vetor, tamanho_vet, tamanho_maior_vet);
}

//Imprime vetor
void print_vetor(std::string vetor[], int tamanho_vet)
{
//  Contador para while
    int cont_while=0;

//Imprimindo vetor
    while(cont_while < tamanho_vet)
    {
        std::cout<< vetor[cont_while] <<std::endl;
        cont_while++;
    }
}

//Garda tamanho da maior string
void maior_string(std::string vetor[], int tamanho_vet, int *tamanho)
{
    *tamanho = vetor[0].length();

    //Percorre o vetor de string para comparar quem é maior e guarda o tamanho da maior string do vetor
    for(int cont = 1; cont < tamanho_vet; cont++)
    {
        if(vetor[cont].length() > *tamanho)
        {
            *tamanho = vetor[cont].length();
        }
        else
        {
            continue;
        }

    }
}

//Altera string do vetor
    void altera_string(std::string vetor[], int tamanho_vet, int tamanho)
    {
        int cont = 0;
        while (cont < tamanho_vet)
        {
            //Verifica se o tamanho da string é o maior, caso não seja, indentamos a string a direita/esquerda(Depende do referencial)
            if (vetor[cont].length() < tamanho)
            {
                while(vetor[cont].length() < tamanho)
                {
                    vetor[cont] = " " + vetor[cont];
                }
            }
            else
            {
                continue;
            }
            cont++;        
        }
        
    }