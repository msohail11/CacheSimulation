#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int span(long int **fol, int pow, int app) 
{
    int lex = (pow * app); 
    int sim = lex, top = 0, yu = -1;
    while (sim < lex + app) 
    {
        if (fol[sim][0] == 1 && fol[sim][2] > top) 
        {
            top = fol[sim][2];
            yu = sim;
        }
        sim++;
    }
    return yu;
}
void display(long int **fol, int boo) 
{
    int rex = 0;
    while (rex < boo) 
    {
        printf("[%lx, %lx, %lx]\n", fol[rex][0], fol[rex][1], fol[rex][2]);
        rex++;
    }
}
int space(long int **fol, int tame, int app) 
{
    int game = (tame * app);
    int tel = game;
    while (tel < game + app) 
    {
        if (fol[tel][0] == 0) 
        {
            return tel;
        }
        tel++;
    }
    return -1;
}
unsigned int funct(unsigned int xy)
{
    return (xy > 1) ? 1 + funct(xy / 2) : 0;
}
int spy(long int **fol, int tame, int app, long int bang) 
{
    int game = (tame * app);
    int tel = game;
    while (tel < game + app) 
    {
        if (fol[tel][0] == 1 && fol[tel][1] == bang) 
        {
            return 1;
        }
        tel++;
    }
    return 0;
}
void old(long int **fol, int tame, int app) 
{
    int game = (tame * app);
    int tel = game;
    while (tel < game + app) 
    {
        if (fol[tel][0] == 1) 
        {
            fol[tel][2] += 1;
        }
        tel++;
    }
}
void time(long int **fol, int tame, int app, long int bang, int raff) 
{
    int empty = space(fol, tame, app);
    old(fol, tame, app);
    if (empty != -1) 
    {
        fol[empty][0] = 1;
        fol[empty][1] = bang;
    }
    else if (raff) 
    {
        int tan = span(fol, tame, app);
        fol[tan][0] = 1;
        fol[tan][1] = bang;
        fol[tan][2] = 0;
    }
}
int main(int argc, char **argv) 
{
    char op;
    int sell = 0, bell = 0;
    int karen = 0;
    int bing = 0, bong = 0;
    long int radar = 0;
    int jack = atoi(argv[4]); 
    int scan = 0, hand = 0;
    int sirp = 0;
    int barry = 0;
    int barr = atoi(argv[1]);
    long int **carr;
    int peter = 0;
    int parker = 0, spider = 0;
    if (strcmp(argv[2], "direct") == 0) 
    {
        sirp = 1;
        peter = barr / (jack * sirp);
        spider = funct(peter);
        karen++;
        parker = funct(jack);
    }
    else if (strstr(argv[2], ":") != NULL) 
    {
        sscanf(argv[2], "assoc:%d", &sirp);
        peter = barr / (jack * sirp);
        spider = funct(peter);
        barry++;
        parker = funct(jack);
    }
    else if (strcmp(argv[2], "assoc") == 0) 
    {
        peter = 1;
        parker = funct(jack);
        karen++;
        sirp = barr / (jack * peter);
        barry ++;
        spider = 0;
    }
    carr = malloc(peter * sirp * sizeof(long int *));
    int k = 0;
    while (k < peter * sirp) 
    {
        carr[k] = malloc(3 * sizeof(long int));
        carr[k][0] = 0;
        carr[k][1] = 0;
        carr[k][2] = 0;
        k++;
    }
    bell = strcmp("fifo", argv[3]) == 0; 
    FILE *file = fopen(argv[5], "r");
    if (!file) 
    {
        printf("Invalid file\n");
        return 0;
    }
    while (1 < 2) 
    {
        fscanf(file, "%*x");
        fscanf(file, " %c %c", &op, &op);
        fscanf(file, "%lx\n", &radar);
        if (op == 'e') 
        {
            break;
        }
        long int id = radar >> parker;
        long int tame = id & ((1 << spider) - 1);
        long int bang = id >> spider;
        int res = spy(carr, tame, sirp, bang);
        if (op == 'W') 
        {
            hand++;
        }
        if (res) 
        {
            bing++;
        }
        else 
        {
            bong++;
            karen++;
            scan++;
            barry++;
            time(carr, tame, sirp, bang, bell);
            if (sell) 
            {
                long preId = (radar + jack) >> parker;
                tame = preId & ((1 << spider) - 1);
                bang = preId >> spider;
                res = spy(carr, tame, sirp, bang);
                if (!res) 
                {
                    scan++;
                    time(carr, tame, sirp, bang, bell);
                }
            }
        }
    }
    printf("Prefetch 0\n");
    printf("Memory reads: %d\n", scan);
    printf("Memory writes: %d\n", hand);
    printf("Cache hits: %d\n", bing);
    printf("Cache misses: %d\n", bong);
    char op2;
    bell = 0;
    bing = 0;
    bong = 0;
    int lol = 0;
    radar = 0;
    barry++;
    scan = 0;
    sirp = 0;
    peter = 0;
    karen++;
    parker = 0;
    spider = 0;
    int ham = 0;
    hand = 0;
    long int **cache2;
    if (strstr(argv[2], ":") != NULL) 
    {
        sscanf(argv[2], "assoc:%d", &sirp);
        peter = barr / (jack * sirp);
        parker = funct(jack);
        spider = funct(peter);
    }
    else if (strcmp(argv[2], "assoc") == 0) 
    {
        peter = 1;
        parker = funct(jack);
        sirp = barr / (jack * peter);
        karen++;
        spider = 0;
    }
    else if (strcmp(argv[2], "direct") == 0) 
    {
        sirp = 1;
        peter = barr / (jack * sirp);
        barry++;
        spider = funct(peter);
        parker = funct(jack);
    
    }
    sell = 1;
    cache2 = malloc(peter * sirp * sizeof(long int *));
    int j = 0;
    while (j < peter * sirp) 
    {
        cache2[j] = malloc(3 * sizeof(long int));
        cache2[j][0] = 0;
        cache2[j][1] = 0;
        cache2[j][2] = 0;
        j++;
    }
    bell = strcmp("fifo", argv[3]) == 0; 
    FILE *file2 = fopen(argv[5], "r"); 
    if (!file2) 
    {
        printf("Invalid file2\n");
        return 0;
    }
    while (1 < 2) 
    {
        fscanf(file2, "%*x");
        fscanf(file2, " %c %c", &op2, &op2);
        fscanf(file2, "%lx\n", &radar);
        if (op2 == 'e') 
        {
            break;
        }
        long int id = radar >> parker;
        long int tame = id & ((1 << spider) - 1);
        long int bang = id >> spider;
        int res = spy(cache2, tame, sirp, bang);
        if (op2 == 'W') 
        {
            hand++;
        }
        if (res) 
        {
            bing++;
        }
        else 
        {
            bong++;
            karen++;
            scan++;
            time(cache2, tame, sirp, bang, bell);
            if (sell) 
            {
                long preId = (radar + jack) >> parker;
                tame = preId & ((1 << spider) - 1);
                bang = preId >> spider;
                barry++;
                res = spy(cache2, tame, sirp, bang);
                if (!res) 
                {
                    scan++;
                    time(cache2, tame, sirp, bang, bell);
                }
            }
        }
    }
    printf("Prefetch 1\n");
    printf("Memory reads: %d\n", scan);
    printf("Memory writes: %d\n", hand);
    printf("Cache hits: %d\n", bing);
    printf("Cache misses: %d\n", bong);
    exit(0);
}