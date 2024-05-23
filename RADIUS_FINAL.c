#include<stdio.h>

int main() {
for (;;) { 

	//ask user for radius 
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    
	//calculation of area   
    float pi = 3.1415926535; //assigned value of pi
    float area = pi*radius*radius;
    
    printf("The area of the given circle with radius %f is %f\n", radius, area);
    
}
    return 0;
    
    //PLEASE RUN IN DEV C. TRIED TO RUN IN EMBARCADERO BUT IT ONLY ASKED FOR RADIUS THEN FINISHED THE WHOLE PROCESS.

}

// THE FOLLOWING CODE IS THE FIRST VERSION:

//#include <stdio.h>

//int main() {

    //float radius;
    //int squared = pow(radius, 2)  //TRIED TO USE POW() FUNCTION FOR R^2
    //printf("Enter radius of circle:");
    //scanf("%d", &radius);
   // printf("The radius of the circle is %d\n" , radius);

    //float pi = 3.14;
    //float area = pi*radius;
   // printf("The area of the given circle is %f", area);

    //return 0;

//}
