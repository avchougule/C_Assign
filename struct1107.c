//7)Create Date structure having attributes as dd,mm,yy. 

#include<stdio.h>  
struct date   
{  
    int dd;
    int mm;
    int yy;  
};  
void main ()  
{  
    struct date d;  
    printf("Enter date\n");  
    scanf("%d %d %d",&d.dd, &d.mm,&d.yy);  
 printf("\nDate:%d/%d/%d\n",d.dd,d.mm,d.yy);
}  

