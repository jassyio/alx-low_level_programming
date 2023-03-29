#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int sum, i, j;
    
    if (len1 + len2 > size_r) { // Check if result can fit in r
        return 0;
    }
    
    i = len1 - 1;
    j = len2 - 1;
    r[len1 + len2] = '\0'; // Null-terminate the result string
    
    while (i >= 0 || j >= 0) {
        sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        r[i + j + 2] = sum + '0';
    }
    
    if (carry == 1) {
        r[0] = '1';
        return r;
    } else {
        return &r[1];
    }
}

int main(void) {
    char n1[] = "123456789";
    char n2[] = "987654321";
    char r[20];
    
    char *result = infinite_add(n1, n2, r, 20);
    
    if (result == 0) {
        printf("Result cannot fit in r\n");
    } else {
        printf("Result: %s\n", result);
    }
    
    return 0;
}

