#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight light;
    int choice;
    printf("Enter traffic light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &choice);
    light = (enum TrafficLight)choice;
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light value!\n");
    }

    return 0;
}
