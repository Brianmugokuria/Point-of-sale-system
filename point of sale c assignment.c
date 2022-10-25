//Point-of-sale system
#include<stdio.h>
void main(void){
int code, qty;
float price, amt, totalAmt, cash;
char addAnother;
//do-while loop -> post-test
//while loop -> pre-test
//for loop -> pre-test
do{
system("cls");
 printf("=====================/n/n");
 printf("PIZZA BOX OVERLOAD MENU/n");
 printf("=====================/n/n");
 printf("[1]Hawaiian overload/t/tphp 350.00/n");
 printf("[2]Gheese overload/t/tphp 320.00/n");
 printf("[3]All-veggie overload/t/tphp 350.00/n");
 printf("[4]All-meat overload/t/tphp 370.00/n");
 printf("[5]All-in overload/t/tphp 400.00/n");

 printf("/nEnter code/t: ");
 scanf("%d,", &code);
 printf("/nEnter Quantity/t: ");
 scanf("%d", &qty);
 switch(code){
    case 1: price = 350.00;
            break;
    case 2: price = 320.00;
            break;
    case 3: price = 350.00;
            break;
    case 4: price = 370.00;
            break;
    case 5: price = 4oo.oo;
            break;
            }
  amt = price * qty;
 700 = 350 * 2;
 printf("/nAmount/t/t: %.2f", amt);

 total Amt = totalAmt + amt;
 printf("/nTotal Amount/t: %.2f", totalAmt);
 printf("/nAdd another order(y/n?");
 addAnother = getch();
 }while(addAnother == 'y' || addAnother == 'y')
 do;
 printf("/nCash Tendered: ");
 scanf("%f", &cash);
 while(cash <totalAmt);

 change = cash - totalAmt;
 printf("/nChange/t/t: %2f", change);
