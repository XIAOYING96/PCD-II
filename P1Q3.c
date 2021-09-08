#include<stdio.h>
#pragma warning(disable:4996)

struct Time {
    int hour, minute;
}current, nextMin;

int main() {
    printf("Enter the hour and minute >");
    scanf("%d %d", &current.hour, &current.minute);

    while (current.hour >= 13 && current.minute) {
        printf("Invalid, Please try again enter the correct current time >\n");
        scanf("%d %d", &current.hour, &current.minute);
    }

    nextMin.minute = current.minute + 1;
    nextMin.hour = current.hour;

    if (nextMin.minute >= 60) {
        nextMin.minute = nextMin.hour + 1;
        nextMin.minute = current.minute - 60;
    }
        if (nextMin.hour >12) {
            nextMin.hour = nextMin.hour-12;
        }

    printf("It is now %02d:%02d.Next minute it will be %02d:%02d\n", current.hour, current.minute, nextMin.hour, nextMin.minute);
    return 0;
}