#include <stdio.h>
int main() {
    int a, b;
    char op;
printf("enter first number: ");
scanf("%d", &a);

printf("enter operator(+,-,*,/): ");
scanf(" %c", &op);

printf("enter second number: ");
scanf("%d", &b);

if (op == '+'){
printf("Answer: %d\n", a+b);
}
else if (op == '-'){
printf("Answer: %d\n", a-b);
}
else if (op == '*'){
printf("Answer: %d\n", a*b);
}
else if (op == '/'){
printf("Answer: %d\n", a/b);
}
else {
printf("INVALID OPERATION!\n");
}

return 0;
}

