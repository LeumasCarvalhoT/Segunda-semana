#include <cs50.h>
#include <math.h>
#include <stdio.h>




int main (void)
{


    int populaçao_Atual;
    do
    {
        populaçao_Atual = get_int ("Digite sua população atual de ilhamas:");
    } while (populaçao_Atual < 9);
printf("\n");

    int populaçao_Final;
    do
    {
        populaçao_Final = get_int ("Agora sua população final de:");
    } while (populaçao_Final < populaçao_Atual);
printf("\n");



if ( populaçao_Atual == populaçao_Final )
{

}

else
{
   int num_p = populaçao_Atual + (populaçao_Atual / 3) - (populaçao_Atual / 4);
   int anos_precisos++;

} while (populaçao_Atual < populaçao_Final);

printf("Anos necessários para o aumento:%i \n", anos_precisos);

return ;

}
