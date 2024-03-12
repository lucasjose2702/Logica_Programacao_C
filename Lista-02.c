#include <stdio.h>
#include <string.h>

int main(void) {

  // 1. Crie um algoritmo que, dado um número informado pelo usuário, imprima a tabuada dele de 1 a 10. Use o formato de apresentação:

  // float num = 0;
  // float total = 0;
  
  // printf("\nDigite o número: ");
  // scanf("%f", &num);
  
  // for(int i = 1; i < 11; i++){
  //   total = num * i;
  //   printf("\n%.2f * %d = %.2f", num, i, total);
  // }

  // 2. Construa um programa que leia o conjunto de 20 números inteiros e mostre qual o maior e o menor valor fornecido.

  // int n = 0;
  // int maior = 0;
  // int menor = 0;

  // for(int i = 0; i < 20; i++){
  //   printf("\nDigite um número: ");
  //   scanf("%d", &n);
  //   if(n > maior){
  //     maior = n;
  //   }
  //   if(menor == 0){
  //     menor = n;
  //   }
  //   else{
  //     if(n < menor){
  //       menor = n;
  //     }
  //   }
  // }
  
  // printf("\nMaior: %d", maior);
  // printf("\nMenor: %d", menor);

// 3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 5 pessoas. Fazer um algoritmo que calcule e escreva:
// • A maior e a menor altura do grupo
// • A média de altura dos homens
// • O número de mulheres

  // float altura = 0;
  // char sexo;
  // float menorAltura = 0;
  // float maiorAltura = 0;
  // float soma = 0;
  // float media = 0;
  // int qtdMulheres = 0;

  // for(int i = 0; i < 5; i++){
  //   printf("\n\nDigite a altura: ");
  //   scanf("%f", &altura);
  //   printf("\nDigite o sexo: m-masculino, f-feminino ");
  //   scanf(" %c", &sexo);

  //   if(altura > maiorAltura){
  //     maiorAltura = altura;
  //   }
    
  //   if(menorAltura == 0){
  //     menorAltura = altura;
  //   }
  //   else{
  //     if(altura < menorAltura){
  //       menorAltura = altura;
  //     }
  //   }
    
  //   soma = soma + altura;
    
  //   if(sexo == 'f'){
  //     qtdMulheres++;
  //   }
  // }
  
  // media = soma / 5;
  
  // printf("\nMaior altura: %.2f", maiorAltura);
  // printf("\nMenor altura: %.2f", menorAltura);
  // printf("\nMédia altura: %.2f", media);
  // printf("\nQtd de mulheres: %d", qtdMulheres);

  // 4. Uma empresa fez uma pesquisa para saber se as pessoas gostaram ou não de um novo produto lançado no mercado. Para isso, forneceu-se o sexo do entrevistado e a sua resposta (sim ou não). Sabendo-se que foram entrevistadas 10 pessoas, fazer um algoritmo que calcule e escreva:
// - O número de pessoas que responderam sim
// - O número de pessoas que responderam não
// - A percentagem de pessoas do sexo feminino que responderam sim
// - A percentagem de pessoas do sexo masculino que responderam não

  // int nSim = 0;
  // int nNao = 0;
  // float qtdMulheres = 0;
  // float qtdHomens = 0;
  // float qtdMulheresSim = 0;
  // float qtdHomensNao = 0;
  // float porcentagemFemiS = 0;
  // float porcentagemMascN = 0;
  // char sexo;
  // char resposta;

  // for(int i = 0; i < 10; i++){
  //   printf("\n\nDigite a resposta: s-sim, n-não ");
  //   scanf(" %c", &resposta);
  //   printf("\nDigite o sexo: m-masculino, f-feminino ");
  //   scanf(" %c", &sexo);

  //   if(sexo == 'f'){
  //     qtdMulheres++;
  //     if(resposta == 's'){
  //       qtdMulheresSim++;
  //       nSim++;
  //     }
  //     else{
  //       nNao++;
  //     }
  //   }
  //   else{
  //     qtdHomens++;
  //     if(resposta == 'n'){
  //       qtdHomensNao++;
  //       nNao++;
  //     }
  //     else{
  //       nSim++;
  //     }
  //   }
  // }

  // porcentagemFemiS = qtdMulheresSim / qtdMulheres;
  // porcentagemMascN = qtdHomensNao / qtdHomens;

  // printf("\n\nRespostas sim: %d", nSim);
  // printf("\n\nRespostas não: %d", nNao);
  // printf("\n\nPorcentagem feminino sim: %.2f", porcentagemFemiS*100);
  // printf("\n\nPorcentagem masculino não: %.2f", porcentagemMascN*100);

   // 5. Cadastre um vetor de alturas de 5 pessoas e mostre a média das altura desse vetor.

 // float alturas[5];
 // float soma = 0;
 // float media = 0;
  
 // for(int i = 0; i < 5; i++){
 //   printf("\nDigite a altura:");
 //   scanf("%f", &alturas[i]);
 //   soma = soma + alturas[i];
 // }
 //  media = soma / 5;

 //  printf("\nMédia: %.2f",media);

//   6. Cadastre um vetor de salários de 4 pessoas e mostre os salários cadastrados que
// estão abaixo da média salarial desse vetor.

 // float salarios[4];
 // float soma = 0;
 // float media = 0;

 // for(int i = 0; i < 4; i++){
 //   printf("\nDigite o salário:");
 //   scanf("%f", &salarios[i]);
 //   soma = soma + salarios[i];
 // }
 // media = soma / 4;

 //  printf("\nMédia: %.2f",media);

 // for(int i = 0; i < 4; i++){
 //   if(salarios[i] > media){
 //     printf("\nSalário menor que a média: %.2f", salarios[i]);
 //   }
 // }

   // 7. Cadastre a idade e altura de 5 pessoas e mostre a idade da pessoa mais alta. Utilize vetores.

 // float alturas[5];
 // int idades[5];
 // int maiorIdade = 0;
 // float maiorAltura = 0;
  
 //  for(int i = 0; i < 5; i++){
 //    printf("\nDigite a altura:");
 //    scanf("%f", &alturas[i]);
 //    printf("\nDigite a idade:");
 //    scanf("%d", &idades[i]);
    
 //    if(alturas[i] > maiorAltura){
 //      maiorAltura = alturas[i];
 //      maiorIdade = idades[i];
 //    }
 // }

 //  printf("Idade da pessoa com maior altura: %d", maiorIdade);

 // 8. Cadastre o nome de 5 pessoas, salve em uma matriz (vetor de palavras) e depois percorra novamente essa matriz para informar o número de caracteres da pessoa com o maior nome

 // char nomes[5][30];
 // int numCaracteres = 0;
 // int maiorNumCaracteres = 0;
 
 // for(int i = 0; i < 5; i++){
 //   printf("\nDigite o nome: ");
 //   scanf("%s", nomes[i]);
 // }

 // for(int i = 0; i < 5; i++){
 //   numCaracteres = strlen(nomes[i]);
 //   if(numCaracteres > maiorNumCaracteres){
 //     maiorNumCaracteres = numCaracteres;
 //   }
 // }

 // printf("Maior número de caracteres: %d", maiorNumCaracteres);

 // 9. Pergunte o cargo de uma empresa para 5 pessoas, salve em uma matriz (vetor de palavras) e depois percorra novamente essa matriz para saber se o cargo “diretor” foi informado.

 //  char cargos[5][30];
 //  int comp = 0;
 //  int existe = 0;
  
 //  for(int i = 0; i < 5; i++){
 //    printf("\nDigite o cargo: ");
 //    scanf("%s", cargos[i]);
 //  }

 //  for(int i = 0; i < 5; i++){
 //    comp = strcmp(cargos[i], "diretor");
 //    if(comp == 0){
 //      existe = 1;
 //    }
 //  }

 //  if(existe == 1){
 //    printf("\nExiste ao menos um diretor");
 //  }
 //  else{
 //    printf("\nNenhum diretor informado");
 //  }

  // 10. Cadastre o número de habitantes e o nome de 4 estados brasileiros, salve em um vetor e uma matriz (vetor de palavras) respectivamente e informe o nome do estado informado que possui o menor número de habitantes.

 // int habitantes[4];
 // char estados[4][30];
 // int menorNumeroHabitantes = 1555555;
 // char estado[30];

 // for(int i = 0; i < 4; i++){
 //    printf("\nDigite o nome do estado: ");
 //    scanf("%s", estados[i]);
 //    printf("\nDigite o número de habitantes: ");
 //    scanf("%d", &habitantes[i]);

   
 //      if(habitantes[i] < menorNumeroHabitantes){
 //        menorNumeroHabitantes = habitantes[i];
 //        strcpy(estado, estados[i]);
 //      }
     
 //  }

 //  printf("Estado com menor número de habitantes: %s", estado);

 // 11- Cadastre o nome e o país de 5 pessoas, salve em matrizes (vetor de palavras) e depois percorra novamente essa matrizes exibindo cada entrada no seguinte formato: nome-país

 // char nomes[5][30];
 // char paises[5][30];
 // char nomeFormatado[30];

 // for(int i = 0; i < 5; i++){
 //    printf("\nDigite o nome: ");
 //    scanf("%s", nomes[i]);
 //    printf("\nDigite o pais: ");
 //    scanf("%s", paises[i]);
 // }

 // for(int i = 0; i < 5; i++){
 //   strcpy(nomeFormatado, nomes[i]);
   
 //   strcat(nomeFormatado, "-");
   
 //   strcat(nomeFormatado, paises[i]);
   
 //   printf("\nNome formatado: %s", nomeFormatado);
 // }

  // 12.- Preencha uma matriz 2x4 de salários e depois percorra novamente esta matriz informando qual o valor dos salários cadastrados que foram maiores que 1000.

  // float salarios[2][4];

  // for(int i = 0; i < 2; i++){
  //   for(int j = 0; j < 4; j++){
  //     printf("Preencha o salário: ");
  //     scanf("%f", &salarios[i][j]);
  //   }
  // }
  // printf("\n");
  // for(int i = 0; i < 2; i++){
  //   for(int j = 0; j < 4; j++){
  //     if(salarios[i][j] > 1000){
  //       printf("\nSalário maior que 1000: %.2f", salarios[i][j]);
  //     }
  //   }
  // }
 return 0;
}