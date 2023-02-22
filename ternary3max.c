#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("value of a: ");
	scanf("%d",&a);
	
	printf("value of b: ");
	scanf("%d",&b);
	
	printf("value of c: ");
	scanf("%d",&c);
	
	a>b
	    ?
	        a>c
			   ?
			      printf("A max")
			   :   
			      printf("C max")   
	    :
		    b>c
			    ?
				  printf("B max")       
				:    
				  printf("C max.");
}
