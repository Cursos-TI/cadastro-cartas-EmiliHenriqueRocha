    #include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das cartas
    // Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

    int main() {
    printf("Desafio Super Trunfo\n");
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int Carta1;
    Carta1=1;
    char letrA[8]="E";
    char EstadO[100]="Espiritosanto";
    char codigO[100]="E01";
    int populacaO;
    float areA;
    float pbI;
    int numerosdepontosturisticoS;
  
    int carta2;
    carta2=2;
    char letRa[8]="G";
    char EstaDo[100]="Goias";
    char codiGo[100]="G02";
    int populacAo;
    float arEa;
    float pBi;
    int numerosdepontosturisticOs;
  
    // Área para entrada de dados
      
    //carta1
    printf("Digite a sua carta1:");
    scanf("%d",&carta1);
    printf("A carta1 e:%d\n",carta1);
    
    printf("Digite o seu EstadO:");
    scanf("%s",EstadO);
    printf("O seu EstadoO e:%s\n",EstadO);
     
    printf("Digite a sua letrA:");
    scanf("%s",letrA);
    printf("A sua letrA e:%s\n",letrA);

    printf("Digite o codigO:");
    scanf("%s",codigO);
    printf("O seu codigO e:%s\n",codigO);

    printf("Digite o nomedacidadE:");
    scanf("%s",nomedacidadE);
    printf("O nomedacidadeE e:%s\n",nomedacidadE);

    printf("Digite a sua populacaO :");
    scanf(" %d",&populacaO);
    printf("A sua populacaO e :%d\n",populacaO);

    printf("Digite a sua areA:");              
    scanf(" %f",&area1);
    printf("A area1 e:%.2f\n",areA);

    printf("Digite o pbI :");
    scanf(" %f",&pbI);
    printf("O seu pbI e:%.2f\n",pbI);

    printf("Digite o numerosdepontosturisticoS:");
    scanf("%d",&numerosdepontosturisticoS);
    printf("O numerosdepontosturisticoS e :%d\n",numerosdepontosturisticoS);
      
    //carta2
    printf("Digite a sua carta2:");
    scanf("%d",&carta2);
    printf("A carta2 e :%d\n",carta2);

    printf("Digite o seu EstaDo:");
    scanf("%s",EstaDo);
    printf("O seu EstaDo e :%s\n",EstaDo);

    printf("Digite a sua letRa:");
    scanf("%s",letRa);
    printf("A sua  letRa e :%s\n",letRa);

    printf("Digite o seu codiGo:");
    scanf("%s",codiGo);
    printf("O seu codiGo e :%s\n",codiGo);

    printf("Digite o nomedacidaDe:");
    scanf("%s",nomedacidaDe);
    printf("O nomedacidaDe e :%s\n",nomedacidaDe);

    printf("Digite a sua populacAo:");
    scanf("%d",&populacAo);
    printf(" A populacAo e :%d\n",populacAo);

    printf("Digite a sua arEa:");
    scanf("%f",&arEa);
    printf("A sua arEa e:%.2f\n",arEa);

    printf("Digite o seu pBi:");
    scanf("%f",&pbi2);
    printf("O seu pBi e:%.2f\n",pBi);
    
    printf("Digite o numerosdepontosturisticOs:");
    scanf("%d",&numerosdepontosturisticOs);
    printf("O numerosdepontosturisticOs e :%d\n",numerosdepontosturisticOs);

    // Área para exibição dos dados da cidade
    //Carta 1
    char nomedacidadE[100]="vila velha";
    populacaO=467722.00;
    areA=210.25000;
    pbI=16300000.00;
    numerosdepontosturisticoS=20;
  
    //Carta2
    char nomedacidaDe[100]="Goiania";
    populacAo=1437366;
    arEa=72929000;
    pBi=77700000.00;
    numerosdepontosturisticOs=40;
  
return 0;
} 
