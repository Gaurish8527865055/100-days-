#include <stdio.h>

int main() {
    enum Months {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("%s has %d days\n", monthNames[i], days[i]);
    }

    return 0;
}
