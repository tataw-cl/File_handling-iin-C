#include<stdio.h>
int main(){
    FILE *player;
    player=fopen("first.txt", "w");
    //We have created a file pointer and assigned it to a file called first.txt
    //This line will create a blank text file called first.txt in the same directory as the program in write mode
    //append mode is used to add data to the end of  the file
    fputs("Hello world. ", player);
    //This line will write the string "Hello world" in the file first.txt
    fputs("I am learning file handling in C programming language \n", player);
    //So technically, it works simil,ar to printf function.
    fprintf(player,"%s",  "I am learning file handling in C programming language using the fprintf function \n");
    //now, using for loop, we will write the numbers from 1 to 10 into the file.
    int i;
    for(i=1;i<=10;i++){
        fprintf(player, "%d \n",i);
    }
    
    fclose(player);

    return 0;
}