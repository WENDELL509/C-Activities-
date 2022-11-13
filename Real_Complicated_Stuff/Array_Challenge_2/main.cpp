#include <stdio.h> 
  
int main() 
{ 
  int Soliva [100],n,i;
    printf("Write a C program where user will input the size and values of the array. Display the elements in reverse order then print odd and even number separately. \\");
   
    printf("SIZE OF ARRAY:"); 
    scanf("%d", &n);  
    printf("\INPUT %d ELEMENTS: \n",n); 
    for(i = 0; i < n; i++){
     printf("\Index %d : ",i);     
        scanf("%d", &Soliva[i]);
}
    printf("\\REVERSE ORDER OF ARRAY  : "); 
       for(i = n - 1; i >= 0; i--) { 

        printf("\%d ", Soliva[i]); 

    }

     printf("\\ODD ELEMENTS ARE :");

     for(i = 0; i < n; i++) {

          if(Soliva[i] % 2 != 0) {

               printf("\%d ", Soliva[i]);

          }     

     }     

     printf("\\EVEN ELEMENTS ARE:");     

     for(i = 0; i < n; i++) {     

          if(Soliva[i] % 2 == 0) {     

               printf("\%d ", Soliva[i]);     

          }     
     }     
  
    return 0;
}