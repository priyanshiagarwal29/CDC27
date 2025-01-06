#include<stdio.h>
#include<limit.h>
#include<math.h>

void findTwoNonRepeating(int arr[], int size) {
    int xorVal = 0, x = 0, y = 0, setBit;
    for (int i = 0; i < size; i++) {
        xorVal ^= arr[i];
    }

    setBit = xorVal & ~(xorVal - 1);

    for (int i = 0; i < size; i++) {
        if (arr[i] & setBit)
            x ^= arr[i];
        else
            y ^= arr[i];
    }
    printf("Non-repeating elements are: %d and %d\n", x, y);
}

int main() {
    int arr[] = {2, 4, 7, 9, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    findTwoNonRepeating(arr, size);
    return 0;
}


//Program to find whether a number is power of two

int isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 8;
    printf("%s\n", isPowerOfTwo(n) ? "Yes" : "No");
    return 0;
}


//Find position of the only set bit

int findPosition(int n) {
    if (n <= 0 || (n & (n - 1)) != 0) return -1;
    int position = 1;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }
    return position;
}

int main() {
    int n = 16;
    int pos = findPosition(n);
    if (pos == -1) 
        printf("Invalid input\n");
    else 
        printf("Position: %d\n", pos);
    return 0;
}



//Count number of bits to be flipped to convert A to B

int countBitsToFlip(int a, int b) {
    int xorVal = a ^ b, count = 0;
    while (xorVal > 0) {
        count += xorVal & 1;
        xorVal >>= 1;
    }
    return count;
}

int main() {
    int a = 29, b = 15;
    printf("Bits to flip: %d\n", countBitsToFlip(a, b));
    return 0;
}



//Count total set bits in all numbers from 1 to n

int countSetBits(int n) {
    if (n == 0) return 0;
    int x = 0;
    while ((1 << x) <= n) x++;
    x--;

    int bitsUpTo2X = x * (1 << (x - 1));
    int msbFrom2X = n - (1 << x) + 1;
    int rest = countSetBits(n - (1 << x));

    return bitsUpTo2X + msbFrom2X + rest;
}

int main() {
    int n = 5;
    printf("Total set bits: %d\n", countSetBits(n));
    return 0;
}


//Calculate square of a number without using *, /, or pow()

int square(int n) {
    if (n == 0) return 0;
    if (n < 0) n = -n;

    int x = n >> 1;
    if (n & 1)
        return (square(x) << 2) + (x << 2) + 1;
    else
        return (square(x) << 2);
}

int main() {
    int n = 5;
    printf("Square: %d\n", square(n));
    return 0;
}


//Divide two integers without using multiplication, division, or mod operator


int divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX;
    if (dividend == 0) return 0;

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = dividend < 0 ? -dividend : dividend;
    divisor = divisor < 0 ? -divisor : divisor;

    int quotient = 0;
    while (dividend >= divisor) {
        int temp = divisor, multiple = 1;
        while (dividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dividend -= temp;
        quotient += multiple;
    }

    return sign * quotient;
}

int main() {
    int dividend = 43, divisor = -8;
    printf("Quotient: %d\n", divide(dividend, divisor));
    return 0;
}


//Power set

void printPowerSet(int arr[], int n) {
    int powerSetSize = pow(2, n);
    for (int i = 0; i < powerSetSize; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                printf("%d ", arr[j]);
        }
        printf("}\n");
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printPowerSet(arr, n);
    return 0;
}
