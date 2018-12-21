#include <stdio.h>
#include <string.h>
 
int main(){
	char a[100], b[100];
	int temp = 0;
 
  printf("Enter the first string: \n");
  gets(a);
  int k = 0;

 	while( a[k]!='\0' ){
	
 	k++; }
	printf("Length of the first string : %d\n" ,k);
	temp = k;
	printf("Enter the second string: \n");
	gets(b);
	k = 0;

 	while( b[k]!='\0' ){
	
 	a[temp+k] = b[k];
	k++;
	
	}
	a[temp+k] = '\0';
	printf("Length of the second string : %d\n" ,k);
	
	
	printf("Combined of 2 string: %s\n",a);
  
 	return 0 ;
 	
}
