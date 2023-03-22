#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    char name[20];
    char id[10];
}employee;

int main()
{
    employee *e1 = NULL;
    int no_of_records;
    printf("how many records do you want : ");
    scanf("%d", &no_of_records);
    e1 = (employee*)malloc(no_of_records * sizeof(employee));
    for(int i = 0; i < no_of_records; i++)
    {
        printf("emloyee %d:\nenter your name :",i+1);
        scanf("%s", (e1+i)->name);
        printf("enter your id :");
        scanf("%s", (e1+i)->id);
        
    }
    for(int i = 0; i < no_of_records; i++)
    {
        printf("emloyee %d:\n\tName : %s\n",i+1,(e1+i)->name);
        printf("\tid : %s\n", (e1+i)->id);
    }
    free(e1);
    return 0;
}