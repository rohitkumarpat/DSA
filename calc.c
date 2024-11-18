#include <stdio.h>
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
int rem(int a, int b){
    return a%b;
}
int tentopower(int a){
    int res=1;
    for(int i=1;i<=a;i++){
        res*=10;
    }
    return res;
}
float factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

float power(float x, int n) {
 float result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

float sinx(float x, int terms) {
  float result = 0.0;
    for (int n = 0; n < terms; ++n) {
        result += (power(-1, n) * power(x, 2 * n + 1)) / factorial(2 * n + 1);
    }
    return result;
}

float factorial1(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial1(n - 1);
    }
}

float power1(float x, int n) {
    float result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

float cosx(float x, int terms) {
    float result = 0.0;
    for (int n = 0; n < terms; ++n) {
        result += (power1(-1, n) * power1(x, 2 * n)) / factorial1(2 * n);
    }
    return result;
}


float tanx(float x, int terms) {
    return sinx(x, terms) / cosx(x, terms);
}
float secx(float x, int terms) {
    return 1.0 / cosx(x, terms);
}

float cscx(float x, int terms) {
    return 1.0 / sinx(x, terms);
}

float cotx(float x, int terms) {
    return 1.0 / tanx(x, terms);
}
int main(){
    float a,b;
    int x;
    int n=1;
    int choice;
   

    while(n==1){
    printf("\nEnter 1 to add\nEnter 2 to substract \nEnter 3 to multiply \nEnter 4 to divide \nEnter 5 to get remiander \nEnter 6 for 10^(x)\nEnter 7 get value of sinx\nEnter 8 to get value of cosx\nEnter 9 to get value of tanx\n Enter 10 for secx\nEnter 11 to get value of cosecx\nEnter 12 to get value of cotx\n Enter 13 to exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter the number 1: ");
        scanf("%f", &a);
        printf("Enter the number 2: ");
        scanf("%f", &b);
        printf("%f\n", add(a,b));
        break;
        case 2:
        printf("Enter the number 1: ");
        scanf("%f", &a);
        printf("Enter the number 2: ");
        scanf("%f", &b);
        printf("%f\n", sub(a,b));
        break;
        case 3:
        printf("Enter the number 1: ");
        scanf("%f", &a);
        printf("Enter the number 2: ");
        scanf("%f", &b);
        printf("%f\n", mul(a,b));
        break;
        case 4:
        printf("Enter the number 1: ");
        scanf("%f", &a);
        printf("Enter the number 2: ");
        scanf("%f", &b);
        if(b==0)
            printf("Can't divide by zero\n");
        else
            printf("%f\n", div(a,b));
        break;        
        case 5:
        printf("Enter the number 1: ");
        scanf("%f", &a);
        printf("Enter the number 2: ");
        scanf("%f", &b);
        printf("%d\n", rem(a,b));
        break;
        case 6:
        printf("Enter the power of 10: ");
        scanf("%d",&x);
        printf("%d\n", tentopower(x));
        break;
        case 7: {
        float angle_degrees;
        printf("Enter the angle in degrees: ");
        scanf("%f", &angle_degrees);
        float angle_radians = angle_degrees * 3.14 / 180.0;
        float result = sinx(angle_radians, 10);
         printf("sin(%f degrees) = %f\n", angle_degrees, result);
        }
        break;
        case 8: {
       float angle_degrees;
       printf("Enter the angle in degrees: ");
       scanf("%f", &angle_degrees);
       float angle_radians = angle_degrees * 3.14 / 180.0;
       float result = cosx(angle_radians, 10);
       printf("cos(%f degrees) = %f\n", angle_degrees, result);
        }
        case 9: {
         float angle_degrees;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle_degrees);
    float angle_radians = angle_degrees * 3.14/ 180.0;
    float result = tanx(angle_radians, 10);
    printf("tan(%f degrees) = %f\n", angle_degrees, result);  

        }
        case 10: {
            float angle_degrees;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle_degrees);
    float angle_radians = angle_degrees * 3.141/ 180.0;
    float result = secx(angle_radians, 10);
    printf("sec(%f degrees) = %f\n", angle_degrees, result);
        }
        case 11:{
             float angle_degrees;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle_degrees);
    float angle_radians = angle_degrees * 3.14 / 180.0;
    float result = cscx(angle_radians, 10);
    printf("csc(%f degrees) = %f\n", angle_degrees, result);
        }
        case 12: {

                float angle_degrees;
    printf("Enter the angle in degrees: ");
    scanf("%f", &angle_degrees);
    float angle_radians = angle_degrees * 3.14 / 180.0;
    float result = cotx(angle_radians, 10);
    printf("cot(%f degrees) = %f\n", angle_degrees, result);
        }
        case 13:
        n=0;
        break;
        default:
        printf("Enter a valid operation\n");
    }
    }
    printf("Exited! Thank you");
}
