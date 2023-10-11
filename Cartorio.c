#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //Função responsável por cadastrar os usuários no sistema

{


     setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	
	 //Início criação de variáveis / strings
	
     char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	
	 //Final da criação de variáveis / strings
	 
	 printf("Digite o CPF a ser cadastrado: "); //Coletando informação do usuário
	 scanf("%s", cpf); //%s refere-se a string, cpf
	 
	 strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
	 
	 FILE *file; // cria o arquivo
	 file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever
	 fprintf(file,cpf); // salvo o valor da variável
	 fclose(file); // fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file, ","); // salvo o valor da variável e separa com a ","
	 fclose(file); // Fecha o arquivo
	
	 printf("Digite o nome a ser cadastrado: "); //Coletando informação do usuário
	 scanf("%s",nome); //%s refere-se a string , nome
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file,nome); // salvo o valor da variável nome
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file, ","); // salvo o valor da variável e separa com a ","
	 fclose(file);	// Fecha o arquivo
	
	 printf("Digite o sobrenome a ser cadastrado: "); //Coletando informação do usuário
	 scanf("%s",sobrenome); //%s refere-se a string sobrenome
	
	 file = fopen(arquivo,"a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file,sobrenome); // salvo o valor da variável sobrenome
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file, ","); // salvo o valor da variável e separa com a ","
	 fclose(file); // Fecha o arquivo
	
     printf("Digite o cargo a ser cadastrado: "); //Coletando informação do usuário
	 scanf("%s",cargo); //%s refere-se a string cargo
	
	 file = fopen(arquivo,"a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file,cargo); // salvo o valor da variável cargo
	 fclose(file); // Fecha o arquivo
	
	 file = fopen(arquivo, "a"); // Abre o arquivo e atualiza os dados do usuário
	 fprintf(file, ","); // salvo o valor da variável e separa com a ","
	 fclose(file); // Fecha o arquivo
	
     {
		 printf("\n\n"); // registrar um espaço por estética do app
		 printf("Usuário cadastrado com sucesso! .\n\n"); // Informação de cadastro efetuado
	}
	system("pause"); // mantém a tela pausada até o usuário sair da mesma
	printf("\n\n");
	 {
		 printf("Deseja cadastrar outro usuário?\n\n");

	}
	system("pause");
	
}

int consulta() //Função responsável por consultar os usuários no sistema
{
	 setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	
	 //Início criação de variáveis / strings
    
	 char cpf[40];
     char conteudo[200];
    
     //Final da criação de variáveis / strings
    
     printf(" Digite o CPF a ser consultado: "); // coletando informação do usuário
     scanf("%s",cpf); //%s refere-se a string cpf
    
     FILE *file; // consulta o arquivo
     file = fopen(cpf,"r"); // abre o arquivo e Lê as informações "r"
    
     if(file == NULL) // Verifica o arquivo e devolve a informação se ele não existir
    {
    	 printf("Não foi possível abrir o arquivo, não localizado! . \n"); //Informação devolvida ao usuário
	}
	
	 while(fgets(conteudo, 200, file) != NULL) // laço de repetição, enquanto tiver informação na string conteudo até 200 caracteres ele reúne e traz para o usuário 
	{
		 printf("\nEssas são as informações do usuário: "); //Informação devolvida ao usuário
		 printf("%s", conteudo); //%s refere-se a string conteudo 
		 printf("\n\n"); // espaço por estética e organização do app
	}	
	
	 system("pause"); // mantém a tela pausada até o usuário sair da mesma
}

int deletar() //Função responsável por deletar os usuários no sistema
{
	 //Início criação de variáveis / strings
	
	 char cpf[40];
	
	 //Final da criação de variáveis / strings
	
	 printf("Digite o CPF a ser deletado:"); // coletando informação do usuário
	 scanf("%s",cpf); //%s refere-se a string cpf
	 printf("\n\n");
	
	 remove(cpf); // Deleta o arquivo a escolha do usuário
	
	 FILE *file; // consulta o arquivo
	 file = fopen(cpf,"r"); // abre o arquivo e Lê as informações "r"
		
	 if(file == NULL) // Verifica o arquivo e devolve a informação se ele não existir
	{
		 printf("O usuário não se encontra no sistema! .\n"); //Informação devolvida ao usuário
		 system("pause");// mantém a tela pausada até o usuário sair da mesma
	}
}


int main()
{
	 setlocale(LC_ALL, "portuguese");  //Definindo a linguagem
	 int opcao=0;  //Definindo variáveis
	 int laco=1;
	 char senhadigitada[]="a";
	 int comparacao;
	
	 printf("### Cartório da EBAC ###\n\n");
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
	     printf("### Cartório da EBAC ###\n\n"); //Início do menu
	     printf("Escolha a opção desejada do menu: \n\n");
	     printf("\t1 - Registrar nomes\n");
	     printf("\t2 - Consultar nomes\n");
	     printf("\t3 - Deletar nomes\n\n");
	     printf("\t4 - Saír do sistema \n\n");
	     printf("Opção:"); //Fim do menu
	     
	     scanf("%d", &opcao); //Armazenando a escolha do usuário
	     
	     system("cls"); // Responsável por limpar a tela
	     
	     switch(opcao)
	     {
	  	     case 1:
	  	     registro(); // Chamada de funções
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
	         printf("Essa opção não está disponível!\n");
	         system("pause");
	         break;
	         // Fim das seleções
	     
	     
	        }
			    
        }
		  
    }
     
    else
	  printf("senha incorreta!");
       
}
