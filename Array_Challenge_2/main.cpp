
#include <stdio.h>
int main() {
int soliva[20], j, i, sum = 0 ;
int n{},a;

printf("INPUT THE SIZE OF ARRAY:\n"); 
scanf("%d",&n);
printf("INPUT THE VALUES:\n"); 
for(i = 0; i < n; i++) 
scanf("%d",&soliva[i]);

for(i = 0; i < n; i++)
sum = sum + soliva[i]; 
printf("SUM OF ARRAY: %d\n",sum);
for (i = 0; i < n; ++i){
for (j = i +1; j < n; ++j)
{
if (soliva[i] < soliva[j]){
a = soliva[i]; 
soliva[i] = soliva[j]; 
soliva[j] = a;
}
}

}
printf ("Sorted Numbers are: \n");
for (i = 0; i < n; ++i) {
printf (" %d" , soliva[i] );
}


}