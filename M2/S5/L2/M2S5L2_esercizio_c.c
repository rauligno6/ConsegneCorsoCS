#include <stdio.h>

//Optional exercise
//Mean calculation

int main () {

int first_number;
int second_number;
int third_number;
int mean;
float mean_d;
int square_area;
int circle_area;
int triangle_area;
float square_area_d;
float circle_area_d;
float triangle_area_d;

printf ("Insert three numbers, are you ready?\n");
printf ("Insert first numbert:");
scanf ("%d", &first_number);

printf ("Insert second numbert:");
scanf ("%d", &second_number);

printf ("Insert third numbert:");
scanf ("%d", &third_number);

mean = (first_number + second_number + third_number)/3;
mean_d = (first_number + second_number + third_number)/3;

printf ("\nInteger mean result: %d\n", mean);
printf ("\nDecimal mean result: %f\n", mean_d);

//Calculating areas

square_area = mean*mean;
square_area_d = mean_d*mean_d;
circle_area = 3.14 * mean;
circle_area_d = 3.14 * mean_d;
triangle_area = (mean*mean)/2;
triangle_area_d = (mean_d*mean_d)/2;

printf ("\nInteger square area: %d\n", square_area);
printf ("\nDecimal square area: %f\n", square_area_d);

printf ("\nInteger circle area: %d\n", circle_area);
printf ("\nDecimal circle area: %f\n", circle_area_d);

printf ("\nInteger triangle area: %d\n", triangle_area);
printf ("\nDecimal triangle area: %f\n", triangle_area_d);

return 0;
}