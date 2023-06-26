#include<stdio.h>
#include<conio.h>

void main(){
int Choice,English,Hindi,Gujarati;
clrscr();
printf("press 1 for English\n");
printf("press 2 for Hindi\n");
printf("prees 3 for Gujarati\n");
printf("Enter your choice: ");
scanf("%d",&Choice);
switch(Choice){
case 1:
    printf("press 1 for internet recharge\n");
    printf("press 2 for top-up recharge\n");
    printf("press 3 for special recharge\n");
    printf("Enter your choice: ");
    scanf("%d",&English);
    switch(English){
    case 1:
      printf("You have successfully done internet recharge\n");
      break;
    case 2:
      printf("You have successfully done top-up recharge\n");
      break;
    case 3:
      printf("You have successfully done special recharge\n");
      break;
    default:
      printf("Not available...");
      break;
    }
    break;

case 2:
    printf("internet recharge ke liye 1 dabaiye\n");
    printf("top-up recharge ke liye 2 dabaiye\n");
    printf("special recharge ke liye 3 dabaiye\n");
    printf("Enter your choice: ");
    scanf("%d",&Hindi);
    switch(Hindi){
    case 1:
      printf("Aapne safaltapurvak internet recharge kar liya he\n");
      break;
    case 2:
      printf("Aapne safaltapurvak top-up recharge kar liya he\n");
      break;
    case 3:
      printf("Aapne safaltapurvak special recharge kar liya he\n");
      break;
    default:
      printf("Uplabdh nahi he...");
      break;
    }
    break;

case 3:
    printf("internet recharge mate 1 dabavo\n");
    printf("top-up recharge mate 2 dabavo\n");
    printf("special recharge mate 3 dabavo\n");
    printf("Enter your choice: ");
    scanf("%d",&Gujarati);
    switch(Gujarati){
    case 1:
      printf("Tame safaltapurvak internet recharge karavyu chhe\n");
      break;
    case 2:
      printf("Tame safaltapurvak top-up recharge karavyu chhe\n");
      break;
    case 3:
      printf("Tame safaltapurvak special recharge karavyu chhe\n");
      break;
    default:
      printf("Uplabdh nathi....");
      break;
    }
    break;
    }
getch();
}