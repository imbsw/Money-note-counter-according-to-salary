#include <stdio.h>
#include <stdlib.h>

int main()
{
    long salary;
    int rs2000,rs1000,rs500,rs200,rs100,rs50,rs20,rs10;

    printf("Enter Your Salary:");
    scanf("%d",&salary);

    rs2000=salary/2000;
    rs1000=(salary%2000)/1000;
    rs500=(salary%1000)/500;
    rs200=(salary%500)/200;
    rs100=(salary%200)/100;
    rs50=(salary%100)/50;
    rs20=(salary%50)/20;
    rs10=(salary%20)/10;

    printf("\nNo Of RS2000 Notes :%d",rs2000);
    printf("\nNo Of RS1000 Notes :%d",rs1000);
    printf("\nNo Of RS500 Notes :%d",rs500);
    printf("\nNo Of RS100 Notes :%d",rs100);
    printf("\nNo Of RS50 Notes :%d",rs50);
    printf("\nNo Of RS10 Notes :%d",rs10);


    return 0;
}
