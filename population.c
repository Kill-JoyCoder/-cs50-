//#include <cs50.h>
//Code by Ankur Gohain
//Submitted 17/06/2023
//Thank you for opening! :D
//PS: I didn't use the cs50.h header file here as my github codespace was quite laggy, so i typed the code in my local computer and then copied to my codespace for checking. 
#include <stdio.h>

int initial_size();
int final_size();
void target(int si, int sf);

int main(void)
{
    int si = initial_size();
    while (si<9)
    {
        printf("> Enter again!\n");
        si = initial_size();
    }
    int sf = final_size();
    while (sf<si)
    {
        printf("> Population dying! Enter again!\n");
        sf = final_size();
    }
    target(si, sf);

}

int initial_size()
{
    int si;
    printf("- Enter initial size >_ ");
    scanf("%d", &si);
    return si;
}

int final_size()
{
    int sf;
    printf("- Enter final size >_ ");
    scanf("%d", &sf);
    return sf;
}

void target(int si, int sf)
{
    int temp  = 0;

    while(si<sf){
        si = si + si / 3 - si / 4;
        temp++;
    }
    printf("Years: %d\n", temp);
}
