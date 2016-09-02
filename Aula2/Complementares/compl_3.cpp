#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1,n2,n3,media;
	 	n1=0;
	 		n2=0;
	 	 		n3=0;
	 	 			media = 0;
			
			printf("Digite a primeira nota: \n ");
				scanf("%f", &n1);
				
				printf("Digite a segunda nota: \n ");
					scanf("%f", &n2);
					
					printf("Digite a terceira nota: \n ");
						scanf("%f", &n3);		
						
				media=(n1+n2+n3)/3;
		
		printf("\n A media eh: %.2f \n", media);
		
	return 0;
}

