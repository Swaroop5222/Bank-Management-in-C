#include<stdio.h>
#include<string.h>
int final_balance=2000;
int length=0;

int deposit(int);
int withdraw(int);
void balance();
int transfer(int);
int loan(int);
void create();
void pin();
void change_pin();

int main(){
    char name[30], str[20];
    unsigned long long int acc;
    int amt, dep_amt, trial=0, withdraw_amt, trans_amt, num;
printf("\t\t\t\t**WELCOME TO OUR BANK**\t\t\t\t\n");
printf("Enter your name:\n");
gets(name);
printf("Enter your account number:\n");
scanf("%llu",&acc);
sprintf(str,"%llu",acc);
length=strlen(str);
if(length!=12){
    while(trial<5){
        printf("Please enter valid account number\n");
        scanf("%llu",&acc);
        sprintf(str,"%llu",acc);
       length=strlen(str);
       if(length==12){
        while(num<10){
printf("\t\nWelcome %s\t\n",name);
printf("\tWhat do you want?\t\n");
printf("\t 1- Create your own account\n");
printf("\t 2- Check your balance\n");
printf("\t 3- Deposit amount\n");
printf("\t 4- Withdraw amount\n");
printf("\t 5- Transfer amount\n");
printf("\t 6- Apply for a loan\n");
printf("\t 7- Pin Generation\n");
printf("\t 8- Change your pin\n");
printf("\t 9- exit\n\n");
printf("Press the corresponding number to do the corresponding action\n");
printf("Enter the number: ");
scanf("%d",&num);
if(num>9){
   printf("Please enter the number which are shown in the menu\n");
}
else{
    if(num==1){
     printf("\t\t\t**ACCOUNT OPENING FORM**\n");
     create();
    }
    else if(num==2){
            balance();
        }
    else if(num==3){
            printf("\t\t\t** DEPOSIT *SECTION*\n");
        deposit(dep_amt);
    }
    else if(num==4){
        printf("\t\t\t**WITHDRAW SECTION**\n");
        withdraw(withdraw_amt);
    }
    else if(num==5){
        transfer(trans_amt);
    }
    else if(num==6){
        printf("\t\t\t**LOAN SECTION**\n");
        loan(amt);
    }
    else if(num==7){
        printf("\t\t\t**PIN GENERATION**\n");
       pin();
   }
   else if(num==8){
    printf("\t\t\t**CHANGE PIN SECTION**\n");
    change_pin();
   }
    else if(num==9){
        break;
    }
}
}

}
        trial++;
    }
    printf("You entered wrong account number\n");

}
else{
while(num<10){
printf("\t\nWelcome %s\t\n",name);
printf("\tWhat do you want?\t\n");
printf("\t 1- Create your own account\n");
printf("\t 2- Check your balance\n");
printf("\t 3- Deposit amount\n");
printf("\t 4- Withdraw amount\n");
printf("\t 5- Transfer amount\n");
printf("\t 6- Apply for a loan\n");
printf("\t 7- Pin Generation\n");
printf("\t 8- Change your pin\n");
printf("\t 9- exit\n\n");
printf("Press the corresponding number to do the corresponding action\n");
printf("Enter the number: ");
scanf("%d",&num);
if(num>9){
   printf("Please enter the number which are shown in the menu\n");
}
else{
    if(num==1){
     printf("\t\t\t**ACCOUNT OPENING FORM**\n");
     create();
    }
    else if(num==2){
            balance();
        }
    else if(num==3){
            printf("\t\t\t** DEPOSIT *SECTION*\n");
        deposit(dep_amt);
    }
    else if(num==4){
        printf("\t\t\t**WITHDRAW SECTION**\n");
        withdraw(withdraw_amt);
    }
    else if(num==5){
        transfer(trans_amt);
    }
    else if(num==6){
        printf("\t\t\t**LOAN SECTION**\n");
        loan(amt);
    }
    else if(num==7){
        printf("\t\t\t**PIN GENERATION**\n");
       pin();
   }
   else if(num==8){
    printf("\t\t\t**CHANGE PIN SECTION**\n");
    change_pin();
   }
    else if(num==9){
        break;
    }
}
}
}


return 0;
}


