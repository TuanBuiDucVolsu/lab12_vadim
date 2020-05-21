#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct AEROFLOT               //3 ??????? ? ?????????
{
    char kuda[30];             // ????? ??????????
    int num,t;                // ????? ????????
    char type[15];            // T?? ????????
}FLY1;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Read1(FILE *f);                   
void output();  
int main(int argc, char *argv[]) {
	FILE *f = fopen("Structures.TXT","r");               
	while(!feof(f)){                 
		Read1(f);
		output();	
	} 
	return 0;
}
void Read1(FILE *f)
{
	char tx[10];	               
	fscanf(f,"%s",&FLY1.kuda);     
	fscanf(f,"%d",&FLY1.num);      
	fgets(tx,10,f);                
	fgets(FLY1.type,20,f);         
}
void output(){        
		printf("\n%-30s %-10d %-10s ",FLY1.kuda,FLY1.num,FLY1.type);
}
