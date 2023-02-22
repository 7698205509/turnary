#include<stdio.h>
int main(){
	int a,b,c,d,e;
	
	printf("value of a: ");
	scanf("%d",&a);
	
	printf("value of b: ");
	scanf("%d",&b);
	
	printf("value of c: ");
	scanf("%d",&c);
	
	printf("value of d: ");
	scanf("%d",&d);
	
	printf("value of e: ");
	scanf("%d",&e);
	
	a>b
	    ?
	        a>c
	            ?
	                a>d
	                    ?
	                        a>e
	                            ?
	                                printf("A max")   
	                            :
	              	                printf("E max")
	                    :
	           	            d>e
	           	                ?
	           	                    printf("D max")
	           	                :
	           	                	printf("E max")
			    :
			    	c>d
			    	    ?
			    	        c>e
			    	            ?
								    printf("C max")
								:   
								    printf("E max")
			    	    :
			    	    	d>e
			    	    	    ?
			    	    	        printf("D max")
			    	    	    :
			    	    	    	printf("E max")
	    :
	    	b>c
	    	    ?
	    	        b>d
	    	            ?
	    	                b>e
	    	                    ?
	    	                        printf("B max")
	    	                    :
	    	                    	printf("E max")
	    	            :
	    	                d>e
	    	                    ?
	    	                        printf("D max")
	    	                    :
	    	                    	printf("E max")
	    	    :
	    	    	c>d
	    	    	    ?
	    	    	       c>e
	    	    	            ?
	    	    	               printf("C max")
	    	    	            :
	    	    	               printf("E max")
	    	    	    :
	    	    	    	d>e
	    	    	    	    ?
	    	    	    	       printf("D max")
	    	    	    	    :
	    	    	    	       printf("E max");
	    	    	    	     
	return 0;							   



}
