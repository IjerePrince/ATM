#include <stdio.h>


int main(void){

     char name[100] = "";
     int pin;
     int option;
     char currency = '$';
     int amount = 1000;
     int withdraw = 0;
     int remain = 0;
     int deposit = 0;


    
printf("Enter your PIN: ");
    scanf("%d", &pin);
    
    if(pin != 1111){
        while(pin != 1111){
        printf("WRING PIN! Enter your PIN: ");
    scanf("%d", &pin);
        }
    }

    switch(pin){
        case 1111:
        printf("Welcome, Choose an option: \n");
        printf("1. Check Balance.\n");
        printf("2. Withdraw Cash.\n");
        printf("3. Deposit Cash.\n");
        printf("4. Exit.\n");
        scanf("%i", &option);

            switch(option){
                case 1:
                printf("Your Current Account Balance is %c%i", currency, amount);
                break;
                
                case 2:
                printf("How much would you like to withdraw?: ");
                scanf("%i", &withdraw);

                if(withdraw < 0){
                    printf("Enter valid amount!\n");
                    return 1;
                }
                else if(withdraw <= amount)
                {
                    remain = amount - withdraw;
                    printf("You have successfuly withdrawn %c%i and your new Account Balance is %c%i\n", currency, withdraw, currency, remain);
                }
                else if(withdraw > amount){
                    printf("Insufficient Balance.\n");
                }
                break;

                 case 3:
        printf("How much would you like to deposit?: ");
        scanf("%i", &deposit);

              if (deposit > 0){
                amount = amount + deposit;
        printf("You have successfuly deposited %c%i and your new Account Balance is %c%i\n", currency, deposit, currency, amount);
              }
        else if (deposit < 0){
            printf("Enter valid amount.\n");
        }
        else{
            printf("Enter Valid Amount!\n");
        }
        break;

                case 4:
                printf("DEAR %s THANK YOU FOR USING OUR BANKING SERVICES. GOODBYE!\n", name);
                return 1;
            
            break;

        

        default:
        printf("WRONG PIN!");   
    }
}

   
}