int deposit(int dep_amt){

    printf("Enter the amount you want to transfer\n");
    scanf("%d",&dep_amt);
    printf("You have deposited the amount successfully\n");

final_balance+=dep_amt;
printf("\t\tThe balance after you deposit is %d",final_balance);


}
int withdraw(int withdraw_amt){

printf("Enter the amount you want to withdraw\n");
scanf("%d",&withdraw_amt);
if(withdraw_amt>final_balance){
    printf("Insufficient balance\n");
    printf("The balance you have is %d",final_balance);
}
else if(withdraw_amt>=0 && withdraw_amt<=20000){
    printf("You have withdrew the amount successfully\n");
    final_balance-=withdraw_amt;
}
else{
    printf("You have already withdrew enough money for today\n");
}

}

void balance(){
printf("The balance available in the account is %d",final_balance);
}

int transfer(int trans_amt){
   unsigned long long int acc_2;
   int  trial=0;
   char str[30];
    printf("Enter the amount you want to transfer\n");
    scanf("%d",&trans_amt);
    printf("Enter the account number you want to transfer the money\n");
    scanf("%llu",&acc_2);
sprintf(str,"%llu",acc_2);
length=strlen(str);
    if(length==12){
    if(trans_amt>final_balance){
        printf("Insufficient balance to transfer amount\n");
            printf("\t\tThe balance you have after transferring your money is %d\n",final_balance);
    }
    else{
        printf("You have successfully transfered the money\n");
            final_balance-=trans_amt;
    }
    }
    else{

       while(trial<5){
        printf("please enter valid account number\n");
        scanf("%llu",&acc_2);
sprintf(str,"%llu",acc_2);
length=strlen(str);
    if(length==12){
        if(trans_amt>final_balance){
        printf("Insufficient balance to transfer amount\n");
            printf("\t\tThe balance you have after transferring your money is %d\n",final_balance);
            break;
    }
    else{
        printf("You have successfully transfered the money\n");
            final_balance-=trans_amt;
    break;
    }
    }
        printf("You have entered wrong account number. Please try again later\n");
    trial++;
       }
    }


}

void create(){
    char name1[20], father[20], mother[20], gender[10], address1[50], address2[50];
    int  mobile_number, deposit, balance, age, num, aadhar;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18){

    printf("Please enter your details in the form given below\n");

    printf("NAME:\n ");
    scanf(" %[^\n]", name1);

    printf("FATHER'S NAME:\n ");
    scanf(" %[^\n]", father);

    printf("MOTHER'S NAME:\n ");
    scanf(" %[^\n]", mother);

    printf("GENDER:\n ");
    scanf(" %[^\n]", gender);

    printf("PRESENT ADDRESS:\n ");
    scanf(" %[^\n]", address1);

    printf("PERMANENT ADDRESS:\n ");
    scanf(" %[^\n]", address2);

    printf("MOBILE NUMBER:\n ");
    scanf("%d", &mobile_number);

    printf("AADHAR NUMBER:\n ");
    scanf("%d", &aadhar);

    printf("Apply for new Debit card\n");
    printf("Press 1 for yes and 0 for no\n");
    scanf("%d",&num);
    if(num==1){
    printf("You will get your debit card cheque book through speed post\n");
    }
    printf("\t please deposit amount in your account. The minimum balance required in any account is 1000 rupees\n");
    printf("Enter the amount\n");
    scanf("%d",&deposit);
    if(deposit<1000){
        printf("Please deposit atleast 1000 or above amount\n ");
    }
    else{
        printf("Balance available in the account is %d",deposit);
    }
        printf("You have successfully created account\n");
    }
    else{
        printf("The minimum age required to create an account is 18. Since you age is below 18 you cannot create an account\n");
    }
}




