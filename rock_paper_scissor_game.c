#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(0));
   int user_in ;
   printf("Enter your choice (0 for rock, 1 for paper, 2 for scissors):");
   scanf("%d",&user_in);
   int comp_in =(rand() % (3));
   printf("Computer chose : %d\n",comp_in);
   if(comp_in == 0 && user_in==1){
    printf("You Win!");
   }
   else if(comp_in ==1 && user_in==2){
    printf("You Win!");
   }
   else if(comp_in == 2 && user_in==0){
    printf("You Win!");
   }
   else{
    printf("Better Luck Next Time!");
   }
;


}