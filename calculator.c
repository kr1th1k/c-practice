#include <stdio.h>
int main(void) {
    int result;
    char operand;
    int next_num;
    if (scanf("%d", &result) != 1) {
        return 0;
    }
    while (1) {
        if (scanf(" %c", &operand) != 1) {
            break;
        }
        if (operand == '=') {
            printf("%d\n", result);
            break;
        }
        switch (operand) {
            case '+':
                scanf("%d", &next_num);
                result += next_num;
                break;
            case '-':
                scanf("%d", &next_num);
                result -= next_num;
                break;
            case '*':
                scanf("%d", &next_num);
                result *= next_num;
                break;
            case '/':
                scanf("%d", &next_num);
                if (next_num == 0) {
                    printf("Error: Division by zero\n");
                    return 0;
                }
                result /= next_num;
                break;
            case '%':
                scanf("%d", &next_num);
                if (next_num == 0) {
                    printf("Error: Division by zero\n");
                    return 0;
                }
                result %= next_num;
                break;
            default:
                printf("Please choose from the available operands\n");
                while (getchar() != '\n');
                break;
        }
    }

    return 0;
}