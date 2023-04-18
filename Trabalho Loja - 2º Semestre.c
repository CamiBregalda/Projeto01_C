#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int cod, copias, copias_1, copias_2, copias_3, copias_4, copias_5, copias_6, copias_7, copias_8, copias_9, copias_10, c_1, c_2, c_3, c_4, c_5, c_6, c_7, c_8, c_9, c_10;
float valor, valor_1, valor_2, valor_3, valor_4, valor_5, valor_6, valor_7, valor_8, valor_9, valor_10, pag, troco, v_1, v_2, v_3, v_4, v_5, v_6, v_7, v_8, v_9, v_10;
char d[2];

int main (){
	setlocale (LC_ALL, "Portuguese");
	valor = 0;
	troco = 0;
	cod = 0;
	printf ("                    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    printf ("                     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
    printf ("                    * *                                                                         * * \n");
    printf ("                     *        0     00000  0       0  00000   0000   00000  00000  0000          *  \n");
    printf ("                    * *       0       0     0     0   0   0  0    0  0   0    0   0    0        * * \n");
	printf ("                     *        0       0      0   0    0000   000000  0000     0   000000         *  \n");
	printf ("                    * *       0       0       0 0     0   0  0    0  0   0    0   0    0        * * \n");   
    printf ("                     *        00000 00000      0      0   0  0    0  0   0  00000 0    0         *  \n");
    printf ("                    * *                                                                         * * \n");
    printf ("                     *                     0000000       000000    000000000                     *  \n");
    printf ("                    * *                    00    000    00    00   00                           * * \n");
    printf ("                     *                     00      00    00  00    00                            *  \n");
    printf ("                    * *                    00      00     000      0000000                      * * \n");
    printf ("                     *                     00      00    00 00 0   00                            *  \n");
    printf ("                    * *                    00    000    00  000    00                           * * \n");
    printf ("                     *                     00000000     0000  00   000000000                     *  \n");
    printf ("                    * *                                                                         * * \n");
    printf ("                     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
    printf ("                    * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n");
    printf ("                           Seja bem vinde a livraria D&E, você deseja adquirir um livro?\n ");
    printf ("                                            (Digite: S = sim, N = não) \n");
    scanf  ("%s", &d);
    
    //Escolha do livro para a compra
    if (strcmp (d, "S") == 0 || strcmp (d, "s") == 0) {
	    while  ((strcmp (d, "S")==0) || (strcmp (d, "s")==0)) {
		    system ("cls");
		    printf ("Qual livro gostaria de adquirir? (Utilize o cï¿½digo correspondente) \n\n");
		    printf ("1 - Romeu e Julieta, de Willian Shakespeare \n");
		    printf ("2 - Dom Quixote, de Miguel de Cervantes \n");
		    printf ("3 - Guerra e Paz, de Liev Tolstï¿½i \n");
		    printf ("4 - A Divina Comédia, de Dante Alighieri \n");
		    printf ("5 - Odisseia, de Homero \n");
		    printf ("6 - Ulysses, de James Joyce \n");
		    printf ("7 - Orgulho e Preconceito, Jane Austen \n");
		    printf ("8 - Rio Vermelho, de AMY LLOYD \n");
		    printf ("9 - O Misterioso Caso de Styles, Agatha Christie \n");
		    printf ("10 - A Saga da Maldição do Tigre, Colleen Houck \n");
		    scanf  ("%d", &cod);
		    
			//Sistema de decisão para o número de cópias de cada livro a serem adquiridas
			if (cod == 1)
				{system ("cls");
				printf ("                               ---------------------------------------------------------- \n");
				printf ("                                  Romeu e Julieta, de Willian Shakespeare custa 24,00.    \n");
		        printf ("                               ---------------------------------------------------------- \n\n");
				printf ("Quantas cópias gostaria de comprar? \n");
		        scanf  ("%d", &copias_1);
		        valor_1 = copias_1 * 24,00;
		        valor = valor + valor_1;
		        v_1 = v_1 + valor_1;
		        c_1 = c_1 + copias_1;
			}
		    else if (cod == 2)
		            {system ("cls");
		            printf ("                                ------------------------------------------------------ \n");
					printf ("                                   Dom Quixote, de Miguel de Cervantes custa 52,00.    \n");
					printf ("                                ------------------------------------------------------ \n\n");
		            printf ("Quantas cópias gostaria de comprar? \n");
		            scanf  ("%d", &copias_2);
		      		valor_2 = copias_2 * 52,00;
		            valor = valor + valor_2;
		            v_2 = v_2 + valor_2;
		            c_2 = c_2 + copias_2;
				}
		        else if (cod == 3)
						{system ("cls");
						printf ("                                   ------------------------------------------------- \n");
						printf ("                                      Guerra e Paz, de Liev Tolstói custa 162,00.    \n");
						printf ("                                   ------------------------------------------------- \n\n");
						printf ("Quantas cópias gostaria de comprar? \n");
						scanf  ("%d", &copias_3);
						valor_3 = copias_3 * 162,00;
						valor = valor + valor_3;
						v_3 = v_3 + valor_3;
						c_3 = c_3 + copias_3;
					}
					else if (cod == 4)
							{system ("cls");
							printf ("                                ------------------------------------------------------- \n");
							printf ("                                   A Divina Comedia, de Dante Alighieri custa 49,00.    \n");
							printf ("                                ------------------------------------------------------- \n\n");
							printf ("Quantas cópias gostaria de comprar? \n");
							scanf  ("%d", &copias_4);
							valor_4 = copias_4 * 49,00;
							valor = valor + valor_4;
							v_4 = v_4 + valor_4;
							c_4 = c_4 + copias_4;
						}
						else if (cod == 5)
								{system ("cls");
								printf ("                                        -------------------------------------- \n");
								printf ("                                           Odisseia, de Homero custa 43,00.    \n");
								printf ("                                        -------------------------------------- \n\n");
								printf ("Quantas cópias gostaria de comprar? \n");
								scanf  ("%d", &copias_5);
								valor_5 = copias_5 * 43,00;
								valor = valor + valor_5;
								v_5 = v_5 + valor_5;
								c_5 = c_5 + copias_5;
							}
							else if (cod == 6)
									{system ("cls");
									printf ("                                      ------------------------------------------ \n");
									printf ("                                         Ulysses, de James Joyce custa 42,00.    \n");
									printf ("                                      ------------------------------------------ \n\n");
									printf ("Quantas cópias gostaria de comprar? \n");
									scanf  ("%d", &copias_6);
									valor_6 = copias_6 * 42,00;
									valor = valor + valor_6;
									v_6 = v_6 + valor_6;
									c_6 = c_6 + copias_6;
								}
								else if (cod == 7)
										{system ("cls");
										printf ("                                 ----------------------------------------------------- \n");
										printf ("                                    Orgulho e Preconceito, Jane Austen custa 44,00.    \n");
										printf ("                                 ----------------------------------------------------- \n\n");
										printf ("Quantas cópias gostaria de comprar? \n");
										scanf  ("%d", &copias_7);
										valor_7 = copias_7 * 44,00;
										valor = valor + valor_7;
										v_7 = v_7 + valor_7;
										c_7 = c_7 + copias_7;
									}
									else if (cod == 8)
											{system ("cls");
											printf ("                                     --------------------------------------------- \n");
											printf ("                                        Rio Vermelho, de AMY LLOYD custa 26,00.    \n");
											printf ("                                     --------------------------------------------- \n\n");
											printf ("Quantas cópias gostaria de comprar? \n");
											scanf  ("%d", &copias_8);
											valor_8 = copias_8 * 26,00;
											valor = valor + valor_8;
											v_8 = v_8 + valor_8;
											c_8 = c_8 + copias_8;
										}
										else if (cod == 9)
												{system ("cls");
												printf ("                            --------------------------------------------------------------- \n");
												printf ("                               O Misterioso Caso de Styles, Agatha Christie custa 24,00.    \n");
												printf ("                            --------------------------------------------------------------- \n\n");
												printf ("Quantas cópias gostaria de comprar? \n");
												scanf  ("%d", &copias_9);
		      			 	  	   			    valor_9 = copias_9 * 24,00;
												valor = valor + valor_9;
												v_9 = v_9 + valor_9;
												c_9 = c_9 + copias_9;
											}
											else if (cod == 10)
													{system ("cls");
													printf ("                            -------------------------------------------------------------- \n");
													printf ("                               A Saga da Maldição do Tigre, Colleen Houck custa 225,00.    \n");
													printf ("                            -------------------------------------------------------------- \n\n");
													printf ("Quantas cópias gostaria de comprar? \n");
													scanf  ("%d", &copias_10);
													valor_10 = copias_10 * 225,00;
													valor = valor + valor_10;
													v_10 = v_10 + valor_10;
													c_10 = c_10 + copias_10;
												}
		    printf ("\n");
		    printf ("Deseja adquirir mais um livro? ");
		    printf ("Digite: S = sim, N = não \n");
		    scanf  ("%s", &d);
		}
		system ("cls");
		printf ("Total gasto pela compra dos livros: %.2f reais. \n\n", valor);
		printf ("Qual o valor recebido pelo pagamento? \n");
		scanf  ("%f", &pag);
		troco = pag - valor;
		
		//Caso o valor adicionado para o pagamento seja menor que o devido
		while (troco < 0)
			{system ("cls");
			printf ("Total gasto pela compra dos livros: %.2f reais. \n\n", valor);
			printf ("O pagamento adicionado é menor que o custo da compra, favor inserir o valor do pagamento novamente. \n");
			scanf  ("%f", &pag);
			troco = pag - valor;
		}
		
		//Dados finais da compra - Nota fiscal
		system ("cls");
		printf ("                           _____________________________________________________________ \n");
		printf ("                          |                                                             |\n");
		printf ("                          |                        Nota da compra:                      |\n");
		printf ("                          |_____________________________________________________________|\n");
		printf ("                                                     |                |                \n");
		printf ("                                   Produto           |   Quantidade   |     Preço      \n");
		printf ("                                                     |                |                \n\n");
		if (v_1 > 0) printf ("                               Romeu e Julieta               %d             %.2f       \n", c_1, v_1); 
		if (v_2 > 0) printf ("                                 Dom Quixote                 %d             %.2f       \n", c_2, v_2);
		if (v_3 > 0) printf ("                                Guerra e Paz                 %d             %.2f       \n", c_3, v_3);
		if (v_4 > 0) printf ("                              A Divina Comédia               %d             %.2f       \n", c_4, v_4);
		if (v_5 > 0) printf ("                                  Odisseia                   %d             %.2f       \n", c_5, v_5);
		if (v_6 > 0) printf ("                                  Ulysses                    %d             %.2f       \n", c_6, v_6);
		if (v_7 > 0) printf ("                           Orgulho e Preconceito             %d             %.2f       \n", c_7, v_7);
		if (v_8 > 0) printf ("                                Rio Vermelho                 %d             %.2f       \n", c_8, v_8);
		if (v_9 > 0) printf ("                        O Misterioso Caso de Styles          %d             %.2f       \n", c_9, v_9);
	    if (v_10 > 0) printf ("                        A Saga da Maldição do Tigre         %d             %.2f       \n\n", c_10, v_10);	
		printf ("                              ____________________________________________________\n");
		printf ("                                                                                  \n");
		printf ("                                 Total gasto pela compra dos livros: %.2f reais.  \n", valor);
		printf ("                                    Total recebido pelo pagamento: %.2f reais.       \n", pag);
		if (troco < 1.00 || troco >= 2.00){
			printf ("                                        Seu troco é de: %.2f reais.                   \n", troco);
		}
		else {
			printf ("                                         Seu troco é de: %.2f real.                   \n", troco);
		}
		printf ("                              ____________________________________________________\n\n\n\n");
	    printf ("                                            Compra finalizada com sucesso! \a\n");
	    printf ("                                      Obrigado pela preferência, volte sempre! \n");
	}
	
	else if (strcmp (d, "N") == 0 || strcmp (d, "n") == 0) {
		system ("cls");
		printf ("Você optou por não comprar nada. \n");
		printf ("Volte sempre que quiser um novo livro!");
	}
	
	else printf ("\nCódigo não encontrado");
	
	getch();
	return (0);
}
