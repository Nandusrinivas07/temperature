#include <stdio.h>

int main()
 {
    float temperature;
    
    printf("Enter the current temperature in degrees Celsius: ");
    scanf("%f", &temperature);
    
    if (temperature > 30.0) {
        printf("Temperature exceeds safe limits.\n");
    }
    else if(temperature <30.0){
    	printf("temperature is within safe limits.\n");
   } 
    
    return 0;
}

