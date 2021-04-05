#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y, z;
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 0;
    char arr[20] = {0};
    char ope[3] = {0};
    char fNum[5] = {0};
    char sNum[5] = {0};
    char tNum[5] = {0};

    printf("Enter an expression: ");
    gets(arr);

    while (1) {
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
            ope[0] = arr[i];
            break;
        }
        else {
            fNum[i] = arr[i];
        }
        i++;
    }

    i++;

    while (1) {
        if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') {
            ope[1] = arr[i];
            break;
        }
        else {
            sNum[j] = arr[i];
            j++;
        }
        i++;
    }

    i++;

    while (1) {
        if (arr[i] == '0' || arr[i] == '1' || arr[i] == '2' || arr[i] == '3' || arr[i] == '4' || arr[i] == '5' || arr[i] == '6' || arr[i] == '7' || arr[i] == '8' || arr[i] == '9' || arr[i] == '.') {
            tNum[k] = arr[i];
            i++;
        }
        else break;
    }
    
    x = atof(fNum);
    y = atof(sNum);
    z = atof(tNum);

    if (ope[0] == '+') x += y;
    else if (ope[0] == '-') x -= y;
    else if (ope[0] == '*') x *= y;
    else if (ope[0] == '/') x /= y;

    if (ope[1] == '+') x += z;
    else if (ope[1] == '-') x -= z;
    else if (ope[1] == '*') x *= z;
    else if (ope[1] == '/') x /= z;

    printf("Value of expression: %f", x);
}