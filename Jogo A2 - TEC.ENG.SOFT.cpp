# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main () {
    
  char nome[50];                                                                                              
  char resposta;                                                                               
  int contadorperguntaf=1,contadorperguntam=1,contadorperguntad=1;
  int errado_1=0,errado_2=0,errado_3=0;
  int certo_1=0,certo_2=0,certo_3=0,pontostotal=0,nivel;
  
  
    dificuldade:   
                   
    system("color 1F");  
    printf("\n\n\n\n");   
    printf("\t                  XX   XXXXXXXX    XXXXXXXX    XXXXXXXX\n");                           
    printf("\t                  XX  XXX    XXX  XXX    XXX  XXX    XXX\n");
    printf("\t                  XX  XX      XX  XX          XX      XX\n");
    printf("\t                  XX  XX      XX  XX          XX      XX\n");
    printf("\t                  XX  XX      XX  XX    XXXX  XX      XX\n");
    printf("\t          XX      XX  XX      XX  XX      XX  XX      XX\n");
	printf("\t           XX    XXX  XXX    XXX  XXX    XXX  XXX    XXX\n");
	printf("\t             XXXXX     XXXXXXXX    XXXXXXXX    XXXXXXXX\n");
	printf("\n");    
    printf("\t                XXXXXX       XXXXXXXX   XXXXXXXXXX\n"); 
    printf("\t                XX    XX    XXX    XXX         XXX\n");
    printf("\t                XX      XX  XX                XX  \n");
    printf("\t                XX      XX  XXXXXXXX         XX   \n");
    printf("\t                XX      XX  XXXXXXXX       XX     \n");
    printf("\t                XX      XX  XX            XX      \n");
    printf("\t                XX    XX    XXX    XXX  XXX       \n");                     
    printf("\t                XXXXXX       XXXXXXXX   XXXXXXXXXX \n\n");
	  
                                                              
    printf ("\t*================================================================*\n");    
	printf ("\t|                             OPCOES                             |\n");
	printf ("\t*================================================================*\n");
	printf ("\t|       0 - SAIR DO GAME                                         |\n");
	printf ("\t|       1 - JOGAR TODOS OS NIVEIS                                |\n");
	printf ("\t|       2 - JOGAR NIVEL FACIL                                    |\n");                         //SELEÇAO DOS NIVEIS    
	printf ("\t|       3 - JOGAR NIVEL MEDIO                                    |\n");
	printf ("\t|       4 - JOGAR NIVEL DIFICIL                                  |\n");
	printf ("\t|       5 - INSTRUCOES DO JOGO                                   |\n");
	printf ("\t|       6 - VER OS DESENVOLVEDORES                               |\n");
	printf ("\t*----------------------------------------------------------------*\n");
	printf ("\t SELECIONE O NIVEL!");                                            
	scanf ("%d",&nivel);                                                            
	
	if(nivel != 1 && nivel != 2 && nivel != 3 
    && nivel != 4 && nivel != 5 && nivel != 6 && nivel != 0){                        
             
             goto teste;
                                             
                                                                 
                } 
                        
             
             
             if (nivel == 5){  
             goto intrucoes;          
             }          
             if (nivel == 6){  
             goto desenvolvedores;          
             }  
             
             if ( nivel == 0 ){
             return 0;
             }                       
	
	getchar();
	system("cls");                                                                           
                                                     
    printf("\n\n\tDIGITE SEU NOME: ");
    gets(nome);system ("cls"); 
    printf ("\n\t \"%s\"\n",nome);
    
    printf("\n\n");
    
    printf("\tEste e um jogo de perguntas e respostas, o jogador devera escolher\n");
	printf("\tdentre as 4 alternativas apenas uma e em seguida pressionar \"ENTER\"\n\n");
	printf("\tEste jogo foi feito com o intuito de testar os seus conhecimentos.\n");
    printf("\t, Boa Sorte!\n");
		
	printf("\n\tPRESSIONE ENTER PARA COMECAR...");
	getchar();system ("cls");                                                     
	
	
	// NIVEL FACIL
	
	             
	switch (nivel)
	{
                     
    case 1 :
		{
        } 
          
	case 2 :
		{
            
	system("cls");                                                                 
    printf("\n");
	system("color AF");	
    printf("      *---------------------------------------------------------------*\n");
	printf("      ||          XXX    XX  XX  XX     XX  XXXXXXX  XX              ||\n");
    printf("      ||          XX X   XX  XX  XX     XX  XX       XX              ||\n");
    printf("      ||          XX  X  XX  XX   XX   XX   XXXXX    XX              ||\n");
    printf("      ||          XX   X XX  XX    XX XX    XX       XX              ||\n");
    printf("      ||          XX    XXX  XX     XXX     XXXXXXX  XXXXXX          ||\n"); 
    printf("      *---------------------------------------------------------------*\n");
   	printf("      ||          XXXXXXX   XXXXX    XXXXX  XX  XX                   ||\n");
    printf("      ||          XX       XX   XX  XX      XX  XX                   ||\n");
    printf("      ||          XXXXX    XXXXXXX  XX      XX  XX                   ||\n");
    printf("      ||          XX       XX   XX  XX      XX  XX                   ||\n");
    printf("      ||          XX       XX   XX   XXXXX  XX  XXXXXX               ||\n");
	printf("      *---------------------------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                      
    
    
    // 1º Questão F   
    
    
    system("color 1F");
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tNas entregas do modelo agil, qual \n\t\tdos aspectos abaixo e negociavel\n\n");
	printf ("\t\t--------------------------------------------\n");
	printf ("\t\tA) Tempo\n"); 
	printf ("\t\tB) Qualidade\n");
	printf ("\t\tC) Custo\n");
	printf ("\t\tD) Escopo\n");
	printf ("\t\t--------------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
    }
    
    
    // 2º Questão F
    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tDefinir e priorizar os itens do backlog \n\t\te responsabilidade do...\n\n");
    printf ("\t\t---------------------------------------\n");
	printf ("\t\tA) Scrum Master\n");
	printf ("\t\tB) Desenvolvedor\n");
	printf ("\t\tC) Product Owner\n");
	printf ("\t\tD) Gerente\n");
	printf ("\t\t---------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'c'||resposta == 'C')
	{
	printf ("\t\tResposta certa\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	}
	
	
	// 3º Questão F
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                       
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQual e o principal objetivo das \n\t\tdaily meetings?\n\n");
	printf ("\t\t-----------------------------------------\n");
	printf ("\t\tA) Para os membros do time compartilharem seus status.\n"); 
	printf ("\t\tB) Acompanhar o andamento da sprint.\n");
	printf ("\t\tC) Atualizar o kanban.\n");
	printf ("\t\tD) Iniciar o dia de trabalho.\n");
	printf ("\t\t-----------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_1++;
    }
    
    
    // 4º Questão F
    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                       
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil  |\n",contadorperguntaf++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuem e responsavel pela qualidade \n\t\tdas entregas?\n\n");
    printf ("\t\t------------------------------------\n");
	printf ("\t\tA) QA\n");
	printf ("\t\tB) Scrum Master\n");
	printf ("\t\tC) Time\n");
	printf ("\t\tD) Desenvolvedores\n");
	printf ("\t\t------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'c'||resposta == 'C')
	{
	printf ("\t\tResposta certa\n");
	certo_1++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_1++;
	}
    
    
    // 5° Questão F  
    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Facil |\n",contadorperguntaf++);
	printf ("\t\t*-------------------------------*\n\n");
	printf ("\t\tO Burndown serve para...\n\n");
	printf ("\t\t------------------------------\n");
	printf ("\t\tA) Medir a performance dos membros do time.\n"); 
	printf ("\t\tB) Criar uma sprint.\n");
	printf ("\t\tC) Acompanhar visualmente o andamento da sprint.\n");
	printf ("\t\tD) Reduzir os itens do backlog.\n");
	printf ("\t\t------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_1++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls"); 
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_1++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls"); 
    }   
    
    
	if (nivel == 1){
        }
    else{
    goto nivelfacil;
            }
		}    
	
		
    // NIVEL INTERMEDIARIO
    
   
	
	case 3:
		{
	system("color AF");           
   	printf("      *---------------------------------------------------------------*\n");
	printf("      ||          XXX    XX  XX  XX     XX  XXXXXXX  XX              ||\n");
    printf("      ||          XX X   XX  XX  XX     XX  XX       XX              ||\n");
    printf("      ||          XX  X  XX  XX   XX   XX   XXXXX    XX              ||\n");
    printf("      ||          XX   X XX  XX    XX XX    XX       XX              ||\n");
    printf("      ||          XX    XXX  XX     XXX     XXXXXXX  XXXXXX          ||\n"); 
    printf("      *---------------------------------------------------------------*\n");
   	printf("      ||          XXXX   XXXX  XXXXXX  XXXXXXX    XX   XXXXX         ||\n");
    printf("      ||          XX XX XX XX  XX      XX    XX   XX  XX   XX        ||\n");
    printf("      ||          XX  XXX  XX  XXXXX   XX     XX  XX  XX   XX        ||\n");
    printf("      ||          XX   X   XX  XX      XX    XX   XX  XX   XX        ||\n");
    printf("      ||          XX       XX  XXXXXX  XXXXXXX    XX   XXXXX         ||\n");
	printf("      *---------------------------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                      
    
    
    // 1º Questão M
    
    
    system("color 1F");
 	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQual alternativa NAO se refere a \n\t\ttdefiniçao de pronto\n\n");
	printf ("\t\t-----------------------------------------\n");
	printf ("\t\tA) Define atividades executadas para efetuar uma entrega.\n");
	printf ("\t\tB) Deve ser seguido para as entregas.\n");
	printf ("\t\tC) Define como as histórias devem ser descritas.\n");
	printf ("\t\tD) Compreende as etapas do desenvolvimento.\n");
	printf ("\t\t-----------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='b')||(resposta=='B'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"B\"\n");
	errado_2++;
	}
	
	
	// 2º Questão M
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                      
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tNa automaçao de testes, qual deve \n\t\tser o tipo de testes com maior numero \n\t\te area de cobertura?\n\n");
	printf ("\t\t---------------------------------------\n");
    printf ("\t\tA) Testes de Serviço\n");
	printf ("\t\tB) Testes de Usabilidade\n");
	printf ("\t\tC) Testes Unitários\n");
	printf ("\t\tD) Testes Exploratórios\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
	}
	
	
	// 3º Questão M
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                         
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tQuais desses NAO e um dos valores base do Scrum ?\n\n");
    printf ("\t\tA) Transparencia\n");
	printf ("\t\tB) Inspeção\n");
	printf ("\t\tC) Adaptação\n");
	printf ("\t\tD) Rapidez\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'd'||resposta == 'D')
	{
	printf ("\t\tResposta certa\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
	}
	
	
	// 4º Questao M
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                       //limpa a tela
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio  |\n",contadorperguntam++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tNo Scrum, ha tres papeis importantes: \n\t\tProduct Owner, Team e Scrum Master \n\t\tE responsabilidade do Product Owner: \n\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tA) Determinar como serao a gestao e a organizaçao dos times.\n"); 
	printf ("\t\tB) Desenvolver funcionalidades do projeto.\n");
	printf ("\t\tC) Ensinar Scrum a todos os envolvidos no projeto.\n");
	printf ("\t\tD) Assegurar que a funcionalidade mais valiosa sera produzida primeiro.\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_2++;
    }
	
	
  // 5° Questão M  
    
    
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Medio |\n",contadorperguntam++);
	printf ("\t\t*-------------------------------*\n\n");
	printf ("\t\tA Sprint e considerada o coração do Scrum. \n\t\tUma nova Sprint inicia-se imediatamente apos \n\t\ta conclusao da Sprint anterior. Durante a Sprint...\n\n");
	printf ("\t\t---------------------------------------\n");
	printf ("\t\tA) A composiçao da equipe de desenvolvimento muda constantemente.\n"); 
	printf ("\t\tB) As metas de qualidade podem ser reduzidas para dar mais agilidade ao desenvolvimento\n");
	printf ("\t\tC) O escopo pode ser clarificado e renegociado entre o PO e a equipe Dev\n");
	printf ("\t\tD) Sao permitidas as definiçoes de mudanças que podem afetar o seu objetivo\n");
	printf ("\t\t---------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='c')||(resposta=='C'))
	{
	printf ("\t\tResposta correta\n");
	certo_2++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"C\"\n");
	errado_2++;
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");
}
	

	if (nivel == 1){
     }
     else{
     goto nivelmedio;
     }
     }
	
	 
	 		
    // NIVEL DIFICIL	
     
    
		
		case 4 :
		{   
            
    system("color AF");        
   	printf("      *---------------------------------------------------------------*\n");
	printf("      ||          XXX    XX  XX  XX     XX  XXXXXXX  XX              ||\n");
    printf("      ||          XX X   XX  XX  XX     XX  XX       XX              ||\n");
    printf("      ||          XX  X  XX  XX   XX   XX   XXXXX    XX              ||\n");
    printf("      ||          XX   X XX  XX    XX XX    XX       XX              ||\n");
    printf("      ||          XX    XXX  XX     XXX     XXXXXXX  XXXXXX          ||\n"); 
    printf("      *---------------------------------------------------------------*\n");
   	printf("      ||          XXXXXX    XX  XXXXX  XX   XXXXX  XX  XX            ||\n");
    printf("      ||          XX    XX  XX  XX     XX  XX      XX  XX            ||\n");
    printf("      ||          XX    XX  XX  XXXX   XX  XX      XX  XX            ||\n");
    printf("      ||          XX    XX  XX  XX     XX  XX      XX  XX            ||\n");
    printf("      ||          XXXXXX    XX  XX     XX   XXXXX  XX  XXXXXX        ||\n");
	printf("      *---------------------------------------------------------------*"); 
    printf("\n\t\t\tPRESSIONE ENTER...");
    getchar();system ("cls");                                                       
    
    
 	// 1º Questão D
	
	 
	system("color 1F");
	printf ("\t\t*----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel dificil  |\n",contadorperguntad++);
	printf ("\t\t*----------------------------------*\n\n");
	printf ("\t\tNo Scrum, as entregas de partes funcionais \n\t\tdo projeto sao divididas em ciclos, geralmente compreendidos \n\t\tno periodo de 1 a 4 semanas. Estes ciclos podem ser chamados de:\n\n");
    printf ("\t\t-----------------------------------------\n");
	printf ("\t\tA) Iteraçoes e sprint\n");
	printf ("\t\tB) Reuniao de planejamento e backlog\n");
	printf ("\t\tC) Periodo de entrega e reuniao de revisao\n");
	printf ("\t\tD) Reuniao de planejamento e sprint\n");
	printf ("\t\t-----------------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'a'||resposta == 'A')
	{
	printf ("\t\tResposta certa\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	}
	
	
	//  2º Questão D
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"ENTER\" para continuar...");
	getchar();system("cls");                                                       
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tNa metodologia SCRUM, NAO faz parte \n\t\tde uma revisao do sprint o seguinte procedimento:\n\n");
	printf ("\t\t--------------------------------\n");
	printf ("\t\tA) O time de desenvolvimento apresenta o trabalho que foi desenvolvido e responde questoes sobre o incremento\n"); 
	printf ("\t\tB) O time apresenta quantos pontos estavam previstos na sprint e quantos foram entregues\n");
	printf ("\t\tC) O proprietario do produto identifica o que esta pronto e o que ainda esta por fazer\n");
	printf ("\t\tD) Todo time cria um plano para implementar melhorias no modo como o time efetua seu trabalho\n");
	printf ("\t\t--------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='d')||(resposta=='D'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_3++;
	}
	
	
	// 3º Questão D
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                        
	printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tDentre os papeis da metodologia agil Scrum \n\t\testa o Scrum Master. NAO se inclui entre suas funçoes:\n\n");
	printf ("\t\t---------------------\n");
	printf ("\t\tA) Determinar para o time de desenvolvimento como os itens de backlog devem ser convertidos em potenciais funcionalidades para entrega\n"); 
	printf ("\t\tB) Remover impedimentos para o progresso do time dev.\n");
	printf ("\t\tC) Comunicar claramente a visao, metas e itens de backlog do produto ao time de desenvolvimento\n");
	printf ("\t\tD) Entender o planejamento de produto de longo prazo\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
	}
	
	
	// 4º Questão D
	
	
	printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");                                                      
    printf ("\t\t*--------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel dificil  |\n",contadorperguntad++);
	printf ("\t\t*--------------------------------*\n\n");
	printf ("\t\tNo contexto das regras do SCRUM, e correto afirmar:\n\n");
	printf ("\t\t----------------------------------\n");
    printf ("\t\tA) Durante a realização do Sprint, o Backlog pode ser modificado por qualquer um dos elementos da equipe\n");
	printf ("\t\tB) Modificação no Backlog e prerrogativa do Scrum Master, quando achar necessario, em qualquer momento no decorrer do Sprint\n");
	printf ("\t\tC) O foco na produtividade e o principal valor no Scrum\n");
	printf ("\t\tD) O Sprint deve ser realizado num periodo nao superior a 30 dias e ter um objetivo claro, baseado no sprint backlog\n");
	printf ("\t\t----------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if (resposta == 'd'||resposta == 'D')
	{
	printf ("\t\tResposta certa\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"D\"\n");
	errado_3++;
	}
 

  	//  5° Questão D  
    
      
    printf ("\t\t----------------------------------\n");
	getchar();printf ("\t\tProxima pergunta pressione \"enter\" para continuar...");
	getchar();system("cls");
	printf ("\t\t*-----------------------------------*\n");
	printf ("\t\t|  Pergunta n. %.2d - Nivel Dificil |\n",contadorperguntad++);
	printf ("\t\t*-----------------------------------*\n\n");
	printf ("\t\tO papel do SCRUM que tem como funçao primaria n\t\tremover qualquer impedimento a capacidade de uma equipe \n\tde entregar o objetivo de um sprint e o:\n\n");
	printf ("\t\t--------------------------------\n");
	printf ("\t\tA) Scrum Master\n"); 
	printf ("\t\tB) Master PO\n");
	printf ("\t\tC) Product Owner\n");
	printf ("\t\tD) Chapter Leader\n");
	printf ("\t\t--------------------------------\n");
	printf ("\t\tResposta ?  ");
	scanf ("%s",&resposta);
	
	if ((resposta=='a')||(resposta=='A'))
	{
	printf ("\t\tResposta correta\n");
	certo_3++;
	}
	else
	{
	printf ("\t\tResposta errada\n");
	printf ("\t\tResposta correta: Letra \"A\"\n");
	errado_3++;
    }
	

	getchar();printf ("\n\n\t\tJOGO ENCERRADO\n\t\tCONFIRA OS RESULTADOS \n\t\t...");
	getchar();system("cls");                                                       
	
	if (nivel == 1){
            goto todosniveis;
            }
            else{
            goto niveldificil;
            }
					
		}
        
    intrucoes:
    
    case 5 :
	{
             
    system("cls");                                                                 
    printf ("\n\n\t5 - INSTRUCOES\n\n");   
    printf ("\tEste e um pequeno jogo de perguntas e respostas.\n\tO jogador devera escolher,");
	printf (" dentre as 4 alternativas (A, B, C, D),\n\tapenas uma e em seguida pressionar \"ENTER\".\n\n");
	printf ("\tO jogo lhe informa se vc acertou ou errou a questao.\n\n");
	printf ("\tO jogo possui 3 niveis de dificuldade:\n\n");
	printf ("\tTodos Niveis - Neste modo vc jogara o game completo\n");
	printf ("\tao final vera seus resultados\n");
	printf ("\n");
	printf ("\tOs niveis podem ser jogados de forma individual sem precisar\n");
	printf ("\tjogar o game completo.\n\n");
	
    printf ("\tSistema de pontuacao do game.\n\n");
	printf ("\tNivel facil   - Cada resposta certa valera 150 pontos\n");
	printf ("\tNivel medio   - Cada resposta certa valera 200 pontos\n");
	printf ("\tNivel dificil - Cada resposta certa valera 250 pontos\n\n");
    printf ("\tBasicamente e isso, divirtam-se.\n");              
    printf ("\t----------------------------------\n\n");
    
    getchar();printf ("\tEnter para retornar ao menu.");
    getchar();system("cls");                                                        
    goto dificuldade;       
    }  
    
    desenvolvedores: 
        
    case 6 :
         
	{
      
    system("cls");                                                                  
    printf ("\n\n\n\n\n\tPROGRAMADOR.\n\n");
	printf ("\tGENILSON SILVA DA CONCEIÇAO\n\n");
	
	printf ("\n\n\n\n\n\tCOLABORADORES.\n\n");
    printf ("\tITALO PINHEIRO DA SILVA\n\n");
	printf ("\tANTONIO CLAUDIO DE JESUS SANTOS FILHO\n\n");
	printf ("\n\n\n\n\n\tEQUIPE.\n\n");
	printf ("\tGENILSON SILVA DA CONCEIÇAO\n\n");
	printf ("\tITALO PINHEIRO DA SILVA\n\n");
	printf ("\tANTONIO CLAUDIO DE JESUS SANTOS FILHO\n\n");
	printf ("\n");
	printf ("\n\n\n\n\n\tUNIVERSIDADE SALVADOR\n\n");
	printf ("\n\n\n\n\n\tDOCENTE.\n\n");
	printf ("\tANTONIO BRANDÃO\n\n");
	
	getchar();printf ("\tEnter para retornar ao menu.");
    getchar();system("cls");                                                        
    goto dificuldade; 	
	             
         }
         
    
		teste:
		default : system("cls");
		system("color f0");
printf ("\t\t********************************************\n");    
printf ("\t\t*                                          *\n"); 
printf ("\t\t*              NIVEL INVALIDO              *\n");   
printf ("\t\t*                                          *\n");  
printf ("\t\t********************************************\n\n");  
  
		{
			getchar();printf ("\n\n\t\tPressione \"enter\" para voltar ao menu...");
			getchar(); system ("cls");
			goto dificuldade;
			
			
      }
		
	}
	
	
	// Resultados	
	
	
    todosniveis:
    pontostotal=(certo_1*150)+(certo_2*200)+(certo_3*250);
    
    system("cls");
	system("color 8F");
    
	printf ("\t\t\tRESULTADOS DO JOGO                  \n\n");
	printf ("\t\t\tENTER PARA CONFERIR SUA\n\t\t\tPONTUACAO EM CADA NIVEL...\n\n");
	printf ("\t\t\tParticipante: %s                    \n",nome);
	printf ("\t\t\tTotal de acertos  : %d              \n",certo_1+certo_2+certo_3);
	printf ("\t\t\tTotal de erros    : %d              \n",errado_1+errado_2+errado_3);
	printf ("\t\t\tPontuacao total   : %d              \n\n",pontostotal);
	getchar();
	if (nivel==1){
	goto nextnivel2;
    }
	
	nivelfacil:
    nextnivel2:
	printf ("\t\t\tNIVEL FACIL             \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_1);
	printf ("\t\t\tErros    : %d                        \n",errado_1);
	printf ("\t\t\tPontuacao: %d                        \n\n",certo_1*150);
	getchar();
	errado_1=0;
	certo_1=0;
	contadorperguntaf=1;
	if (nivel==1)
	goto nextnivel3; 
    if(nivel==2){
    system ("cls");                                                                
	goto dificuldade;	
    }

	nivelmedio:
    nextnivel3: 	
	printf ("\t\t\tNIVEL MEDIO           \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_2); 
	printf ("\t\t\tErros    : %d                        \n",errado_2);
	printf ("\t\t\tPontuacao: %d                        \n\n",certo_2*200);
	getchar();
	errado_2=0;
	certo_2=0;
	contadorperguntam=1;
	if (nivel==1){
	goto nextnivel4;
    }
	if(nivel==3){
	system ("cls");                                                                
	goto dificuldade;
    }
	
	niveldificil:
    nextnivel4:	
	printf ("\t\t\tNIVEL DIFICIL         \n\n");
	printf ("\t\t\tAcertos  : %d                        \n",certo_3);
	printf ("\t\t\tErros    : %d                        \n",errado_3);
	printf ("\t\t\tPontuacao: %d                        \n",certo_3*250);
	getchar();
	errado_3=0;
	certo_3=0;
	contadorperguntad=1;
	if(nivel==1 || nivel==4){
	system ("cls");                                                                
	goto dificuldade;
    }
	

    printf ("\n\n");
    system ("PAUSE");
    return (0);
}
