#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Variavel global do arquivo
FILE* arquivo;

void UnidadeCentavosExtenso(int UnidadeCentavos)
{
  switch (UnidadeCentavos)
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

void DezenaCentavosExtenso(int DezenaCentavos)
{
  switch (DezenaCentavos)
  {
  case 1:
    printf("dez");
    fprintf(arquivo,"dez");
    break;
  case 2:
    printf("vinte");
    fprintf(arquivo,"vinte");
    break;
  case 3:
    printf("trinta");
    fprintf(arquivo,"trinta");
    break;
  case 4:
    printf("quarenta");
    fprintf(arquivo,"quarenta");
    break;
  case 5:
    printf("cinquenta");
    fprintf(arquivo,"cinquenta");
    break;
  case 6:
    printf("sessenta");
    fprintf(arquivo,"sessenta");
    break;
  case 7:
    printf("setenta");
    fprintf(arquivo,"setenta");
    break;
  case 8:
    printf("oitenta");
    fprintf(arquivo,"oitenta");
    break;
  case 9:
    printf("noventa");
    fprintf(arquivo,"noventa");
    break;
  }
}

void MilhaoExtenso(int Milhao)
{
  switch (Milhao)
  {
  case 1:
    printf("um milhao ");
    fprintf(arquivo,"um milhao");
    break;
  case 2:
    printf("dois milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 3:
    printf("tres milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 4:
    printf("quatro milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 5:
    printf("cinco milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 6:
    printf("seis milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 7:
    printf("sete milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 8:
    printf("oito milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 9:
    printf("nove milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  }
}

void MilhaoZeradoExtenso(int Milhao)
{
  switch (Milhao)
  {
  case 1:
    printf("um milhao ");
    fprintf(arquivo,"um milhao");
    break;
  case 2:
    printf("dois milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 3:
    printf("tres milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 4:
    printf("quatro milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 5:
    printf("cinco milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 6:
    printf("seis milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 7:
    printf("sete milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 8:
    printf("oito milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  case 9:
    printf("nove milhoes ");
    fprintf(arquivo,"um milhao");
    break;
  }
}

void CentenaDeMilharZeradaExtenso(int CentenaDeMilhar){
  switch (CentenaDeMilhar)
  {
  case 1:
    printf("cem ");
    fprintf(arquivo,"cem ");
    break;
  case 2:
    printf("duzentos ");
    fprintf(arquivo,"duzentos ");
    break;
  case 3:
    printf("trezentos ");
    fprintf(arquivo,"trezentos ");
    break;
  case 4:
    printf("quatrocentos ");
    fprintf(arquivo,"quatrocentos ");
    break;
  case 5:
    printf("quinhentos ");
    fprintf(arquivo,"quinhentos ");
    break;
  case 6:
    printf("seiscentos ");
    fprintf(arquivo,"seiscentos ");
    break;
  case 7:
    printf("setecentos ");
    fprintf(arquivo,"setecentos ");
    break;
  case 8:
    printf("oitocentos ");
    fprintf(arquivo,"oitocentos ");
    break;
  case 9:
    printf("novecentos ");
    fprintf(arquivo,"novecentos ");
    break;
  }
}

void CentenaDeMilharExtenso(int CentenaDeMilhar){
  switch (CentenaDeMilhar)
  {
  case 1:
    printf("cento e ");
    fprintf(arquivo,"cento e ");
    break;
  case 2:
    printf("duzentos e ");
    fprintf(arquivo,"duzentos e ");
    break;
  case 3:
    printf("trezentos e ");
    fprintf(arquivo,"trezentos e ");
    break;
  case 4:
    printf("quatrocentos e ");
    fprintf(arquivo,"quatrocentos e ");
    break;
  case 5:
    printf("quinhentos e ");
    fprintf(arquivo,"quinhentos e ");
    break;
  case 6:
    printf("seiscentos e ");
    fprintf(arquivo,"seiscentos e ");
    break;
  case 7:
    printf("setecentos e ");
    fprintf(arquivo,"setecentos e ");
    break;
  case 8:
    printf("oitocentos e ");
    fprintf(arquivo,"oitocentos e ");
    break;
  case 9:
    printf("novecentos e ");
    fprintf(arquivo,"novecentos e ");
    break;
  }
}

void DezenaDeMilharExtenso(int DezenaDeMilhar)
{
  switch (DezenaDeMilhar)
  {
  case 1:
    printf("dez ");
    fprintf(arquivo,"dez ");
    break;
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

void DezenaDeMilharZeradaExtenso(int DezenaDeMilhar)
{
  switch (DezenaDeMilhar)
  {
  case 1:
    printf("dez ");
    fprintf(arquivo,"um ");
    break;
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

void MilharExtenso(int Milhar)
{
  switch (Milhar)
  {
  case 1:
    printf("um ");
    fprintf(arquivo,"um ");
    break;
  case 2:
    printf("dois ");
    fprintf(arquivo,"dois ");
    break;
  case 3:
    printf("tres ");
    fprintf(arquivo,"tres ");
    break;
  case 4:
    printf("quatro ");
    fprintf(arquivo,"quatro ");
    break;
  case 5:
    printf("cinco ");
    fprintf(arquivo,"cinco ");
    break;
  case 6:
    printf("seis ");
    fprintf(arquivo,"seis ");
    break;
  case 7:
    printf("sete ");
    fprintf(arquivo,"sete ");
    break;
  case 8:
    printf("oito ");
    fprintf(arquivo,"oito ");
    break;
  case 9:
    printf("nove ");
    fprintf(arquivo,"nove ");
    break;
  }
  printf("mil ");
}

void DezenaZeradasExtenso(int Dezena)
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

void CentenasZeradasExtenso(int Centena)
{
  switch (Centena)
  {
  case 1:
    printf("cem ");
    fprintf(arquivo,"cem ");
    break;
  case 2:
    printf("duzentos ");
    fprintf(arquivo,"duzentos ");
    break;
  case 3:
    printf("trezentos ");
    fprintf(arquivo,"trezentos ");
    break;
  case 4:
    printf("quatrocentos ");
    fprintf(arquivo,"quatrocentos ");
    break;
  case 5:
    printf("quinhentos ");
    fprintf(arquivo,"quinhentos ");
    break;
  case 6:
    printf("seiscentos ");
    fprintf(arquivo,"seiscentos ");
    break;
  case 7:
    printf("setecentos ");
    fprintf(arquivo,"setecentos ");
    break;
  case 8:
    printf("oitocentos ");
    fprintf(arquivo,"oitocentos ");
    break;
  case 9:
    printf("novecentos ");
    fprintf(arquivo,"novecentos ");
    break;
  }
}

void UnidadeExtenso(int Unidade)
{
  switch (Unidade)
  {
  case 1:
    printf("um ");
    fprintf(arquivo,"um ");
    break;
  case 2:
    printf("dois ");
    fprintf(arquivo,"dois ");
    break;
  case 3:
    printf("tres ");
    fprintf(arquivo,"tres ");
    break;
  case 4:
    printf("quatro ");
    fprintf(arquivo,"quatro ");
    break;
  case 5:
    printf("cinco ");
    fprintf(arquivo,"cinco ");
    break;
  case 6:
    printf("seis ");
    fprintf(arquivo,"seis ");
    break;
  case 7:
    printf("sete ");
    fprintf(arquivo,"sete ");
    break;
  case 8:
    printf("oito ");
    fprintf(arquivo,"oito ");
    break;
  case 9:
    printf("nove ");
    fprintf(arquivo,"nove ");
    break;
  }
}

void DezAVinteExtenso(int Unidade)
{
  switch (Unidade)
  {
  case 0:
    printf("dez ");
    break;
  case 1:
    printf("onze ");
    break;
  case 2:
    printf("doze ");
    break;
  case 3:
    printf("treze ");
    break;
  case 4:
    printf("quatorze ");
    break;
  case 5:
    printf("quinze ");
    break;
  case 6:
    printf("dezesseis ");
    break;
  case 7:
    printf("dezessete ");
    break;
  case 8:
    printf("dezoito ");
    break;
  case 9:
    printf("dezenove ");
    break;
  }
}

void DezenaExtenso(int Dezena)
{
  switch (Dezena)
  {
  case 2:
    printf("vinte e ");
    fprintf(arquivo,"vinte e ");
    break;
  case 3:
    printf("trinta e ");
    fprintf(arquivo,"trinta e ");
    break;
  case 4:
    printf("quarenta e ");
    fprintf(arquivo,"quarenta e ");
    break;
  case 5:
    printf("cinquenta e ");
    fprintf(arquivo,"cinquenta e ");
    break;
  case 6:
    printf("sessenta e ");
    fprintf(arquivo,"sessenta e ");
    break;
  case 7:
    printf("setenta e ");
    fprintf(arquivo,"setenta e ");
    break;
  case 8:
    printf("oitenta e ");
    fprintf(arquivo,"oitenta e ");
    break;
  case 9:
    printf("noventa e ");
    fprintf(arquivo,"noventa e ");
    break;
  }
}

void CentenaExtenso(int Centena)
{
  switch (Centena)
  {
  case 1:
    printf("cento e ");
    fprintf(arquivo,"cento e ");
    break;
  case 2:
    printf("duzentos e ");
    fprintf(arquivo,"duzentos e ");
    break;
  case 3:
    printf("trezentos e ");
    fprintf(arquivo,"trezentos e ");
    break;
  case 4:
    printf("quatrocentos e ");
    fprintf(arquivo,"quatrocentos e ");
    break;
  case 5:
    printf("quinhentos e ");
    fprintf(arquivo,"quinhentos e ");
    break;
  case 6:
    printf("seiscentos e ");
    fprintf(arquivo,"seiscentos e ");
    break;
  case 7:
    printf("setecentos e ");
    fprintf(arquivo,"setecentos e ");
    break;
  case 8:
    printf("oitocentos e ");
    fprintf(arquivo,"oitocentos e ");
    break;
  case 9:
    printf("novecentos e ");
    fprintf(arquivo,"novecentos e ");
    break;
  }
}

void conversor(float num_algarismo)
{
  int Milhao, CentenaDeMilhar, DezenaDeMilhar, Milhar, Centena, Dezena, Unidade, DezenaCentavos, UnidadeCentavos;
  Milhao = fmod((num_algarismo / 1000000), 10);
  CentenaDeMilhar = fmod((num_algarismo / 100000), 10);
  DezenaDeMilhar = fmod((num_algarismo / 10000), 10);
  Milhar = fmod((num_algarismo / 1000), 10);
  Centena = fmod((num_algarismo / 100), 10);
  Dezena = fmod((num_algarismo / 10), 10);
  Unidade = fmod(num_algarismo, 10);
  DezenaCentavos = fmod((num_algarismo * 10), 10);
  UnidadeCentavos = fmod((num_algarismo * 100), 10)+0.01;
  if (Milhao == 0 && CentenaDeMilhar ==0)
  {
    MilhaoZeradoExtenso(Milhao);
  } else {
    MilhaoExtenso(Milhao);
  }
  
  if (CentenaDeMilhar == 0 && DezenaDeMilhar ==0)
  {
    CentenaDeMilharZeradaExtenso(CentenaDeMilhar);
  } else {
    CentenaDeMilharExtenso(CentenaDeMilhar);
  }
  
  if (DezenaDeMilhar == 0 && Milhar == 0)
  {
    DezenaDeMilharZeradaExtenso(DezenaDeMilhar);
  }
  else
  {
    DezenaDeMilharExtenso(DezenaDeMilhar);
  }

  if (Milhar != 0)
  {
    MilharExtenso(Milhar);
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
    DezenaZeradasExtenso(Dezena);
  }
  else
  {
    DezenaExtenso(Dezena);
  }

  if (Dezena == 1)
  {
    DezAVinteExtenso(Unidade);
  }
  else
  {
    UnidadeExtenso(Unidade);
  }

  if(Milhao != 0 || CentenaDeMilhar != 0 || DezenaDeMilhar != 0 || Milhar != 0 || Centena != 0 || Dezena != 0 || Unidade!= 0){
    printf("Reais e ");
    fprintf(arquivo,"Reais e ");
  }

  if (DezenaCentavos != 0 && UnidadeCentavos == 0)
  {
    DezenaCentavosExtenso(DezenaCentavos);
  }
  if (DezenaCentavos == 0 && UnidadeCentavos != 0)
  {
    UnidadeCentavosExtenso(UnidadeCentavos);
  }
  if (DezenaCentavos == 1)
  {
    DezAVinteExtenso(UnidadeCentavos);
  }
  if (DezenaCentavos != 0 && UnidadeCentavos != 0)
  {
    DezenaCentavosExtenso(DezenaCentavos);
    printf(" e ");
    fprintf(arquivo," e ");
    UnidadeCentavosExtenso(UnidadeCentavos);
  }
  if(DezenaCentavos != 0 || UnidadeCentavos != 0){
    printf(" Centavos\n");
    fprintf(arquivo," Centavos");
  }
  
}

void extenso()
{
  float num_algarismo;
  printf("Digite o numero a ser escrito por extenso: ");
  scanf("%f", &num_algarismo);
  printf("Convertendo\n");
  printf("O valor %.2f por extenso fica: ", num_algarismo);
  conversor(num_algarismo);
  fprintf(arquivo, ".\n");
  
}

void criartxt(){
  if(arquivo == NULL){
    printf("Erro ao abrir arquivo");
  } else {
    printf("Sucesso ao abrir arquivo");
  }
}
void exibirMenu()
{
  int opcaoMenu;
  fflush(stdin);
  criartxt();
  printf("1. Escrever um numero por extenso\n");
  printf("2. Imprimir todos os numeros do arquivo em tela\n");
  printf("3. Sair\n");
  scanf("%d", &opcaoMenu);
  switch (opcaoMenu)
  {
  case 1:
    extenso();
    break;
  case 2:
    printf("Caso 2\n");
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
  arquivo = fopen("numerosextensos.txt", "a+");
  exibirMenu();
}