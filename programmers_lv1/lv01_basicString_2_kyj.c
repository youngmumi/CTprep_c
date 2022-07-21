#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <stdbool.h>


int main( ) {
    
    int i;
    char s[10];
    
    scanf("%s", &s);
    
    for(i=0; i< strlen(s); i++){
        if( 48 >= s[i] || 57 <= s[i]) {
        	break;
		}
    }

    if(i == strlen(s)) 
        printf ("true");
    else printf ("flase");

}
