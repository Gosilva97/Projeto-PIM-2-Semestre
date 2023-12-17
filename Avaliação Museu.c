#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#define TAM 10000

typedef struct identificacao{
    int id;
    char aval1;
    char aval2;
    char aval3;
}avaliacao;

//Prototipos
void criarArquivo();
void menu();
void avaliacao1();
void avaliacao2();
void avaliacao3();

//Variaveis Globais
    char data[80];
    char hora[80];
    int cont=1;
    FILE *arq;
    avaliacao max[TAM];
    const char*exc = "Excelente";
    const char*ot = "Otimo";
    const char*sat = "Satisfatorio";
    const char*ru = "Ruim";
    const char*pes = "Pessimo";

void criarArquivo(){
    struct tm *timeinfo;
    char buffer[80];
    setlocale(LC_ALL, "pt_BR");
    time_t agora = time(NULL);
    struct tm *tempo_local = localtime(&agora);
    strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
    strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "qual exposicao %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    //Cabecalho do arq
    fprintf(arq, "ID;Avaliacao1;Avaliacao2;Avaliacao3\n");
    if (arq == NULL){
        printf ("Erro!\nO arq da lista nao pode ser aberto!\n");
        getch();
        menu();
    }
    printf("\t\tArquivo %s criado com sucesso.\n",nomedoarquivo);
    fclose(arq);
    system("Pause");
    system("cls");
    menu();

}
void avaliacao1(){

        struct tm *timeinfo;
        char buffer[80];
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Avaliacao do Museu %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    system("cls");

    fprintf(arq, "%i;", max[cont].id);

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Informe seu ID:\n");
    scanf("%i", &max[cont].id);


    printf("\tAvalie o ambiente do museu\n");
        printf("1) %s\n", exc);
        printf("2) %s\n", ot);
        printf("3) %s\n", sat);
        printf("4) %s\n", ru);
        printf("5) %s\n", pes);
    printf("Sua avaliacao:\n");
    scanf("%s", &max[cont].aval1);
    switch (max[cont].aval1)
    {
    case 'a':
        fprintf(arq,"%s;", exc);
        break;
    case 'b':
        fprintf(arq,"%s;", ot);
        break;
    case 'c':
        fprintf(arq,"%s;", sat);
        break;
    case 'd':
        fprintf(arq,"%s;", ru);
        break;
    case 'e':
        fprintf(arq,"%s;", pes);
        break;
    default:
    printf("Coloque uma opção valida\n");
        break;
    }
    fclose(arq);
    avaliacao2();
}
void avaliacao2(){

        struct tm *timeinfo;
        char buffer[80];
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Avaliacao do Museu %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("2 - Avalie o conteudo do museu\n");
        printf("a) %s\n", exc);
        printf("b) %s\n", ot);
        printf("c) %s\n", sat);
        printf("d) %s\n", ru);
        printf("e) %s\n", pes);
    printf("Sua avaliacao:\n");
    scanf("%s", &max[cont].aval2);

        switch (max[cont].aval2)
    {
    case 'a':
        fprintf(arq,"%s;", exc);
        break;
    case 'b':
        fprintf(arq,"%s;", ot);
        break;
    case 'c':
        fprintf(arq,"%s;", sat);
        break;
    case 'd':
        fprintf(arq,"%s;", ru);
        break;
    case 'e':
        fprintf(arq,"%s;", pes);
        break;

    default:
    printf("Coloque uma opção valida\n");
        break;
    }
    fclose(arq);
    avaliacao3();
}
void avaliacao3(){

        struct tm *timeinfo;
        char buffer[80];
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);

    system("cls");

    printf("Data: %s\n", data);
    printf("Hora: %s\n", hora);
  
    timeinfo = localtime(&agora);

    strftime(buffer, sizeof(buffer), "%m-%Y", timeinfo);
    char nomedoarquivo[100];
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Avaliacao do Museu %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    printf("3 - Avalie o atendimento do museu\n");
        printf("a) %s\n", exc);
        printf("b) %s\n", ot);
        printf("c) %s\n", sat);
        printf("d) %s\n", ru);
        printf("e) %s\n", pes);
        printf("Sua avaliacao:\n");
    scanf("%s", &max[cont].aval3);

    switch (max[cont].aval3)
    {
    case 'a':
        fprintf(arq,"%s;", exc);
        break;
    case 'b':
        fprintf(arq,"%s;", ot);
        break;
    case 'c':
        fprintf(arq,"%s;", sat);
        break;
    case 'd':
        fprintf(arq,"%s;", ru);
        break;
    case 'e':
        fprintf(arq,"%s;", pes);
        break;

    default:
    printf("Coloque uma opção valida\n");
        break;
    }

    fprintf(arq, "\n");

    cont++;
    printf("Obrigado por participar\n");
    fclose(arq);
    main();
}

void menu(){
    char opcao;
    system("cls");
    do{
        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\t\tMenu Museu Atemporal\n\n");
    printf(" 1 - Interagir\n\n 4 - Voltar\n\n0 - Criar o arquivo (necessario sempre que iniciar um dia)\n\n");
    opcao = getch();

    switch(opcao)
    {
    case '1':
        avaliacao1();
        break;
    case '4':
        main();
        break;
    case '0':
        criarArquivo();
        break;

    default:
    printf("Digite uma opcao valida");
    }}while (opcao);

}
int main(){
    system("cls");
    system("title Painel da Obra");
    system("color F0");// Define a cor de plano de fundo e da fonte

        setlocale(LC_ALL, "pt_BR");
        time_t agora = time(NULL);
        struct tm *tempo_local = localtime(&agora);
        strftime(data, sizeof(data), "%d/%m/%Y", tempo_local);
        strftime(hora, sizeof(hora), "%H:%M:%S", tempo_local);
        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("\n\n\t\tBem Vindo ao Museu Atemporal\n\n");
    printf("\tVeja todas as funcoes disponiveis no menu.\n");
    printf("\tPressione qualquer tecla para continuar\n\t");
    getch();
    system("cls");
    menu();
    system("pause");
}