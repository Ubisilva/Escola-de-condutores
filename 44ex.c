#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h>// Biblioteca de alocaçoes de texto por região
#include <string.h> // Biblioteca responsável pela string


int registro() // Responsável pelo cadastro do usuário no sistema
{
	 char arquivo[40]; // Início da criação das variáveis/string
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char profissao[40]; // Final da criação das variáveis/string
    
    printf("Digite o CPF para cadastro:\n-");  // coleta de informações do usuário
    scanf("%s", cpf); // %s é referente as strings
    
    strcpy(arquivo, cpf); // Registra os valores da string
    
    FILE *file;
    file = fopen(arquivo, "w"); // Geração do arquivo e escreve na pasta
    fprintf(file,cpf); // Salva o valor da variável
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a"); // Atualização do arquivo
    fprintf(file,","); // Acrescenta a vírgula na pasta salva
    fclose(file); // Fechamento da pasta do arquivo
    
    
    printf("Digite o nome para cadastro:\n-");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome para cadastro:\n-");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite a profissão para cadastro:\n-");
    scanf("%s", profissao);
    
    file = fopen(arquivo, "a");
    fprintf(file,profissao);
    fclose(file);
    
     file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
     system("pause");
}
   
   
int consulta()
{
	setlocale(LC_ALL, "portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF para consulta:\n");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // Efetiva a leitura da string, no caso, cpf
	
	if(file == NULL)
	{
		printf("CPF não cadastrado, tente novamente!\n");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nConteudo:\n");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}

int deletar()
{
     char cpf[40];
     printf("Digite o CPF do usuário para deletar:\n");
     scanf("%s",cpf);
     
    remove("cpf");
     
     FILE *file;
     file = fopen(cpf,"r"); // Efetiva a leitura da string, no caso, cpf
     
     
     if(file == NULL)
     {
     	printf("CPF deletado do banco de dados!\n");
     	system("pause");
     		
	 }
}

int main()
{ int opcao=0; // Definindo as variáveis
int laco=1;

for(laco=1;laco=1;)
{

system("cls");
setlocale(LC_ALL,"portuguese"); //Definição da linguagem

      printf("- Escola formadora de condutores -\n\n");
      printf("Escolha opções no menu:\n\n");
      printf("\t1- Nome do aluno:\n\n");
      printf("\t2- Digite o CPf:\n\n");
      printf("\t3- Deletar:\n\n");
      printf("Digite a opção desejada:"); //Finalização do menu

      scanf("%d", &opcao); //Armazenando as opções do usuário

      system("cls");
      
      switch(opcao)
      {
      	case 1:
      		registro();
      		break;
      		
      	case 2:
      		consulta();
      		break;
			  
		case 3:
			deletar();
			break;
			
		default:
		    printf("Opção inexistente!");
	        system("pause");  
			break; 	
	 } }

     
}
