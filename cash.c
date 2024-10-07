#include <stdio.h>
#include <cs50.h>

int main(void)
{
int quarter = 25;
int tenner = 10;
int fiver = 5;
int onner = 1;
int number=0;

int change;
do
{
change = get_int("Change owed: ");
}while(change<1);

while (change>0){
if (change >= quarter)
{
    change-=quarter;
    number++;
}
else if(change>=tenner)
{
    change-=tenner;
    number++;
}
else if(change>=fiver)
{
    change-=fiver;
    number++;
}
else
{
    change-=onner;
    number++;
}
}

printf("Cash owed: %i\n", number);

}

