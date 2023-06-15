//#include <cs50.h>
#include <stdio.h>

int initial_size();
int final_size();
int target(int si, int sf);

int main(void)
{
    int si = initial_size();
    do{
        printf("> Enter again!\n");
        si = initial_size();
    }while (si<9);
    int sf = final_size();
    do {
        printf("> Population dying! Enter again!\n");
        sf = final_size();
    }while (sf<si);
    target(si, sf);
      
}

int initial_size()
{
    int si;
    printf("- Enter initial size >_ ");
    scanf("%d", &si);
    //printf("- Initial population \\\\ %d\n", si);
    return si;
}

int final_size()
{
    int sf;
    printf("- Enter final size >_ ");
    scanf("%d", &sf);
    //printf("- Final population \\\\ %d\n", sf);
    return sf;
}

int target(int si, int sf)
{
    int temp  = 0;
    
    do{ 
        si = si + si/3 - si/4;
        temp++;
    }while (si<sf);
    printf("> Number of years till the target \\\\ %d\n", temp);    
}