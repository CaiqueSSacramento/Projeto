#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int n = 1;
	printf("Ola, seja muito bem vindo ao nosso Primeiro projeto em C\n");
	
	while (n != 0)
	{	
	printf("\nEscolha um jogo entre:\n1 - Perguntas e respostas \n2 - Adivinhe o numero \n3 - Olho de cobra \n0 - Sair do jogo \nSua Resposta: "); 
	scanf("%d", &n);
		
		switch (n)
		{ 	
			case (1):
				{
					printf("|---------------------------------|\n");
					printf("|  Voce escolheu o Primeiro Jogo  |\n");
					printf("|---------------------------------|\n");
			int jogarNovamente = 1;
			while (jogarNovamente != 0)
			{
				char primeiraPergunta, segundaPergunta, terceiraPergunta;
				int pontos = 0;
				printf("\nVoce escolheu o PRIMEIRO JOGO - PERGUNTAS E RESPOSTAS\n\n");
				scanf("%c", &primeiraPergunta);
				printf("----------------PRIMEIRA PERGUNTA----------------\n Qual o resultado: (2+3) * 5 + (8+2) / 2. \n\nRespostas: \n\na) 20 \nb) 25 \nc) 30 \n\nSua resposta: ");  
				scanf("%c", &primeiraPergunta);
				if (primeiraPergunta == 'c')
				{
					pontos += 1;
					printf("\n	RESPOSTA CORRETA!\n");	
				}
				else
				{
					printf("\n	RESPOSTA INCORRETA!\n\n");
				}
				scanf("%c", &segundaPergunta);
				printf("\n----------------SEGUNDA PERGUNTA---------------- \n A Sucuri femea, depois de acasalar mata o parceiro e o come. \n\nRespostas: \n\na) Verdadeiro \nb) Falso \n\nSua resposta: ");  
				scanf("%c", &segundaPergunta);
				if (segundaPergunta == 'a')
				{
					pontos += 1;
					printf("\nRESPOSTA CORRETA!\n\n");	
				}
				else
				{
					printf("\nRESPOSTA INCORRETA!\n\n");
				}
				scanf("%c", &terceiraPergunta);
				printf("\n----------------TERCEIRA PERGUNTA---------------- \n Qual o nome do dono da SpaceX? \n\nRespostas: \n\na) Bill Gates \nb) Elon Musk \nc) Mark Zukenberg \n\nSua resposta: ");  
				scanf("%c", &terceiraPergunta);
				if ( terceiraPergunta == 'b')
				{
					pontos += 1;
					printf("\nRESPOSTA CORRETA!\n\n");	
				}
				else
				{
					printf("\nRESPOSTA INCORRETA!\n\n");
				}
			
			printf("O Seu total de pontos foi: %d pontos.\n\n", pontos);
			printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ", pontos);
			scanf("%d", &jogarNovamente);

			}//While jogar novamente - jogo 1
			break; //Para quando sair do loop voltar ao menu inicial
		}//Case jogo 1
			case (2):
				{	
					printf("|--------------------------------|\n");
					printf("|  Voce escolheu o Segundo Jogo  |\n");
					printf("|--------------------------------|\n");
				int i, numeroPessoa, chances = 5, numeroComputador = 69, jogarNovamente = 5;
				for (i = 0; i < 5; i++)
				{
					printf("\nAdivinhe o numero em que estou pensando de 0 a 1000, voce tem %d chance(s)\n", chances);
					printf("Digite o numero: ");
					scanf("%d", &numeroPessoa);
					chances--;
					if(numeroPessoa == numeroComputador)
					{
						printf("\nParabens, voce acertou!\n\n");
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							i = 0;
							chances = 5;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}
					}
					
					if (numeroPessoa > numeroComputador)
					{
						printf("\n---o Numero que eu escolhi eh menor do que o que voce digitou!\n\n");
					}
					if (numeroPessoa < numeroComputador)
					{
						printf("\n---o Numero que eu escolhi eh maior do que o que voce digitou!\n\n");
					}
					if (chances == 0)
					{
						printf("voce perdeu! suas chances acabaram\n\n");
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							i = 0;
							chances = 5;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}						
					}
			}//For do jogo 2
			}//Case do jogo 2
			case (3):
				{
					printf("|---------------------------------|\n");
					printf("|  Voce escolheu o Terceiro Jogo  |\n");
					printf("|---------------------------------|\n");
				int pontosDoPrimeiroJogador = 1;
				int pontosDoSegundoJogador = 1;
				int jogarNovamente = 5;
				
					int escolha1 = 1;
					int escolha2 = 1;
					char nome1[50];
					char nome2[50];
					int dado1, dado2;
					int pontosNaRodada1 = 0;
					int pontosNoBanco1 = 0;	
					int pontosNaRodada2 = 0;
					int pontosNoBanco2 = 0;					
						gets(nome1);			
						printf("\nNome do primeiro jogador: ");
						gets(nome1);
						printf("\nNome do segundo jogador: ");
						gets(nome2);			
				while (pontosDoPrimeiroJogador < 50 || pontosDoSegundoJogador < 50 )
				{

						printf("\n					Vez do PRIMEIRO jogador\n\n");
						printf("					Digite 1 para comecar sua vez: ");
						scanf("%d", &escolha1);	
					
						while (escolha1 != 0){ //VEZ DO PRIMEIRO JOGADOR
						
						
						srand(time(NULL));
						printf("\n\n-----------------------------------------------*VEZ DO PRIMEIRO JOGADOR*-----------------------------------------------\n");
						
						printf("	Primeiro dado: %d\n", dado1 = (rand()%6 + 1));
						printf("	Segundo dado: %d\n", dado2 = (rand()%6 + 1));
						printf("	Soma dos dados na Rodada: %d\n\n", (dado1 + dado2));
						
						pontosNaRodada1 = pontosNaRodada1 + dado1 + dado2;
							if (dado1 == 1 || dado2 == 1){
								pontosNaRodada1 = 0;
								escolha1 = 0;
								printf("Um de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
							}
							
							if (dado1 == 1 && dado2 == 1)
							{
								pontosNoBanco1 = 0;
								escolha1 = 0;
								printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
							}
						printf("\n\n			Pontos acumulados na rodada: %d\n", pontosNaRodada1);
						

						printf("			0- Se voce deseja guardar seus pontos e passar a vez \n			1- se voce deseja continuar: ");
						scanf("%d", &escolha1);
							if (escolha1 == 0)
							{
								pontosNoBanco1 += pontosNaRodada1;
								printf("\n%d ponto(s) foram adicionados ao seu banco!\n", pontosNoBanco1);
								pontosNaRodada1 = 0;
							}

							
							if (dado1 == 1 && dado2 == 1)
							{
								pontosNaRodada1 = 0;
								pontosNoBanco1 = 0;
								escolha1 = 0;
								printf("Voce tirou 1 em todos os dados;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
							}
							if (dado1 == 1 || dado2 == 1){
								pontosNaRodada1 = 0;
								escolha1 = 0;
								printf("Um de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
							}
							
						}//VEZ DO PRIMEIRO JOGADOR
					if (pontosNoBanco1 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!", nome1);
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosDoPrimeiroJogador = 0;
							pontosNoBanco1 = 0;
							pontosDoSegundoJogador = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}
					}
					
					if (pontosNoBanco2 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!\n\n", nome2);
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosDoPrimeiroJogador = 0;
							pontosNoBanco1 = 0;
							pontosDoSegundoJogador = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}
					}
						printf("\n					Vez do SEGUNDO jogador\n\n");
						printf("\n					Digite 1 para comecar sua vez: ");
						scanf("%d", &escolha2);	
											
						while (escolha2 != 0)
						{ //VEZ DO SEGUNDO JOGADOR

						srand(time(NULL));
						printf("\n\n-----------------------------------------------*VEZ DO SEGUNDO JOGADOR*-----------------------------------------------\n");
						printf("	Primeiro dado: %d\n", dado1 = (rand()%6 + 1));
						printf("	segundo dado: %d\n", dado2 = (rand()%6 + 1));
						
						pontosNaRodada2 = pontosNaRodada2 + dado1 + dado2;
						if (dado1 == 1 || dado2 == 1){
								pontosNaRodada2 = 0;
								escolha2 = 0;
								printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
						}
							
						if (dado1 == 1 && dado2 == 1)
						{
								pontosNaRodada2 = 0;
								pontosNoBanco2 = 0;
								escolha2 = 0;
								printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
						}
						printf("\n\n			Pontos acumulados na rodada: %d\n", pontosNaRodada2);

						printf("			0- Se voce deseja guardar seus pontos e passar a vez \n			1- se voce deseja continuar: ");
						scanf("%d", &escolha2);
						
							if (escolha2 == 0)
							{
								pontosNoBanco2 += pontosNaRodada2;
								printf("%d ponto(s) foram adicionados ao seu banco!\n", pontosNoBanco2);
								pontosNaRodada2 = 0;
							}
								
							if (dado1 == 1 || dado2 == 1){
								pontosNaRodada2 = 0;
								escolha2 = 0;
								printf("\n\n\n\n\n\n\n\n\n\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
							}
							
							if (dado1 == 1 && dado2 == 1)
							{
								pontosNoBanco2 = 0;
								escolha2 = 0;
								pontosNoBanco2 = 0;
								printf("\n\n\n\n\n\n\n\n\n\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
							}
						}//VEZ DO SEGUNDO JOGADOR
					if (pontosNoBanco1 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!", nome1);
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosDoPrimeiroJogador = 0;
							pontosNoBanco1 = 0;
							pontosDoSegundoJogador = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}
					}
					
					if (pontosNoBanco2 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!\n\n", nome2);
						printf("1 - Para Jogar novamente \n0 - para Voltar ao Menu \nSua Resposta: ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosDoPrimeiroJogador = 0;
							pontosNoBanco1 = 0;
							pontosDoSegundoJogador = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 0)
						{
							break;
						}
					}
				}//While do jogo 3
				} //Case do jogo 3
			case (0):
				{
				printf("\nVolte Sempre!\n");
  
			}
		}//SWITCH PARA DESCOBRIR QUAIS SAO OS JOGOS
	}//ENQUANTO O JOGADOR NAO POE 0 PARA SAIR DO APLICATIVO
}//VOID MAIN