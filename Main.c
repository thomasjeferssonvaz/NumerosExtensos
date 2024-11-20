#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h> 

//Variavel global do arquivo
FILE* arquivo;

void CentenasZeradasExtenso(int Centena)
{
  switch (Centena)
  {
  case 1:
    printf(" e cem");
    fprintf(arquivo,"cem");
    break;
  case 2:
    printf(" e duzentos");
    fprintf(arquivo,"duzentos");
    break;
  case 3:
    printf(" e trezentos");
    fprintf(arquivo,"trezentos");
    break;
  case 4:
    printf(" e quatrocentos");
    fprintf(arquivo,"quatrocentos");
    break;
  case 5:
    printf(" e quinhentos");
    fprintf(arquivo,"quinhentos");
    break;
  case 6:
    printf(" e seiscentos");
    fprintf(arquivo,"seiscentos");
    break;
  case 7:
    printf(" e setecentos");
    fprintf(arquivo,"setecentos");
    break;
  case 8:
    printf(" e oitocentos");
    fprintf(arquivo,"oitocentos");
    break;
  case 9:
    printf(" e novecentos");
    fprintf(arquivo,"novecentos");
    break;
  }
}

void UnidadeExtenso(int Unidade)
{
  switch (Unidade)
  {
  case 1:
    printf("um");
    fprintf(arquivo,"um");
    break;
  case 2:
    printf("dois");
    fprintf(arquivo,"dois");
    break;
  case 3:
    printf("tres");
    fprintf(arquivo,"tres");
    break;
  case 4:
    printf("quatro");
    fprintf(arquivo,"quatro");
    break;
  case 5:
    printf("cinco");
    fprintf(arquivo,"cinco");
    break;
  case 6:
    printf("seis");
    fprintf(arquivo,"seis");
    break;
  case 7:
    printf("sete");
    fprintf(arquivo,"sete");
    break;
  case 8:
    printf("oito");
    fprintf(arquivo,"oito");
    break;
  case 9:
    printf("nove");
    fprintf(arquivo,"nove");
    break;
  }
}

void DezAVinteExtenso(int Unidade)
{
  switch (Unidade)
  {
  case 0:
    printf("dez");
    break;
  case 1:
    printf("onze");
    break;
  case 2:
    printf("doze");
    break;
  case 3:
    printf("treze");
    break;
  case 4:
    printf("quatorze");
    break;
  case 5:
    printf("quinze");
    break;
  case 6:
    printf("dezesseis");
    break;
  case 7:
    printf("dezessete");
    break;
  case 8:
    printf("dezoito");
    break;
  case 9:
    printf("dezenove");
    break;
  }
}

void DezenaExtenso(int Dezena)
{
  switch (Dezena)
  {
  case 2:
    printf("vinte ");
    fprintf(arquivo,"vinte ");
    break;
  case 3:
    printf("trinta ");
    fprintf(arquivo,"trinta ");
    break;
  case 4:
    printf("quarenta ");
    fprintf(arquivo,"quarenta ");
    break;
  case 5:
    printf("cinquenta ");
    fprintf(arquivo,"cinquenta ");
    break;
  case 6:
    printf("sessenta ");
    fprintf(arquivo,"sessenta ");
    break;
  case 7:
    printf("setenta ");
    fprintf(arquivo,"setenta ");
    break;
  case 8:
    printf("oitenta ");
    fprintf(arquivo,"oitenta ");
    break;
  case 9:
    printf("noventa ");
    fprintf(arquivo,"noventa ");
    break;
  }
}

void CentenaExtenso(int Centena)
{
  switch (Centena)
  {
  case 1:
    printf(" cento e ");
    fprintf(arquivo,"cento e ");
    break;
  case 2:
    printf(" duzentos e ");
    fprintf(arquivo,"duzentos e ");
    break;
  case 3:
    printf(" trezentos e ");
    fprintf(arquivo,"trezentos e ");
    break;
  case 4:
    printf(" quatrocentos e ");
    fprintf(arquivo,"quatrocentos e ");
    break;
  case 5:
    printf(" quinhentos e ");
    fprintf(arquivo,"quinhentos e ");
    break;
  case 6:
    printf(" seiscentos e ");
    fprintf(arquivo,"seiscentos e ");
    break;
  case 7:
    printf(" setecentos e ");
    fprintf(arquivo,"setecentos e ");
    break;
  case 8:
    printf(" oitocentos e ");
    fprintf(arquivo,"oitocentos e ");
    break;
  case 9:
    printf(" novecentos e ");
    fprintf(arquivo,"novecentos e ");
    break;
  }
}

