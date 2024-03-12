#include <stdio.h>

int main(void) {
  //   1. Escreva um programa que leia duas variáveis inteiras e troque o
  //   conteúdo entre elas.

  // int a = 0;
  // int b = 0;
  // int c = 0;

  // printf("\nDigite o primeiro inteiro: ");
  // scanf("%d", &a);
  // printf("\nDigite o segundo inteiro: ");
  // scanf("%d", &b);
  // c=b;
  // b=a;
  // a=c;

  // printf("\nValor da primeira variável: %d", a);
  // printf("\nValor da segunda variável: %d", b);

  // 2. Ler um número inteiro e imprimir seu sucessor e seu antecessor.

  // int n = 0;
  // int antecessor = 0;
  // int sucessor = 0;

  // printf("\nDigite o número: ");
  // scanf("%d", &n);

  // antecessor = n-1;
  // sucessor = n+1;
  // printf("\nAntecessor: %d", antecessor);
  // printf("\nSucessor: %d", sucessor);

  // 3. Faça um programa que leia um valor de conta de restaurante,
  // representando o gasto realizado pelo cliente e imprimir o valor total a ser
  // pago, considerando que o restaurante cobra 10% de taxa de serviço do
  // garçom.

  // float valor = 0;
  // float total = 0;

//   printf("\nDigite o valor da conta: ");
//   scanf("%f", &valor);
//   total = valor * 1.1;

//   printf("\nValor da conta: %.2f", total);

  // 4. Entrar com o raio de um círculo, calcular e imprimir seu perímetro e sua
  // área. OBS: P = 2 * pi * raio e A = pi * raio * raio. Use pi = 3.14.

  // float raio = 0;
  // float perimetro = 0;
  // float area = 0;

  // printf("\nDigite o valor do raio: ");
  // scanf("%f", &raio);
  // perimetro = 2 * 3.14 * raio;
  // area = 3.14 * raio * raio;

  // printf("\nValor do perímetro: %.2f", perimetro);
  // printf("\nValor da área: %.2f", area);

  // 5. Ler uma temperatura em graus Centígrados e apresentá-la convertida em
  // graus Fahrenheit. A fórmula de conversão é: F = (9*C+160)/5. Onde F é a
  // temperatura em Fahrenheit e C é a temperatura em Centígrados.

  // float grausC = 0;
  // float grausF = 0;

  // printf("\nDigite o valor em graus centígrados: ");
  // scanf("%f", &grausC);
  // grausF = (9 * grausC + 160)/5;

  // printf("\nValor em graus Fahrenheit: %.2f", grausF);

  // 6. Deseja-se calcular a conta de consumo de energia elétrica de um
  // consumidor. Para isto, escreva um programa que leia o código do consumidor,
  // o preço do KW e a quantidade de KW consumido, e exiba o código do
  // consumidor e o total a pagar.
  // - total a pagar = preço x quantidade
  // - total a pagar mínimo = R$ 21,23

  // int codigoConsumidor = 0;
  // float precoKW = 0;
  // int qtdKW = 0;
  // float total = 0;

  // printf("\nDigite o código do consumidor: ");
  // scanf("%d", &codigoConsumidor);
  //  printf("\nDigite o preco do KW: ");
  // scanf("%f", &precoKW);
  //  printf("\nDigite a quantidade de KW: ");
  // scanf("%d", &qtdKW);
  // total = qtdKW * precoKW;

  // printf("\nCódigo do consumidor: %d", codigoConsumidor);
  // if(total > 21.23){
  //    printf("\nValor a pagar: %.2f", total);
  // }
  // else{
  //    printf("\nValor a pagar: R$ 21,23");
  // }

  // 7. Receber dois números reais e imprimir na tela o maior entre eles. Se
  // ambos forem iguais, deve ser exibida uma mensagem na tela.

  // float n1 = 0;
  // float n2 = 0;

  // printf("\nDigite n1: ");
  // scanf("%f", &n1);
  // printf("\nDigite n2: ");
  // scanf("%f", &n2);

  // if(n1 > n2){
  //    printf("\nMaior: %.2f", n1);
  // }
  // else if(n2 > n1){
  //    printf("\nMaior: %.2f", n2);
  // }
  // else{
  //   printf("\nAmbos são iguais");
  // }

  // 8. Entrar com nota da AV1 e nota da AV2 de um aluno. Imprimir: nota de cada
  // AV, média e uma das mensagens: AP se média >= 6, RP se média < 5 ou AV3 se
  // media >=5 e media <6 (a média é 6.0 para aprovação).

  // float av1 = 0;
  // float av2 = 0;
  // float media = 0;

  // printf("\nDigite a nota da av1: ");
  // scanf("%f", &av1);
  // printf("\nDigite a nota da av2: ");
  // scanf("%f", &av2);
  // media = (av1 + av2)/2;

  // printf("\nAv1: %.2f", av1);
  // printf("\nAv2: %.2f", av2);
  // printf("\nMédia: %.2f", media);
  // if(media >=6){
  //   printf("\nAp");
  // }
  // else if(media >= 5){
  //   printf("\nAv3");
  // }
  // else{
  //   printf("\nRp");
  // }

  // 9. Ler três números a partir do teclado e apresentá-los em ordem
  // decrescente.

  // float n1 = 0;
  // float n2 = 0;
  // float n3 = 0;
  // float maior = 0;
  // float meio = 0;
  // float menor = 0;

  // printf("\nDigite n1: ");
  // scanf("%f", &n1);
  // printf("\nDigite n2: ");
  // scanf("%f", &n2);
  // printf("\nDigite n3: ");
  // scanf("%f", &n3);

  // if(n1 > n2 && n1 > n3){
  //   maior = n1;
  //   if (n2 > n3){
  //     meio = n2;
  //     menor = n3;
  //   }
  //   else{
  //     meio = n3;
  //     menor = n2;
  //   }
  // }
  // else if(n2 > n1 && n2 > n3){
  //   maior = n2;
  //   if (n1 > n3){
  //     meio = n1;
  //     menor = n3;
  //   }
  //   else{
  //     meio = n3;
  //     menor = n1;
  //   }
  // }
  // else{
  //    maior = n3;
  //   if (n1 > n2){
  //     meio = n1;
  //     menor = n2;
  //   }
  //   else{
  //     meio = n2;
  //     menor = n1;
  //   }
  // }

  // printf("\nMaior: %.2f", maior);
  // printf("\nMeio: %.2f", meio);
  // printf("\nMenor: %.2f", menor);

  // 10. Faça um programa que simule um calculador de 4 operações. Seu programa
  // deverá ler dois números e o operador e efetuar os cálculos, exibindo o
  // resultado final. O programa deve ser capaz de verificar operações inválidas
  // (no caso, divisão por zero), exibindo uma mensagem de alerta. DICA: o
  // operador deve ser declarado como int. FAÇA USANDO SWITCH.

  // float n1 = 0;
  // float n2 = 0;
  // float total = 0;
  // int operacao = 0;

  // printf("\nDigite a n1: ");
  // scanf("%f", &n1);
  // printf("\nDigite a n2: ");
  // scanf("%f", &n2);
  // printf("\nDigite a operação: 1-soma, 2-subtração, 3-multiplicação,
  // 4-divisão\n"); scanf("%d", &operacao);

  // switch(operacao){
  //   case 1:
  //     total = n1 + n2;
  //     break;
  //   case 2:
  //     total = n1 - n2;
  //     break;
  //   case 3:
  //     total = n1 * n2;
  //     break;
  //   case 4:
  //     total = n1 / n2;
  //     break;
  // }

  // printf("\nTotal: %.2f", total);

  // 11. Desenvolver um algoritmo para calcular a conta de água. O custo da água
  // varia dependendo se o consumidor é residencial, comercial ou industrial. A
  // regra para calcular a conta é: • Residencial: R$5,00 de taxa mais R$0,05
  // por m³ gastos no total; • Comercial: R$500,00 para os primeiros 80 m³
  // gastos mais R$0,25 por m3 gastos além dos 80 m³; • Industrial: R$800,00
  // para os primeiros 100 m³ gastos mais R$0,04 por m3 gastos além dos 100 m³;
  // O programa deverá ler a conta do cliente, o tipo de consumidor (
  // residencial,comercial e industrial ) e o consumo de água por metros
  // cúbicos. Como resultado, imprima a conta do cliente e o valor real a ser
  // pago pelo mesmo.

  // int conta = 0;
  // int tipoConsumidor = 0;
  // float consumo = 0;
  // float total = 0;

  //  printf("\nDigite o número da conta: ");
  //  scanf("%d", &conta);
  //  printf("\nDigite o consumo: ");
  //  scanf("%f", &consumo);
  //  printf("\nDigite o tipo: 1-residencial , 2-comercial, 3-industrial\n");
  //  scanf("%d", &tipoConsumidor);

  //  switch(tipoConsumidor){
  //    case 1:
  //       total = 5 + (0.05 * consumo);
  //       break;
  //    case 2:
  //       if(consumo <=80){
  //         total = 500;
  //       }
  //       else{
  //         total = 500 + (0.25 * (consumo - 80));
  //       }
  //       break;
  //    case 3:
  //       if(consumo <=100){
  //         total = 800;
  //       }
  //       else{
  //         total = 800 + (0.04 * (consumo - 100));
  //       }
  //       break;
  //  }
  //  printf("\Conta: %d", conta);
  //  printf("\nTotal: %.2f", total);

  // 12. Uma locadora de filmes tem a seguinte regra para aluguel de fitas:
  // • Às segundas, terças e quintas (2, 3 e 5): um desconto de 40% em cima do
  // preço normal; • Às quartas, sextas, sábados e domingos (4, 6, 7 e 1): preço
  // normal; • Aluguel de fitas comuns: preço normal • Aluguel de lançamentos:
  // acréscimo de 15% em cima do preço normal. Desenvolver um algoritmo para ler
  // o preço normal da fita (em R$), o dia da semana e a categoria do filme
  // alugado (comum ou lançamento). Calcular e imprimir o preço final que será
  // pago pela fita. FAÇA USANDO SWITCH.

  // int dia = 0;
  // int categoria = 0;
  // float preco = 0;
  // float total = 0;

  // printf("\nDigite o dia: 1-dom, 2-seg... ");
  // scanf("%d", &dia);
  // printf("\nDigite a categoria: 1-comum 2-lançamento ");
  // scanf("%d", &categoria);
  // printf("\nDigite o preco: ");
  // scanf("%f", &preco);

  // switch(categoria){
  //   case 1:
  //      if(dia == 2 || dia == 3 || dia == 5){
  //        total = preco * 0.6;
  //      }
  //     else{
  //       total = preco;
  //     }
  //     break;
  //   case 2:
  //     if(dia == 2 || dia == 3 || dia == 5){
  //        total = (preco * 1.15) * 0.6;
  //     }
  //     else{
  //        total = preco * 1.15;
  //     }
  //     break;
  // }
  // printf("\nTotal: %.2f", total);

  // 13. Escrever um algoritmo que lê um conjunto de 4 valores “i”, “a”, “b” e
  // “c”, onde “i” é um valor inteiro e positivo e “a” e “b” são quaisquer
  // valores reais e os escreva a seguir: • Se i = 1 escrever os três valores a,
  // b, c em ordem crescente; • Se i = 2 escrever os três valores a, b, c em
  // ordem decrescente. • Se i = 3 escrever os três valores a, b, c de forma que
  // o maior número entre a,b,c fique entre os dois. FAÇA USANDO SWITCH e IF

  // int x = 0;
  // float n1 = 0;
  // float n2 = 0;
  // float n3 = 0;
  // float maior = 0;
  // float meio = 0;
  // float menor = 0;

  // printf("\nDigite n1: ");
  // scanf("%f", &n1);
  // printf("\nDigite n2: ");
  // scanf("%f", &n2);
  // printf("\nDigite n3: ");
  // scanf("%f", &n3);
  // printf("\nDigite o valor de x: ");
  // scanf("%d", &x);

  // if(n1 > n2 && n1 > n3){
  //   maior = n1;
  //   if (n2 > n3){
  //     meio = n2;
  //     menor = n3;
  //   }
  //   else{
  //     meio = n3;
  //     menor = n2;
  //   }
  // }
  // else if(n2 > n1 && n2 > n3){
  //   maior = n2;
  //   if (n1 > n3){
  //     meio = n1;
  //     menor = n3;
  //   }
  //   else{
  //     meio = n3;
  //     menor = n1;
  //   }
  // }
  // else{
  //    maior = n3;
  //   if (n1 > n2){
  //     meio = n1;
  //     menor = n2;
  //   }
  //   else{
  //     meio = n2;
  //     menor = n1;
  //   }
  // }

  // switch(x){
  //   case 1:
  //     printf("\n%.2f", menor);
  //     printf(" %.2f", meio);
  //     printf(" %.2f", maior);

  //     break;
  //   case 2:
  //     printf("\n%.2f", maior);
  //     printf(" %.2f", meio);
  //     printf(" %.2f", menor);
  //     break;
  //   case 3:
  //     printf("\n%.2f", menor);
  //     printf(" %.2f", maior);
  //     printf(" %.2f", meio);
  //     break;
  //   default:
  //     printf("\nX inválido");
  //     break;
  // }

  // 14. Desenvolver um algoritmo para calcular e imprimir o preço final de um
  // carro. O valor do preço inicial de fábrica é fornecido por meio de entrada.
  // O carro pode ter as seguintes opções: • (a) Ar condicionado: R$ 1750,00 •
  // (b) Pintura Metálica: R$ 800,00 • (c) Vidro Elétrico: R$ 1200,00 • (d)
  // Direção Hidráulica: R$ 2000,00

  // float preco = 0;
  // float total = 0;
  // char opcao;

  // printf("\nDigite a opcao: a-Ar condicionado, b-Pintura, c-Vidro, d-Direção
  // "); scanf("%c", &opcao); printf("\nDigite o preco: "); scanf("%f", &preco);

  // switch(opcao){
  //   case 'a':
  //     total = preco + 1750;
  //     break;
  //   case 'b':
  //     total = preco + 800;
  //     break;
  //   case 'c':
  //     total = preco + 1200;
  //     break;
  //   case 'd':
  //     total = preco + 2000;
  //     break;
  // }

  // printf("Total: %.2f", total);

  //   15.	Faça um algoritmo que leia tantos números quanto o usuário desejar
  //   e imprima a soma deles. Pare quando a entrada for 0.

  // int num= 0;
  // int soma = 0;

  // do{
  //   printf("\nDigite o número: ");
  //   scanf("%d", &num);
  //   soma = soma + num;
  // }while(num != 0);

  // printf("\nSoma total: %d", soma);

  // 16. Faça um programa que leia número reais maiores que zero. Quando for
  // entrado o número zero, o programa deverá apresentar quantos números foram
  // entrados e a média destes.

  //  float soma=0, total=0;
  //  float numero;

  //  printf("\nEntre com um numero: ");
  //  scanf("%f", &numero);
  //  while(numero>0) {
  //    soma=soma+numero;
  //    total++;

  //    printf("\nEntre com um numero: ");
  //    scanf("%f", &numero);
  //  }

  //  if(total==0){
  //   printf("\nNao foi entrado nenhum numero");
  //  }
  //  else
  //  {
  //    if(total==1){
  //       printf("\nFoi entrado %.0f numero", total);
  //    }
  //    else{
  //       printf("\nForam entrados %.0f numeros", total);
  //    }
  //  }
  // if(total!=0){
  //    printf("\nA media dos numeros entrados e: %f", soma/total);
  // }

  // 17.	Faça um algoritmo que permita ao usuário informar a idade de quantas
  // pessoas ele desejar. A entrada de idade 0 encerra a execução e mostra os
  // resultados que são: a soma das pessoas maiores de idade e a média de idade
  // das pessoas maiores de idade informadas.

  // float idade = 0;
  // float somaMaiores = 0;
  // float mediaMaiores = 0;
  // float qtdMaiores = 0;

  // do{
  //   printf("\nDigite uma idade: ");
  //   scanf("%f", &idade);
  //   if(idade >=  18){
  //     somaMaiores = somaMaiores + idade;
  //     qtdMaiores++;
  //   }
  // }while (idade != 0);

  // mediaMaiores = somaMaiores / qtdMaiores;

  // printf("\n\nSoma: %.2f", somaMaiores);
  // printf("\n\nMédia: %.2f", mediaMaiores);

  // 18.	Deseja-se fazer uma pesquisa a respeito do consumo mensal de
  // energia elétrica em uma determinada cidade. Para isso, são fornecidos os
  // seguintes dados:
  // - preço do kWh consumido;
  // - número do consumidor;
  // - quantidade de kWh consumidos durante o mês;

  // O número do consumidor igual a zero deve ser usado para interromper a
  // entrada de dados. Faça um programa que leia os dados descritos acima,
  // calcule e imprima:

  // (a) para cada consumidor o total a pagar,
  // (b) o maior consumo verificado,
  // (c) o menor consumo verificado,
  // (d) a média geral de consumo.

  // int nConsumidor= 0;
  // float qtdConsumidores = 0;
  // float precoKW = 0;
  // float qtdGasta = 0;
  // float total = 0;
  // float maior = 0;
  // float menor = 0;
  // float media = 0;
  // float soma = 0;

  // printf("\nPreço do KW: ");
  // scanf("%f", &precoKW);
  // printf("\n");

  // do{
  //   printf("\n\nDigite o número do consumidor: ");
  //   scanf("%d", &nConsumidor);
  //   if(nConsumidor != 0){
  //     qtdConsumidores++;
  //     printf("\nQuantidade consumida: ");
  //     scanf("%f", &qtdGasta);

  //     total = qtdGasta * precoKW;

  //     printf("\nNúmero do consumidor: %d", nConsumidor);
  //     printf("\nPreço a pagar: %.2f", total);

  //     if(qtdGasta > maior){
  //       maior = qtdGasta;
  //     }

  //     if(menor == 0){
  //       menor = qtdGasta;
  //     }
  //     else{
  //       if(qtdGasta < menor){
  //           menor = qtdGasta;
  //       }
  //     }
  //     soma = soma + qtdGasta;
  //   }
  // }while (nConsumidor != 0);

  // media = soma / qtdConsumidores;

  // printf("\n\nMaior consumo: %.2f", maior);
  // printf("\n\nMenor consumo: %.2f", menor);
  // printf("\n\nMédia consumo: %.2f", media);

  // 19.	Faça um programa que mostre a tabuada de um número N (N será lido
  // do teclado).

  // int tabuada, variavel_contadora = 1, num;
  // printf("Entre com um número: \n");
  // scanf("%d", &num);
  // while (variavel_contadora <= 10) {
  //   tabuada = num * variavel_contadora;
  //   printf("%d x %d = %d\n", num, variavel_contadora, tabuada);
  //   variavel_contadora++;
  // }

  // 20.	Faça um programa que implemente um menu onde o usuário deverá
  // selecionar 0 ou 1. Ao entrar na opção 0, escreva na tela “Opção 0
  // escolhida”, exiba novamente o menu principal e permita que o usuário
  // navegue novamente. O mesmo deve ser feito para a opção 1, alterando somente
  // o texto para “Opção 1 escolhida”. Caso o usuario digite outro valor para a
  // opção, saia do menu e escreva "Fim da execução".

  // int op;

  // do
  // {
  //   printf("Entre com a opção (0 ou 1)\n");
  //   scanf("%d", &op);
  //   if(op == 0){
  //     printf("Opção 0 escolhida\n\n");
  //   }
  //   else if(op == 1){
  //     printf("Opção 1 escolhida\n\n");
  //   }
  // }while(op == 1 || op ==0);

  // printf("\nFim da execução");

  return 0;
}