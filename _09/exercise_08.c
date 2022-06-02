#include <stdio.h>

typedef struct bank
{
    int accountNo;
    char holderName[50];
    float balance;
} bank;

void accountDetails(bank user[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The user name is %s and this user bank account number is %d and balance is %f.\n", user[i].holderName, user[i].accountNo, user[i].balance);
    }
}

int main()
{
    bank user[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter User %d account holder name: ", i + 1);
        gets(user[i].holderName);

        printf("Enter User %d account number: ", i + 1);
        scanf("%d", &user[i].accountNo);

        printf("Enter User %d account balance: ", i + 1);
        scanf("%f", &user[i].balance);
    }

    for (int i = 0; i < 3; i++)
    {
        accountDetails(user);
    }
    return 0;
}