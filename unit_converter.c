#include<stdio.h>
#include<stdlib.h>

void km_mi(float km, float mi) {
    if (mi == 0) {
        printf("%.2f km = %.2f mi\n", km, km * 0.621371);
    } else if (km == 0) {
        printf("%.2f mi = %.2f km\n", mi, mi / 0.621371);
    } else {
        printf("Please enter a valid value\n");
    }
}
void kg_lb(float kg, float lb) {
    if (lb == 0) {
        printf("%.2f kg = %.2f lb\n", kg, kg * 2.20462);
    } else if (kg == 0) {
        printf("%.2f lb = %.2f kg\n", lb, lb / 2.20462);
    } else {
        printf("Please enter a valid value\n");
    }
}
void c_f(float c, float f) {
    if (f == 0) {
        printf("%.2f C = %.2f F\n", c, (c * 9.0 / 5.0) + 32);
    } else if (c == 0) {
        printf("%.2f F = %.2f C\n", f, (f - 32) * 5.0 / 9.0);
    } else {
        printf("Please enter a valid value\n");
    }
}
int main(){
    float kg, m, gm, km, mi, lb, c, f;
    int choice , i=1;
    printf("\n\n.....Welcome to the unit converter.....\n\n");
    for (i==1; i>0; i++){
        printf("\nPlease Select the conversion you want to do : \n");
        printf("1. kg to lb       2.lb to kg\n");
        printf("3. km to miles    4.miles to km\n");
        printf("5. C to F         6.F to C\n");
        printf("7. exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter the value in KG: ");
                scanf("%f", &kg); // Use %f for float
                kg_lb(kg, 0);
                break;
            case 2:
                printf("\nEnter the value in LB: ");
                scanf("%f", &lb); // Use %f for float
                kg_lb(0, lb);
                break;
            case 3:
                printf("\nEnter the value in KM: ");
                scanf("%f", &km); // Use %f for float
                km_mi(km, 0);
                break;
            case 4:
                printf("\nEnter the value in MI: ");
                scanf("%f", &mi); // Use %f for float
                km_mi(0, mi);
                break;
            case 5:
                printf("\nEnter the value in C: ");
                scanf("%f", &c); // Use %f for float
                c_f(c, 0);
                break;
            case 6:
                printf("\nEnter the value in F: ");
                scanf("%f", &f); // Use %f for float
                c_f(0, f);
                break;
        }
        if (choice == 7) {
            printf("\nMade by Sahil\n");
            exit(0);
        }
    }
    return 0;





}










