
#include <stdio.h> //biblioteca de comunica��o com o usu�rio.
#include <stdlib.h> //biblioteca de aloc��o de espe�o de mem�ria. 
#include <locale.h> //biblioteca de aoca��o de texto por regi�o.
#include <string.h> //biblioteca resposalvel pelas strings.
   
   
   int registro() // responsalvel por cadastrar os us�arios. 
{ 
     
	 // inicio cria��o de variaveis.
	 char arquivo[50]; 
     char cpf[50];
     char nome[50];
     char sobrenome[50];
	 char cargo[50];
	 // fim da cria��o de variaveis.
	 
	 printf("Digite seu cpf: "); // coletando informa��es dos usuarios.
	 scanf("%s", cpf); // %s refere-se a string.
	 
	 strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	 
	 FILE *file;//cria o arquivo na pasta.
	 file = fopen(arquivo,"w");//abre o arquivo criado. "w"= write (escrever o arquivo).
	 fprintf(file,cpf);//salva o valor da variavel.
	 fclose(file);//fecha o arquivo.
	 
	 file=fopen(arquivo,"a"); // responsalvel por atualizar o arquivo "a"= atualizar 
     fprintf(file,",");// responsalvel por colocar um , na atualiza��o em quest�o.
     fclose(file);// responsalvel por fechar o arquivo.
     
     printf("Digite o nome a ser cadastrado: ");
     scanf("%s",nome); 
     
     file=fopen(arquivo,"a");
     fprintf(file,nome);
     fclose(file);
    
     file=fopen(arquivo,"a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o sobrenome a ser cadastrado: ");
     scanf("%s", sobrenome);
     
     file=fopen(arquivo,"a");
     fprintf(file,sobrenome);
     fclose(file);
    
     file=fopen(arquivo,"a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o cargo a ser cadastrado: ");
     scanf("%s",cargo);
     
     file=fopen(arquivo,"a");
     fprintf(file,cargo);
     fclose(file);
    
     system("pause");// responsalvel por pausar o sistema, para que n�o mude de tela sem clicar em algum comando.
     
     
     
}
	
   int consulta() //comando para iniciar a consulta de nomes.
   {
   	
   	setlocale(LC_ALL, "Portuguese");
   	
   	char cpf[50];
   	char conteudo[200];
   	
   	printf("Digitte o cpf a ser consultado: ");
   	scanf("%s",cpf);
   	
   	FILE *file;
   	file = fopen(cpf,"r");// responsalvel por localizar a variavel no arquivo (string).
   	
   	if(file == NULL)
	   {
	   	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	   }
	   
	while(fgets(conteudo, 200, file) !=NULL)
	   {
		printf("\nEssas s�o as informa��es de usu�rios: ");
		printf("%s",conteudo);
		printf("\n\n");
       } 
	   
	system("pause");     	
   	
   	
   }
	
   int deletar()
   {  
   
      setlocale(LC_ALL, "Portuguese");           
        
      char cpf[50];
      
      printf("Digite o cpf que ser� deletado: ");
      scanf("%s",cpf);
      
      remove(cpf);
      
      FILE *file;
      file = fopen(cpf,"r");
      
      if(file == NULL)
      {
      	  printf("Esse usu�rio n�o existe!.\n");
      	  system("pause");
	  }
      
   }
	
   int main()
{
    int opcao=0; //Definindo as opcoes disponiveis 
    int x=1; // Definindo a nossa variavel
	
	for(x=1;x=1;)
{
		
		
		system("cls");
	
	
	
        setlocale(LC_ALL, "Portuguese"); //Definicao da lingua.

            	printf("### Cart�rio da EBC ###\n\n");// Inicio do menu.
	            printf("     Selecione a op��o desejada no menu:\n\n");
	            printf("\t1 - registrar nomes\n");
	            printf("\t2 - consultar  nomes\n");
	            printf("\t3 - deletar nomes\n\n");
	            printf("     Essa interface � de uso exclusivo da EBAC\n"); // Fim da selecao.
	
              	scanf("\%d", &opcao);// Armazenamento de dados.
	
	
	    system("cls");// responsalvel por limpar a tela.
	
   switch(opcao)// Desenvolvimento das op��es disponiveis.
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
	         printf("Esta opcao n�o est� disponivel, tente novamente\n");
	          system("pause");
	           break;
			   // Fim do menu.
	           
    
   }

}
		
                                                                                           }

