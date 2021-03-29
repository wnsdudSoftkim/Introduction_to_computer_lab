// Add a loop to the broker.c program of Section 5.2
// so that the user can enter more than one trade and the program will calculate the commission on each.
// The program should terminate when the user enters 0 as the trade value

#include <stdio.h>

int main_6_4()
{
    float commission, value = 1;

    while (value != 0)
    {
        printf("Enter value of trade: ");
        scanf_s("%f", &value);

        if (value < 2500.00f)
            commission = 30.00f + 0.017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + 0.0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + 0.0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + 0.0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + 0.0011f * value;
        else
            commission = 255.00f + 0.0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        if (value != 0)
            printf("Commission: $%.2f\n\n", commission);
        else
            break;
    }

    return 0;

}