#include<stdio.h>
#include<stdbool.h>
int main(){
    FILE *player;
    player=fopen("first.txt", "w");
    //We have created a file pointer and assigned it to a file called first.txt
    //This line will create a blank text file called first.txt in the same directory as the program in write mode
    //append mode is used to add data to the end of  the file
   // fputs("Hello world. ", player);
    //This line will write the string "Hello world" in the file first.txt
    //fputs("I am learning file handling in C programming language \n", player);
    //So technically, it works similar to printf function.
    //fprintf(player,"%s",  "I am learning file handling in C programming language using the fprintf function \n");
    //now, using for loop, we will write the numbers from 1 to 10 into the file.
   /* int i;
    for(i=1;i<=10;i++){
        fprintf(player, "%d \n",i);
    }
    */
   int input;
   while (true)
   {
    printf("Enter an input:\n Enter -1 to end your inputting\n");
    scanf("%d", &input);
    if (input==-1)
    {
        printf("Thanks for inputting\n");
        break;
    }
    else{
        fprintf(player, "%d\n", input);
    }
    
   }

    fclose(player);

    //now, we focus on reading from a file in C
    FILE *in_player;
    in_player= fopen("first.txt", "r");
   int tracker[100];
  /*  int track=0;
    fscanf(in_player, "%d", &track);
    printf("\nThe first number in this text file is: %d\n", track);
     this will print the first number in the file that the program encounter.
     ##Note:If the first thing in the file is not a number, then it will return 
    some eronious value by the compiler, or the default "0" value set by the programmer*/
    int total,j=0;
while (fscanf(in_player, "%d",&tracker[j])!=EOF) {
    //when the fscanf function reacahes the end of the file, it'll return the value "EOF" which can be sued as a stopping point
j+=1;
}
for (int i = 0; i < j; i++) {
printf("The value at line %d is %d\n",i+1,tracker[i] );
total+=tracker[i];
}
printf("The averaqage of all these numbers is: %d\n", total/j);
    fclose(in_player);

//Now let's focus on reading from files using the fgets function
player=fopen("in.txt", "r");
char buffer[256];
fgets(buffer,256,player);
printf("Buffer: %s\n", buffer);
fclose(player);

    return 0;
}