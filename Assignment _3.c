/*
  Roll No.:63
  Student Name:  Ansari Mohammed Arham Mohammed Suhail 
  Program Title:wap to find numerical aperture of optical fibre

  Task Given By:
    - Roll No. of Assignee:26
    - Assignee Name: shaikh abdul Rahim
*/
#include <stdio.h>
#include <math.h>

int main() {
    double n1, n2, na;

    // Prompt user for input
    printf("Enter the refractive index of the core (n1): ");
    scanf("%lf", &n1);
    printf("Enter the refractive index of the cladding (n2): ");
    scanf("%lf", &n2);

    // Calculate numerical aperture
    na = sqrt(n1 * n1 - n2 * n2);

    // Display the result
    printf("The numerical aperture (NA) of the optical fiber is: %lf\n", na);

    return 0;
}
/*
output:
Enter the refractive index of the core (n1): 1.45
Enter the refractive index of the cladding (n2): 1.30
The numerical aperture (NA) of the optical fiber is: 0.417828
  */
