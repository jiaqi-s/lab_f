// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h"

// Main function 
int main(void) {
    
    // Read user input
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    //user_input[strcspn(user_input, "\n")] = '\0';
    //printf(user_input);
	//printf(country_codes[237].domain);
    // Enter your code under here
    // Use strcmp(user_input, country_codes[0].domain) to compare the text in user_input to the text in country_codes[0].domain.
    //if (strcmp(user_input,country_codes[237].domain)==0){
    //    printf(country_codes[237].country);
    //}
    if (user_input[0] != '.'){
        printf("Error! The first character entered should be a .");
        exit(0);
    }

    int state =0;

    for (int i=0;i<258;i++){
        if(strcmp(user_input, country_codes[i].domain)==0){
            printf("This is the domain for: %s",country_codes[i].country);
            state =1;
            break;
        }
    }

    if(state == 0){
        printf("Domain not found.");
    }
    // Do not edit below here
    return 0;
}
