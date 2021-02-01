#include<iostream>


/*Entrada
 * A entrada contém diversos casos de testes. 
 * A primeira linha de cada caso de teste conterá um inteiro N (1 ≤ N ≤ 50)
 * , que indicará o número de palavras que virão a seguir. 
 * Cada uma das N palavras contém no mínimo uma letra e no máximo 50 letras 
 * maiúsculas (‘A’-‘Z’). O fim da entrada é indicado por N = 0.
 */

/*Saída
 *
 * Para cada caso de teste imprima as palavras inserindo tantos espaços 
 * quanto forem necessários à esquerda de cada palavra, para que elas 
 * apareçam todas alinhadas à direita e na mesma ordem da entrada. 
 * Deixe uma linha em branco entre os casos de teste. 
 * Não deixe espaços sobrando no final de cada linha nem imprima espaços 
 * desnecessários à esquerda, de modo que pelo menos uma das linhas 
 * impressa em cada texto inicie com uma letra.
 */

int main()
{
	//Inteiro para numero de entradas
	int entradas;
	
	//Solicitando e armazenando numero de entradas
	std::cout<<"Digite o numero de entradas:"<<std::endl;
	std::cin>>entradas;

	//Criando vetor para armazenar entradas e criando contadores
	std::string nomes[entradas];
	int cont_while=0/*, cont_1=0, cont_2=0*/;

	//Percorrendo o vetor para preencher com as entrada
	while(cont_while < entradas)
	{
		std::cout<<"Digite a entrada:"<<std::endl;
		std::cin>>nomes[cont_while];
		std::cout<< "tamnho da string - "<< nomes[cont_while]<<std::endl;
		cont_while++;
	}
	
	//Zerando contador
	cont_while = 0;

	//Imprimindo vetor
	while(cont_while < entradas)
	{
		std::cout<<nomes[cont_while]<<std::endl;
		cont_while++;
	}

	//Encerrando o programa
	return 0;
}
