/* Chuong trinh ve chu H lon */
#include <stdio.h> 
#include <conio.h> 
#define MAX 5
int H[MAX][MAX] = {{1, 0, 0, 0, 1}, 
                   {1, 0, 0, 0, 1},
                   {1, 1, 1, 0, 0},
	               {1, 0, 0, 0, 1},
		           {1, 0, 0, 0, 1}};
int I[MAX][MAX] = {{0, 1, 1, 1, 0}, 
                   {0, 1, 1, 1, 0},
                   {0, 1, 1, 1, 0},
	               {0, 1, 1, 1, 0},
		           {0, 1, 1, 1, 0}};
int T[MAX][MAX] = {{1, 1, 1, 1, 1}, 
                   {1, 1, 1, 1, 1},
                   {0, 0, 1, 0, 0},
	               {0, 0, 1, 0, 0},
		           {0, 0, 1, 0, 0}};									 
void main(void) 
				{ int i , ij,j,k;
				 for (i = 0; i < MAX; i++) { 
				 
				 for (ij = 0; ij < MAX; ij++)
				  if (H[i][ij]) printf("!!!"); 
                 else printf(" ");
				 printf("\n"); 
				 }
				 printf("\n");
				 for (j = 0; j < MAX; j++) { 
				 
				 for (k = 0; k < MAX; k++){
				  if (I[j][k]) printf("!"); 
                 else printf("   ");}
				 printf("\n");
				 }
				 printf("\n");
				 for (j = 0;8 j < MAX; j++) { 
				 
				 for (k = 0; k < MAX; k++){
				  if (T[j][k]) printf("!!"); 
                 else printf(" ");}
				 printf("\n");
				 }
				
				 printf("\n");  
				 getch(); 
				 } 