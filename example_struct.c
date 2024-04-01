#include <stdio.h>
int main(void){
    // Declare struct 

    #define MODEL_LEN 25 

    struct part { 

        int number; 

        char model[MODEL_LEN+1]; 

        int bay_location; 

    }; 

 

// Make new members, called hammer and spanner, of type part 

    struct part hammer = {0, "Ultra 5001", 1}; 

    struct part spanner = {0, "Megaspan 2000", 2}; 
    struct { 

        double real, imaginary; 

    } 
    c1 = {1.0, 1.0}, c2 = {1.0, 0.0}, c3={0,0}; 

    c3.real = c1.real + c2.real; 

    c3.imaginary = c1.imaginary + c2.imaginary; 

    printf("c3 = %.2f + %.2fi\n", c3.real, c3.imaginary); 
    return 0 ;
    
}