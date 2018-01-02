/* In ma tr?n*/
#include <stdio.h>
#include <conio.h>
#define ROWS 4 
#define COLS 5
void main(void) {
	 int table[ROWS][COLS] =  {{10, 12, 14,  16, 18},
	                             {11, 13, 15, 17, 19},
	                             {20, 22, 24, 26, 28}, 
	                             {21, 23, 25, 27, 29}};
	    int i, ij, ix = 10;
for (i = 0; i < ROWS; i ++){
 for (ij = 0; ij < COLS; ij ++)
  *(*(table + i) + ij) += ix;}
  
for (i = 0; i < ROWS; i ++) {
	 for (ij = 0; ij < COLS; ij ++) 
	 printf("%4d", *(*(table + i) + ij)); 
	 printf("\n"); } 
	 getch();
}