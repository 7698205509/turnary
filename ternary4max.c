#include<stdio.h>
int main(){
	int a,b,c,d;
	
	printf("value of a: ");
	scanf("%d",&a);
	
	printf("value of b: ");
	scanf("%d",&b);
	
	printf("value of c: ");
	scanf("%d",&c);
	
	printf("value of d: ");
	scanf("%d",&d);

    a>b
        ?
        a>c
            ?
            a>d
                ?
                    printf("A max")
                :
                	printf("D max")
            :
            c>d
                ?
                    printf("C max")
               	:
                	printf("D max")
        :
        b>c
            ?
            b>d
			    ?
     		        printf("B max")
				:
				    printf("D max")     
            :
            c>d
			   ?
			        printf("C max")
			   :
			        printf("D max");	
    return 0;
}