int loan(int amt){
       char type[50], agree[5], yes='y', no='n';
       int amount, num, age;
printf("What type of loan do you want?\n");
       printf("\t 1-Personal loan\n");
       printf("\t 2-Business loan\n");
       printf("\t 3-Education loan\n");
       printf("\t 4-Agriculture loan\n");
       printf("\t 5-Home loan\n");
       printf("\t 6-Student loan\n");
       printf("Enter your age\n");
       scanf("%d",&age);
if(age>20){
 printf("You can apply for a loan now\n");
     printf("Press the corresponding number to do the corresponding action\n");
      printf("Enter the number: ");
     scanf("%d",&num);
     if(num>6){
        printf("Please enter the valid number to perform action\n");
     }
     else{
     printf("Enter the amount\n");
     scanf("%d",&amount);
      if(num==1){
         if(amount>=500000){
            printf("\t\tYou have to pay monthly interest of 10%%\n");
         }
         else{
            printf("\t\tYou have to pay monthly interest of 12%%\n");
         }
     }
     else if(num==2){
        if(amount>=100000){
            printf("\t\tYou have pay monthly interest of 15%%\n");
        }
        else{
            printf("\t\tYou have to pay monthly interest of 20%%\n");
        }
     }
     else if(num==3){
        if(amount>=500000){
            printf("\t\tYou have to pay monthly interest of 5%%\n");
        }
        else{
            printf("\t\tYou have to pay monthly interest of 10%%");
        }
     }
     else if(num==4){
        if(amount>=500000){
            printf("\t\tYou have to pay monthly interest of 3%%\n");
        }
        else{
            printf("\t\tYou have to pay monthly interest of 6%%\n");
        }
     }
     else if(num==5){
        if(amount>=500000){
            printf("\t\tYou have to pay monthly interest of 8%%\n");
        }
        else{
            printf("\t\tYou have to pay monthly interest of 12%%\n");
        }
     }
     else{
        if(amount>=300000){
            printf("\t\tYou have to pay monthly interest of 5%%\n");
        }
        else{
            printf("\t\tYou have to pay monthly interest of 7%%\n");
        }
     }
    printf("\nIf you don't pay the interest in time or if you don't repay the loan you will be in jail for 7 years and all your assets will be in control of the bank\n");
}
}
             else{
                printf("You can't apply for a loan because of age restriction\n ");
                printf("The minimum age required to apply for a loan is 21");
             }

     }

     void pin(){
                int pin, choice, i=1, count=0;
   printf("Enter your new pin\n");
   scanf("%d",&pin);
      while(pin>0){
    pin=pin/10;
    count++;
   }
   if(count==4){
        printf("This is permanent and you cannot change it further\n ");
           while(i>0){
        printf("Are you sure you want to proceed?\n");
        printf("Press 1 for yes and 0 for no\n");
        scanf("%d",&choice);
                if(choice==1){
            printf("Your pin generation is completed. You can use it in the ATM\n");
            break;
        }
        else{
            int count=0;
            printf("Please re-enter your new pin\n");
            scanf("%d",&pin);
            while(pin>0){
            pin=pin/10;
            count++;
           }
            if(count!=4){
                 printf("Your pin must be a 4 digit number. Please try again later\n");
             break;
            }
        }
        i++;

          }
        }

else{
      printf("Your pin must be a 4 digit number. Please try again later\n");
   }
     }

void change_pin(){
int new_pin, i=1, choice, count=0, old;
printf("Enter your old pin\n");
scanf("%d",old);
printf("Set your new pin\n");
scanf("%d",&new_pin);
      while(new_pin>0){
    new_pin=new_pin/10;
    count++;
   }
   if(count==4){
        printf("This is permanent and you cannot change it further\n ");
           while(i>0){
        printf("Are you sure you want to proceed?\n");
        printf("Press 1 for yes and 0 for no\n");
        scanf("%d",&choice);
                if(choice==1){
            printf("Your pin is changed. You can use it in the ATM\n");
            break;
        }
        else{
                int count=0;
            printf("Please re-enter your new pin\n");
            scanf("%d",&new_pin);
            while(new_pin>0){
            new_pin=new_pin/10;
            count++;
           }
            if(count!=4){
                 printf("Your pin must be a 4 digit number. Please try again later\n");
             break;
            }

        }
        i++;

          }

}
}



































