#include<stdio.h>
//Function to calculate area of triangle
//Function definition
float triangleArea(float base, float height){
    return 0.5 * base * height;
}
//Main function
int main(){
    float base, height,area;
    printf("Enter base of the triangle: ");
    scanf("%f", &base);
    printf("Enter height of the triangle: ");
    scanf("%f", &height);
    area = triangleArea(base, height);//Function call
    printf("Area of the triangle: %.2f\n", area);
    return 0;
}