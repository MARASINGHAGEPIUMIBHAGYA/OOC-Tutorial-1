#include <stdio.h>

int main() {
    int distance;
    float amount;
    
    printf("Enter the distance travelled: ");
    scanf("%d", &distance);
    
    if (distance <= 30) {
        amount = distance * 50;
    } else {
        amount = 30 * 50 + (distance - 30) * 40;
    }
    
    printf("Amount to be paid: %.2f", amount);
    
    return 0;
}