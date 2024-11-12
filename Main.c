#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void DezenaZeradasExtenso(int Dezena){
  switch (Dezena){
  case 2:
    printf("vinte Reais\n");
    break;
  case 3:
    printf("trinta Reais\n");
    break;
  case 4:
    printf("quarenta Reais\n");
    break;
  case 5:
    printf("cinquenta Reais\n");
    break;
  case 6:
    printf("sessenta Reais\n");
    break;
  case 7:
    printf("setenta Reais\n");
    break;
  case 8:
    printf("oitenta Reais\n");
    break;
  case 9:
    printf("noventa Reais\n");
    break;
  } 
}
void CentenasZeradasExtenso(int Centena){
  switch (Centena){
  case 1:
    printf("Cem Reais\n");
    break;
  case 2:
    printf("Duzentos Reais\n");
    break;
  case 3:
    printf("Trezentos Reais\n");
    break;
  case 4:
    printf("Quatrocentos Reais\n");
    break;
  case 5:
    printf("Quinhentos Reais\n");
    break;
  case 6:
    printf("Seiscentos Reais\n");
    break;
  case 7:
    printf("Setecentos Reais\n");
    break;
  case 8:
    printf("Oitocentos Reais\n");
    break;
  case 9:
    printf("Novecentos Reais\n");
    break;
  } 
}

void UnidadeExtenso(int Unidade){
  switch (Unidade){
  case 1:
    printf("um Reais\n");
    break;
  case 2:
    printf("dois Reais\n");
    break;
  case 3:
    printf("tres Reais\n");
    break;
  case 4:
    printf("quatro Reais\n");
    break;
  case 5:
    printf("cinco Reais\n");
    break;
  case 6:
    printf("seis Reais\n");
    break;
  case 7:
    printf("sete Reais\n");
    break;
  case 8:
    printf("oito Reais\n");
    break;
  case 9:
    printf("nove Reais\n");
    break;
  } 
  printf("\n");
}

void DezAVinteExtenso(int Unidade){
  switch (Unidade){
  case 0:
    printf("dez Reais\n");
    break;
  case 1:
    printf("onze Reais\n");
    break;
  case 2:
    printf("doze Reais\n");
    break;
  case 3:
    printf("treze Reais\n");
    break;
  case 4:
    printf("quatorze Reais\n");
    break;
  case 5:
    printf("quinze Reais\n");
    break;
  case 6:
    printf("dezesseis Reais\n");
    break;
  case 7:
    printf("dezessete Reais\n");
    break;
  case 8:
    printf("dezoito Reais\n");
    break;
  case 9:
    printf("dezenove Reais\n");
    break;
  }
}

void DezenaExtenso(int Dezena){
  switch (Dezena){
  case 2:
    printf("vinte e ");
    break;
  case 3:
    printf("trinta e ");
    break;
  case 4:
    printf("quarenta e ");
    break;
  case 5:
    printf("cinquenta e ");
    break;
  case 6:
    printf("sessenta e ");
    break;
  case 7:
    printf("setenta e ");
    break;
  case 8:
    printf("oitenta e ");
    break;
  case 9:
    printf("noventa e ");
    break;
  } 
}

void CentenaExtenso(int Centena){
  switch (Centena){
  case 1:
    printf("Cento e ");
    break;
  case 2:
    printf("Duzentos e ");
    break;
  case 3:
    printf("Trezentos e ");
    break;
  case 4:
    printf("Quatrocentos e ");
    break;
  case 5:
    printf("Quinhentos e ");
    break;
  case 6:
    printf("Seiscentos e ");
    break;
  case 7:
    printf("Setecentos e ");
    break;
  case 8:
    printf("Oitocentos e ");
    break;
  case 9:
    printf("Novecentos e ");
    break;
  } 
}

void conversor(int num_algarismo){
  int CentenaDeMilhar,DezenaDeMilhar,Milhar,Centena,Dezena,Unidade;
  CentenaDeMilhar = fmod((num_algarismo / 100000), 10);
  DezenaDeMilhar = fmod((num_algarismo / 10000), 10);
  Milhar = fmod((num_algarismo / 1000), 10);
  Centena = fmod((num_algarismo / 100), 10);
  Dezena = fmod((num_algarismo / 10), 10);
  Unidade = fmod(num_algarismo, 10);
  
  if (Dezena == 0 && Unidade == 0) {
    CentenasZeradasExtenso(Centena);
  } else {
    CentenaExtenso(Centena);
  }

  if (Unidade == 0)
  {
    DezenaZeradasExtenso(Dezena);
  } else {
    DezenaExtenso(Dezena);
  }
  
  if (Dezena == 1) {
    DezAVinteExtenso(Unidade);
  } else {
  UnidadeExtenso(Unidade);
  }

}

void extenso(){
  float num_algarismo;
  printf("Digite o numero a ser escrito por extenso: ");
  scanf("%f", &num_algarismo);
  printf("Convertendo\n");
  printf("O valor %.2f por extenso fica: ", num_algarismo);
  conversor(num_algarismo);
}

void exibirMenu(){
  int opcaoMenu;
  printf("1. Escrever um numero por extenso\n");
  printf("2. Imprimir todos os numeros do arquivo em tela\n");
  printf("3. Sair\n");
  scanf("%d", &opcaoMenu);
  switch (opcaoMenu){
  case 1:
    extenso();
    break;
  case 2:
    printf("Caso 2\n");
    break;
  case 3:
    printf("Caso 3\n");
    break;
  default:
    printf("Opcao invalida, por favor tente novamente\n");
    printf("\n");
    exibirMenu();
    break;
  }
}

int main(){
  exibirMenu();
}