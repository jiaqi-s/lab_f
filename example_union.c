#include <stdio.h> 

int main(void) 

{ 

    union { 

    char c; 

    double d; 

} info; 

printf("The sizeof the union = %d\n", sizeof (info)); 
printf("After setting c\n"); 

info.c = 'a'; 

printf("Character is: %c \n", info.c); 

printf("Double is: %f \n", info.d); 

 

printf("After setting d\n"); 

info.d = 9.99e20; 

printf("Character is: %c \n", info.c); 

printf("Double is: %f \n", info.d);  
 

printf("After setting c again\n"); 

info.c = 'b'; 

printf("Character is: %c \n", info.c); 

printf("Double is: %f \n", info.d);

return 0; 

} 