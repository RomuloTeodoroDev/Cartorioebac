#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //Fun��o respons�vel por cadastrar os usu�rios no sistema

{


     setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	
	 //In�cio cria��o de vari�veis / strings
	
     char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	
	 //Final da cria��o de vari�veis / strings
	 
	 printf("Digite o CPF a ser cadastrado: "); //Coletando informa��o do usu�rio
	 scanf("%s", cpf); //%s refere-se a string, cpf
	 
	 strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	 
	 FILE *file; // cria o arquivo
	 file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	 fprintf(file,cpf); // salvo o valor da vari�vel
	 fclose(file); // fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file, ","); // salvo o valor da vari�vel e separa com a ","
	 fclose(file); // Fecha o arquivo
	
	 printf("Digite o nome a ser cadastrado: "); //Coletando informa��o do usu�rio
	 scanf("%s",nome); //%s refere-se a string , nome
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file,nome); // salvo o valor da vari�vel nome
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file, ","); // salvo o valor da vari�vel e separa com a ","
	 fclose(file);	// Fecha o arquivo
	
	 printf("Digite o sobrenome a ser cadastrado: "); //Coletando informa��o do usu�rio
	 scanf("%s",sobrenome); //%s refere-se a string sobrenome
	
	 file = fopen(arquivo,"a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file,sobrenome); // salvo o valor da vari�vel sobrenome
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file, ","); // salvo o valor da vari�vel e separa com a ","
	 fclose(file); // Fecha o arquivo
	
     printf("Digite o cargo a ser cadastrado: "); //Coletando informa��o do usu�rio
	 scanf("%s",cargo); //%s refere-se a string cargo
	
	 file = fopen(arquivo,"a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file,cargo); // salvo o valor da vari�vel cargo
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usu�rio
	 fprintf(file, ","); // salvo o valor da vari�vel e separa com a ","
	 fclose(file); // Fecha o arquivo
	
     {
		 printf("\n\n"); // registrar um espa�o por est�tica do app
		 printf("Usu�rio cadastrado com sucesso! .\n\n"); // Informa��o de cadastro efetuado
	}
	system("pause"); // mant�m a tela pausada at� o usu�rio sair da mesma
	printf("\n\n");
	 {
		 printf("Deseja cadastrar outro usu�rio?\n\n");

	}
	system("pause");
	
}

int consulta() //Fun��o respons�vel por consultar os usu�rios no sistema
{
	 setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	
	 //In�cio cria��o de vari�veis / strings
    
	 char cpf[40];
     char conteudo[200];
    
     //Final da cria��o de vari�veis / strings
    
     printf(" Digite o CPF a ser consultado: "); // coletando informa��o do usu�rio
     scanf("%s",cpf); //%s refere-se a string cpf
    
     FILE *file; // consulta o arquivo
     file = fopen(cpf,"r"); // abre o arquivo e L� as informa��es "r"
    
     if(file == NULL) // Verifica o arquivo e devolve a informa��o se ele n�o existir
    {
    	 printf("N�o foi poss�vel abrir o arquivo, n�o localizado! . \n"); //Informa��o devolvida ao usu�rio
	}
	
	 while(fgets(conteudo, 200, file) != NULL) // la�o de repeti��o, enquanto tiver informa��o na string conteudo at� 200 caracteres ele re�ne e traz para o usu�rio 
	{
		 printf("\nEssas s�o as informa��es do usu�rio: "); //Informa��o devolvida ao usu�rio
		 printf("%s", conteudo); //%s refere-se a string conteudo 
		 printf("\n\n"); // espa�o por est�tica e organiza��o do app
	}	
	
	 system("pause"); // mant�m a tela pausada at� o usu�rio sair da mesma
}

int deletar() //Fun��o respons�vel por deletar os usu�rios no sistema
{
	 //In�cio cria��o de vari�veis / strings
	
	 char cpf[40];
	
	 //Final da cria��o de vari�veis / strings
	
	 printf("Digite o CPF a ser deletado:"); // coletando informa��o do usu�rio
	 scanf("%s",cpf); //%s refere-se a string cpf
	 printf("\n\n");
	
	 remove(cpf); // Deleta o arquivo a escolha do usu�rio
	
	 FILE *file; // consulta o arquivo
	 file = fopen(cpf,"r"); // abre o arquivo e L� as informa��es "r"
		
	 if(file == NULL) // Verifica o arquivo e devolve a informa��o se ele n�o existir
	{
		 printf("O usu�rio n�o se encontra no sistema! .\n"); //Informa��o devolvida ao usu�rio
		 system("pause");// mant�m a tela pausada at� o usu�rio sair da mesma
	}
}


int main()
{
	 setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	 int opcao=0;  //Definindo vari�veis
	 int laco=1;
	 char senhadigitada[]="a";
	 int comparacao;
	
	 printf("### Cart�rio da EBAC ###\n\n");
	 printf(" login de administrador!\n\n");
	 printf(" Digite sua senha:");
	 scanf("%s",senhadigitada);
	 
	 comparacao = strcmp(senhadigitada, "admin");
	
     if(comparacao == 0)
	{
	   system("cls");
	   for(laco=1;laco=1;)
       {  

         system("cls");

	     setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	     printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
	     printf("Escolha a op��o desejada do menu: \n\n");
	     printf("\t1 - Registrar nomes\n");
	     printf("\t2 - Consultar nomes\n");
	     printf("\t3 - Deletar nomes\n\n");
	     printf("\t4 - Sa�r do sistema \n\n");
	     printf("Op��o:"); //Fim do menu
	     
	     scanf("%d", &opcao); //Armazenando a escolha do usu�rio
	     
	     system("cls"); // Respons�vel por limpar a tela
	     
	     switch(opcao)
	     {
	  	     case 1:
	  	     registro(); // Chamada de fun��es
	  	     break;
	     	   
		     case 2:
		     consulta();
		     break;
		 
		     case 3:
		     deletar();
	         break;
	     
	         case 4:
	         printf("Obrigado por utilizar o sistema!\n");
	   	     return 0;
	   	     break;
	          
	         default:
	         printf("Essa op��o n�o est� dispon�vel!\n");
	         system("pause");
	         break;
	         // Fim das sele��es
	     
	     
	        }
			    
        }
		  
    }
     
    else
	  printf("senha incorreta!");
       
}
