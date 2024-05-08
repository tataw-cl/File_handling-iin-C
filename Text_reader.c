#include<stdio.h> // Include the necessary header file
#include <stdlib.h>

int main(){
    //declare pointer to  file and open the file in read mode
    FILE *file = fopen("in.txt", "r"); // Declare the file pointer and open the file in read mode
    //check if file is opened successfully
    if (file==NULL) {
        printf("Cannot open file\n");
        return 1; //exit the program
    }
    //get the length of the file
    fseek(file,0,SEEK_END);
    long length = ftell(file);
    //move the file pointer to the start of the file
    fseek(file,0,SEEK_SET);
    //allocate memory to store the contents of the file
    char *text = malloc(length+1);
    //check if memory is allocated successfully
    if (text==NULL) {
        printf("Cannot allocate memory\n");
        return 1; 
    }
    //read the contents of the file
    fread(text,1,length,file);
    //add null character at the end of the text to make it a string in the text array
    text[length]='\0';
      printf("%s\n", text); // Print the content
    //close the file
    fclose(file);
    //free the allocated memory
    free(text);
    return 0;
}