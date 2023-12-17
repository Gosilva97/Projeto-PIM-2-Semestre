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
    int pontuacao;
}interacao;

//Prototipos
void quiz();
void criarArquivo();
void menu();

//Variaveis Globais
    char data[80];
    char hora[80];
    int cont=1;
    FILE *arq;
    interacao max[TAM];

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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Olimpiadas de Paris 2024 %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

    //Cabecalho do arq
    fprintf(arq, "ID;Pontuacao\n");
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
void quiz(){
    char resposta;

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
    snprintf(nomedoarquivo, sizeof(nomedoarquivo), "Olimpiadas de Paris 2024 %s.csv", buffer);
    FILE *arq = fopen(nomedoarquivo, "a");

        system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);
    printf("Conforme as obras e historia que voce viu tem um quiz para avaliar se voce prestou atencao\n");
    getch();
    system("cls");

        printf("Data: %s\n", data);
        printf("Hora: %s\n", hora);

    printf("Pergunta 1: Onde serao realizados os Jogos Olimpicos de 2024?\n");
        printf("a) Paris \n");
        printf("b) Luxemburgo \n");
        printf("c) Estônia\n");
        printf("d) Mexico\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Paris\n");
    }
    printf("Pergunta 2: Qual nome dos mascotes da Olimpiada de Paris 2024?\n");
        printf("a) Fuleco \n");
        printf("b) Athenas \n");
        printf("c) Phyrges\n");
        printf("d) Tom\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Phyrges\n");
    }
        printf("Pergunta 3: Quais esportes sairam das Olimpiadas de 2024?\n");
        printf("a) Beisebol, boxe e motocross \n");
        printf("b) Beisebol, softbol e karate \n");
        printf("c) Tenis de mesa, boxe e motocross \n");
        printf("d) Badminton, surfe e golfe \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "b"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e b) Beisebol, softbol e karate \n");
    }
        printf("Pergunta 4: Qual esporte entra pela primeira vez em uma Olimpiada?\n");
        printf("a) Skate \n");
        printf("b) Badminton \n");
        printf("c) Breaking \n");
        printf("d) Boxe \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "c"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e c) Breaking\n");
    }
        printf("Pergunta 5: Quais esportes aconteceram fora de Paris e seus arredores?\n");
        printf("a) Futebol, vela e surfe \n");
        printf("b) Surfe, vela e skate \n");
        printf("c) Skate, futebol e boxe \n");
        printf("d) Ciclismo, hipismo e basquete \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Futebol, vela e surfe\n");
    }
        printf("Pergunta 6: A Vila Olimpica sera vitrine em? \n");
        printf("a) Gastos\n");
        printf("b) Poluicao \n");
        printf("c) Bagunca \n");
        printf("d) Sustentebilidade usando toda a energia de fontes renovaveis \n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) Sustentabilidade usando toda a energia de fontes renovaveis \n");
    }
        printf("Pergunta 7: O comite de candidatura Paris 2024 foi certificado pela ISO 20121, o que isso significa?\n");
        printf("a) De carbono neutro, gracas a sua politica de compensacao\n");
        printf("b) De seguranca \n");
        printf("c) De qualidade \n");
        printf("d) De econimia financeira\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "a"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e a) Carbono neutro, gracas a sua politica de compensacao\n");
    }
        printf("Pergunta 8: Quantos atletas de Breaking participaram ao todo?\n");
        printf("a) 16 B-Boys e 12 B-Girls \n");
        printf("b) 32 B-Boys e 16 B-Girls \n");
        printf("c) 12 B-Boys e 12 B-Girls \n");
        printf("d) 16 B-Boys e 16 B-Girls\n");
    printf("Sua resposta:\n");
    scanf("%s", &resposta);
    if (resposta = "d"){
        printf("Correto!\n");
        getch();
        max[cont].pontuacao++;
    } else {
        printf("A resposta correta e d) 16 B-Boys e 16 B-Girls\n");
    }
    printf("Voce acertou %d perguntas de 8.\n", max[cont].pontuacao);

    fprintf(arq, "ID: %i\nAcertou: %i\n", max[cont].id, max[cont].pontuacao);

    cont++;
    printf("Obrigado por participar\n");
    fclose(arq);
    main();
}
void menu(){    char opcao;
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
        quiz();
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
    printf("\tUse os numeros para selecionar a opcao desejada.\n");
    printf("\tPressione qualquer tecla para continuar\n\t");
    getch();
    system("cls");
    menu();
    system("pause");
}