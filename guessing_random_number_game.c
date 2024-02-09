#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    printf("Welcome to the Guessing Game!\nI have picked a number between 1 and 100. Try to guess it.");
    int random = rand()%100;
    int user_in ;
    scanf("%d",&user_in);
    int count = 1;
    while(random != user_in){
        count++;
        if(random<user_in){
            printf("Too High.Try Again.\n");
        }
        else if(random>user_in){
            printf("Too Low.Try Again.\n");
        }
        
        scanf("%d",&user_in);
        if(random == user_in){
            printf("Congratulations! You guessed the number in %d attempts.",count);
            break;
        
    }}}
