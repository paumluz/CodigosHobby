#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
 float n1, n2, n3, maior, menor, igual1, igual2, igual3;
 
 printf(" Digite um numero: \n");
 scanf("%f", &n1);
             
             printf("\n Digite o segundo numero: \n");
             scanf("%f", &n2);
    
 printf("\n Digite o terceiro numero: \n");
 scanf("%f", &n3);
 
 if(n1>n2 && n1>n3)
 {
  maior = n1;         
  }
              else if(n2>n1 && n2>n3)
              {
                   maior =n2;
              }
 
 else if(n3>n1 && n3>n2)
 {
  maior =n3;
  }
   
   if(n1<n2 && n1<n3)
   {
            menor = n1;
   }
   
            else if(n2<n1 && n2<n3)
            {
            menor = n2;
             }                
            
               else if(n3<n1 && n3<n2)
               {
               menor = n3;
               }  
               
               
                  if(n1==n2 && n1<n3)
                  {
                  menor = n1;
                  maior = n3;
                  printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n1, n2);
                  }
    			
				  if(n1==n2 && n1>n3)
                  {
                  menor = n3;
                  maior = n1;
                  printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n1, n2);
                  }
    			
    			
                   else if(n1==n3 && n1<n2)
                   {
                   menor = n1;
                   maior = n2;   
                   printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n1, n3);
                   }
               
                                                    
                          else if(n1==n3 && n1>n2 )
                          {
                          menor = n2;
                          maior = n1;     
                          printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n1, n3);
                          }                                          
                                                                                                                                            
                                   else if(n2==n3 && n2>n1  )
                                   {
                                   menor = n1;
                                   maior =  n2;     
                                   printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n3, n2);
                                   }
                                   
                          else if(n2==n3 && n2<n1  )
                          {
                          menor = n2;
                          maior = n1;     
                          printf("\n Numeros iguais: %.2f e %.2f ocorrem 2 vezes!\n", n2, n3);
                          }
                          
                     else if(n1==n2 && n1==n3  )
                          {
                          menor = n1;
                          maior = n1;     
                          printf("\n Numeros iguais: %.2f e %.2f e %.2f ocorrem 3 vezes!\n", n1, n2, n3);
                          }     
                          
     printf("\n Maior: %.2f  e  Menor %.2f \n", maior, menor);
     system("pause");
     return 0; 

}                                                           

                                                            
