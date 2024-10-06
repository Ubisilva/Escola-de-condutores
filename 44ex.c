#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>// Biblioteca de aloca�oes de texto por regi�o
#include <string.h> // Biblioteca respons�vel pela string


int registro() // Respons�vel pelo cadastro do usu�rio no sistema
{
	 char arquivo[40]; // In�cio da cria��o das vari�veis/string
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char profissao[40]; // Final da cria��o das vari�veis/string
    
    printf("Digite o CPF para cadastro:\n-");  // coleta de informa��es do usu�rio
    scanf("%s", cpf); // %s � referente as strings
    
    strcpy(arquivo, cpf); // Registra os valores da string
    
    FILE *file;
    file = fopen(arquivo, "w"); // Gera��o do arquivo e escreve na pasta
    fprintf(file,cpf); // Salva o valor da vari�vel
    fclose(file); // Fecha o arquivo
    
    file = fopen(arquivo, "a"); // Atualiza��o do arquivo
    fprintf(file,","); // Acrescenta a v�rgula na pasta salva
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
    
    printf("Digite a profiss�o para cadastro:\n-");
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
		printf("CPF n�o cadastrado, tente novamente!\n");
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
     printf("Digite o CPF do usu�rio para deletar:\n");
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
{ int opcao=0; // Definindo as vari�veis
int laco=1;

for(laco=1;laco=1;)
{

system("cls");
setlocale(LC_ALL,"portuguese"); //Defini��o da linguagem

      printf("- Escola formadora de condutores -\n\n");
      printf("Escolha op��es no menu:\n\n");
      printf("\t1- Nome do aluno:\n\n");
      printf("\t2- Digite o CPf:\n\n");
      printf("\t3- Deletar:\n\n");
      printf("Digite a op��o desejada:"); //Finaliza��o do menu

      scanf("%d", &opcao); //Armazenando as op��es do usu�rio

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
		    printf("Op��o inexistente!");
	        system("pause");  
			break; 	
	 } }

     
}