void conversor(float num_algarismo)
{
  bool real = false;
  int CentenaDeMilhar, DezenaDeMilhar, Milhar, Centena, Dezena, Unidade, DezenaCentavos, UnidadeCentavos;
  int parteInteira = (int)num_algarismo;
  int parteDecimal = (int)roundf((num_algarismo - parteInteira) * 100);
  CentenaDeMilhar = (parteInteira % 1000000) / 100000;
  DezenaDeMilhar = (parteInteira % 100000) / 10000;
  Milhar = (parteInteira % 10000) / 1000;
  Centena = (parteInteira % 1000) / 100;
  Dezena = (parteInteira % 100) / 10;
  Unidade = parteInteira % 10;
  DezenaCentavos = parteDecimal / 10;
  UnidadeCentavos = parteDecimal % 10;
  
  if (CentenaDeMilhar == 0 && DezenaDeMilhar ==0)
  {
    CentenasZeradasExtenso(CentenaDeMilhar);
  } else {
    CentenaExtenso(CentenaDeMilhar);
  }
  
  DezenaExtenso(DezenaDeMilhar);

  if (Milhar != 0)
  {
    UnidadeExtenso(Milhar);
    printf(" mil");
    fprintf(arquivo," mil");
  }

  if (Dezena == 0 && Unidade == 0)
  {
    CentenasZeradasExtenso(Centena);
  }
  else
  {
    CentenaExtenso(Centena);
  }

  if (Unidade == 0)
  {
    DezenaExtenso(Dezena);
  }
  else
  {
    DezenaExtenso(Dezena);
  }
  if (Unidade != 0)
  {
    if (CentenaDeMilhar == 0 || DezenaDeMilhar == 0 || Milhar == 0 || Centena == 0 || Dezena == 0)
    {
      if (Dezena != 1 && Dezena >0)
      {
        printf("e ");
        fprintf(arquivo,"e ");
      }
      
      
    }
    
  }
  
  if (Dezena == 1)
  {
    DezAVinteExtenso(Unidade);
  }
  else
  {
    UnidadeExtenso(Unidade);
  }

  if(CentenaDeMilhar != 0 || DezenaDeMilhar != 0 || Milhar != 0 || Centena != 0 || Dezena != 0 || Unidade!= 0){
    real = true;
    printf(" Reais");
    fprintf(arquivo," Reais");
  }

  if (DezenaCentavos != 0 && UnidadeCentavos == 0)
  {
    printf(" e ");
    fprintf(arquivo," e ");
    DezenaExtenso(DezenaCentavos);
  }
  if (DezenaCentavos == 0 && UnidadeCentavos != 0)
  {
    printf(" e ");
    fprintf(arquivo," e ");    
    UnidadeExtenso(UnidadeCentavos);
  }
  if (DezenaCentavos != 0 && UnidadeCentavos != 0)
  {
     if (DezenaCentavos == 1)
    {
      if (real == true)
      {
      printf(" e ");
      fprintf(arquivo," e "); 
      }
      DezAVinteExtenso(UnidadeCentavos);
    } else {
      if (real == true)
      {
      printf(" e ");
      fprintf(arquivo," e "); 
      }
      DezenaExtenso(DezenaCentavos);
      printf("e ");
      fprintf(arquivo,"e ");
      UnidadeExtenso(UnidadeCentavos);
    }

  }
  if(DezenaCentavos != 0 || UnidadeCentavos != 0){
    printf(" Centavos");
    fprintf(arquivo," Centavos");
  }
  
}

void extenso()
{
  float num_algarismo = 0.00;
  printf("Digite o numero a ser escrito por extenso: ");
  scanf("%f", &num_algarismo);
  printf("Convertendo\n");
  printf("O valor %.2f por extenso fica: ", num_algarismo);
  conversor(num_algarismo);
  printf("\n");
  fprintf(arquivo, ".\n");
  
}

void exibirMenu()
{
  int opcaoMenu;
  fflush(stdin);
  printf("1. Escrever um numero por extenso\n");
  printf("2. Imprimir todos os numeros do arquivo em tela\n");
  printf("3. Sair\n");
  scanf("%d", &opcaoMenu);
  switch (opcaoMenu)
  {
  case 1:
    arquivo = fopen("numerosextensos.txt", "a+");
    extenso();
    fclose(arquivo);
    break;
  case 2:
    arquivo = fopen("numerosextensos.txt", "a+");
    printf("Caso 2\n");
    fclose(arquivo);
    break;
  case 3:
    printf("***Programa encerrado***\nGrato pela utilizaçao\nVolte sempre :)\n");
    break;
  default:
    printf("Opcao invalida, por favor tente novamente\n");
    printf("\n");
    exibirMenu();
    break;
  }
}

int main()
{
  exibirMenu();
}