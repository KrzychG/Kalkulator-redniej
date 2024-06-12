#include <stdio.h>

int main() {

    while (1)
    {
        int n = 0;
        float ocena = 1, suma = 0;
        while (ocena != 0) {
            n = n + 1;
            printf("%d ocena: ", n);

            if (scanf_s("%f", &ocena) != 1) {
                printf("Niepoprawna ocena. Prosze podac liczbe.\n");
                while (getchar() != '\n');
                n--;
                continue;
            }

            if (ocena < 0 ){
                printf("Ocena nie moze byc ujemna. Sprobuj ponownie.\n");
                n--; 
                continue;
            }

            suma = suma + ocena;
        }
        if (suma == 0)
            printf("Nie mozna wyliczyc sredniej. Sproboj ponownie.\n");
        else
        {
            float srednia = suma / (n - 1);
            printf("Twoja srednia wynosi: %.2f", srednia);
            break;
        }
            

    }


    return 0;
}
