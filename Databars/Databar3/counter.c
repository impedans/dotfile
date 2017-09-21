#include <stdio.h>

int main(void){
    char *input = malloc(sizeof(char));
    int *collection = malloc(sizeof(int));
    collection[0] = -1;
    int counter = 0;
    int i;
    
    /*Input handling*/
    while(true){
        scanf("%c",&input[i]);    
        input = realloc(input, sizeof(char));

        if(input[i] != 'a' || 'b' || 'c'){
            i = 0;
            return;
        }
    }

    /*Input proccessing*/
    for(i=0, i < sizeof(input)/sizeof(char), i++){
        if(input[i] == 'a'){
            collection[sizeof(collection)/sizeof(int) - 1] = counter;
            realloc(collection, sizeof(int));

            counter++;
        } else if(input[i] == 'b'){
            counter++;
        } else if(input[i] == 'c'){
            /*Delete element from collection*/
            collection[sizeof(collection)/sizeof(int) - 2] = -1;

            counter++;
        }
    }

    /*Outputting*/
    for(i = 0, i <= sizeof(collection)/sizeof(int) - 1, i++){
        if(collection[i] >= 0){
            printf("%d,", collection[i]);
        }
    }

    return 0;
}
