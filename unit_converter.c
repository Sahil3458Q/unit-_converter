#include<stdio.h>

void kg_gm(float kg, float gm) {
    if (gm == 0) {
        printf("%.2f kg = %.2f gm\n", kg, kg * 1000.0);
    } else if (kg == 0) {
        printf("%.2f gm = %.2f kg\n", gm, gm / 1000.0);
    } else {
        printf("Please enter a valid value\n");
    }
}

void km_m(float km, float m) {
    if (m == 0) {
        printf("%.2f km = %.2f m\n", km, km * 1000.0);
    } else if (km == 0) {
        printf("%.2f m = %.2f km\n", m, m / 1000.0);
    } else {
        printf("Please enter a valid value\n");
    }
}

int main() {
    float kg, m, gm, km ;
    int choice , i=1;
    printf("\n\n.....Welcome to the unit converter.....\n\n");
    for (i==1; i>0; i++){

       
        printf("\nPlease Select the conversion you want to do : \n");
        printf("1. kg to gm    2.gm to kg\n");
        printf("3. km to m     4.m to km\n");
        printf("5. exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter the value in KG: ");
                scanf("%f", &kg); // Use %f for float
                kg_gm(kg, 0);
                break;
            case 2:
                printf("\nEnter the value in GM: ");
                scanf("%f", &gm); // Use %f for float
                kg_gm(0, gm);
                break;
            case 3:
                printf("\nEnter the value in KM: ");
                scanf("%f", &km); // Use %f for float
                km_m(km, 0);
                break;
            case 4:
                printf("\nEnter the value in M: ");
                scanf("%f", &m); // Use %f for float
                km_m(0, m);
                break;


        }
        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }

    }
    

    return 0;
}