#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sex,age;
	printf("�п�J�ʧO(�k��1,�k��2)");
	scanf("%d",&sex);
	printf("�п�J�~��");
	scanf("%d",&age);
	if( sex==1 )
    {
    	if(age>=18)
         {
		  printf ("�A�i�H���B\n") ;
         }
	     else
		 {
	      printf("�A���i�H���B\n");
	     }  
    }
    if( sex==2 )
    {
    	if(age>=16)
         {
		  printf ("�A�i�H���B\n") ;
         }
	     else
		 {
	      printf("�A���i�H���B\n");
	     }  
		 }
	system("pause");
	return 0;
}
