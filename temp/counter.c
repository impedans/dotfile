#include <stdio.h>
#include <stdlib.h>
#include "io.h"

/*
s154009
*/

int main(void){
    int sizeofcol = 1;
    int sizeofinput = 1;
    char *input = (char*) malloc(sizeofinput * sizeof(char));
    int *collection = (int*)  malloc(sizeofcol * sizeof(int));
    collection[0] = -1;
    int counter = 0;

    syscall_writeInt(&counter, 1);

    /*Input handling (New method)*/
    while(1){
        int index = sizeofinput - 1;
        scanf("%c",&input[index]);    
        //syscall_read(&input[index], 1);        

        /*If input is a, b, or c it's saved, and more memory is allocated*/
        if(input[index] == 'a' || input[index] == 'b' || input[index] == 'c'){
            sizeofinput++;
            input = (char*) realloc(input, sizeofinput * sizeof(char));
	    
	        /*Input proccessing*/
	        if(input[index] == 'a'){
                /*Adds element to collection*/
                collection[sizeofcol - 1] = counter;

                /*Allocate memory for next entry to collection*/
                sizeofcol++;
                collection = realloc(collection, sizeofcol * sizeof(int));
            } else if(input[index] == 'c'){
                /*Removes previously allocated space, or set first value to -1*/
                if(sizeofcol > 1){
                    sizeofcol--;
                    collection = (int*) realloc(collection, sizeofcol * sizeof(int));
                } else {
                    collection[0] = -1;
                }
            }

            counter++;

        } else if(input[index] != '\n'){  /*If input is not a, b, c, or a new line, the input is finished*/
            break;
        }
    }

    free(input);

    /*Convert int to char*/


    /*Outputting*/
    for(int i = 0; i < sizeofcol - 1; i++){
        if(collection[i] >= 0){
            printf("%d,", collection[i]);
            //write(collection[i]);
        }
    }

    free(collection);

    printf("\n");
    //write("\n");
    
    return 0;
}
