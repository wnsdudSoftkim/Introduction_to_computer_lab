int main(void)
{
    float loan, interest, monthly, balance, payment;

    printf("Enter amount of loan : ");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter interest rate : ");
    scanf("%f", &interest);
    monthly = (interest / 100.0f) / 12;

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    balance = (balance-payment) + (balance*monthly);
    
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance-payment) + (balance*monthly);
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance-payment) + (balance*monthly);
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
