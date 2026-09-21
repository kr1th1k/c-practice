#include <stdio.h>
/* int main(){
    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a,b);
    int c = 0;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d", a, b);
    return 0;
}
 To interchange:
        assign value of a to c, then b to a, then c to b.
*/

/* int main(){
    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d, b = %d\n", a,b);
    return 0;
}
//wasnt able to think of this. be ashamed.
*/

int main(){
    int a = 5, b = 7;
    printf("a = %d, b = %d\n", a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d, b = %d\n", a,b);
    return 0;
}