#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// #include <age-caculator.c>

// Function to handle equation solving
void equationCalculator()
{

    // Function to solve a set of linear equations
    void solveSimpleEquation()
    {
        int a, b, c, d, e, f;
        printf("Enter the values of a, b, c, d, e, f: ");
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

        // Calculating determinant
        int determinant = a * e - b * d;

        if (determinant != 0)
        {
            float x = (c * e - b * f) / (float)determinant;
            float y = (a * f - c * d) / (float)determinant;

            printf("Solution: x = %f, y = %f\n", x, y);
        }
        else
        {
            printf("No unique solution exists for this set of equations.\n");
        }
    }

    // Function to solve a quadratic equation
    void solveComplexEquation()
    {
        int a, b, c;
        printf("Enter the values of a, b, c: ");
        scanf("%d %d %d", &a, &b, &c);

        // Calculating determinant
        int determinant = b * b - 4 * a * c;

        if (determinant > 0)
        {
            float root1 = (-b + sqrt(determinant)) / (2.0 * a);
            float root2 = (-b - sqrt(determinant)) / (2.0 * a);
            printf("Roots are real and different: x1 = %f, x2 = %f\n", root1, root2);
        }
        else if (determinant == 0)
        {
            float root = -b / (2.0 * a);
            printf("Roots are real and same: x = %f\n", root);
        }
        else
        {
            float realPart = -b / (2.0 * a);
            float imaginaryPart = sqrt(-determinant) / (2.0 * a);
            printf("Roots are complex and different: x1 = %f + %fi, x2 = %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        }
    }

    int choice;

    do
    {
        // Menu for selecting equation solving
        printf("\n\tEquation Solving Menu\n");
        printf("Which type of equation do you want to solve?\n\n");
        printf("Press 1 to Solve a Simple Equation\n");
        printf("Press 2 to Solve a Quadratic Equation\n");
        printf("Press 3 to Return to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            solveSimpleEquation();
            break;
        case 2:
            solveComplexEquation();
            break;
        case 3:
            printf("Returning to Main Menu...\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 3);
}

// Function to handle area calculations
void areaCalculator()
{

    // Function to calculate area of a triangle
    // void calculateTriangleArea()
    // {
    //     float base, height;
    //     printf("Enter the base of the triangle: ");
    //     scanf("%f", &base);
    //     printf("Enter the height of the triangle: ");
    //     scanf("%f", &height);
    //     float area = 0.5 * base * height;
    //     printf("Area of the triangle: %.2f square units\n", area);
    // }

    void calculateTriangleArea()
    {
        float a, b, c;

        // Input the lengths of three sides of the triangle
        printf("\nEnter the lengths of side 1 of the triangle: ");
        scanf("%f", &a);
        printf("Enter the lengths of side 2 of the triangle: ");
        scanf("%f", &b);
        printf("Enter the lengths of side 3 of the triangle: ");
        scanf("%f", &c);

        // Check if the input forms a valid triangle
        if (a + b > c && b + c > a && c + a > b)
        {
            // Calculate semi-perimeter
            float s = (a + b + c) / 2;

            // Calculate area using Heron's formula
            float area = sqrt(s * (s - a) * (s - b) * (s - c));

            printf("Area of the triangle: %.2f square units\n", area);
        }
        else
        {
            printf("Invalid input. The input does not form a valid triangle.\n");
        }
    }

    // Function to calculate area of a rectangle
    void calculateRectangleArea()
    {
        float length, width;
        printf("\nEnter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);

        if (length > 0 && width > 0)
        {
            // Calculate and print the area
            float area = length * width;
            printf("Area of the rectangle: %.2f square units\n", area);
        }
        else
        {
            // Invalid input, sides should be positive
            printf("Invalid input. Please enter positive values for the sides of the rectangle.\n");
        }
    }

    // Function to calculate area of a trapezium
    void calculateTrapeziumArea()
    {
        float base1, base2, height;
        printf("\nEnter the length of base 1 of the trapezium: ");
        scanf("%f", &base1);
        printf("Enter the length of base 2 of the trapezium: ");
        scanf("%f", &base2);
        printf("Enter the height of the trapezium: ");
        scanf("%f", &height);
        float area = 0.5 * (base1 + base2) * height;
        printf("Area of the trapezium: %.2f square units\n", area);
    }

    // Function to calculate area of a circle
    void calculateCircleArea()
    {
        const float PI = 3.1416;
        float radius;
        printf("\nEnter the radius of the circle: ");
        scanf("%f", &radius);
        float area = PI * radius * radius;
        printf("Area of the circle: %.2f square units\n", area);
    }

    int choice;
    do
    {
        // Menu for selecting shapes
        printf("\n\tArea Calculator Menu\n");
        printf("Which shape's area do you want to calculate?\n\n");
        printf("Press 1 for Triangle\n");
        printf("Press 2 for Rectangle\n");
        printf("Press 3 for Trapezium\n");
        printf("Press 4 for Circle\n");
        printf("Press 5 for Returning to the Miscellaneous Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            calculateTriangleArea();
            break;
        case 2:
            calculateRectangleArea();
            break;
        case 3:
            calculateTrapeziumArea();
            break;
        case 4:
            calculateCircleArea();
            break;
        case 5:
            return;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (1);
}

// Function to calculate age
void ageCalculator()
{

    // Function to check if a year is a leap year
    bool isLeapYear(int year)
    {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }
    // Function to validate date inputs
    bool isValidDate(int day, int month, int year)
    {
        if (year < 0)
        {
            return false; // Year cannot be negative
        }
        if (month < 1 || month > 12)
        {
            return false; // Month should be between 1 and 12
        }
        int daysInMonth;
        switch (month)
        {
        case 2:                                       // February
            daysInMonth = isLeapYear(year) ? 29 : 28; // Check for leap year
            break;
        case 4:
        case 6:
        case 9:
        case 11: // Months with 30 days
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31; // All other months have 31 days
        }
        return (day >= 1 && day <= daysInMonth); // Day should be within valid range
    }

    int birth_day, birth_month, birth_year;
    int current_day, current_month, current_year;
    printf("\n\t Age Calculation\n");
    // User input for birth date and current date
    do
    {
        printf("Enter your birth date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);
        // Validate birth date inputs
        if (!isValidDate(birth_day, birth_month, birth_year))
        {
            printf("Invalid birth date. Please enter a valid date.\n");
        }
    } while (!isValidDate(birth_day, birth_month, birth_year));
    do
    {
        printf("Enter today's date (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &current_day, &current_month, &current_year);
        // Validate current date inputs
        if (!isValidDate(current_day, current_month, current_year))
        {
            printf("Invalid current date. Please enter a valid date.\n");
        }
    } while (!isValidDate(current_day, current_month, current_year));
    // Calculation for age in years, months, and days
    int ageYears = current_year - birth_year;
    int ageMonths = current_month - birth_month;
    int ageDays = current_day - birth_day;
    // Adjust for negative values in months or days
    if (ageDays < 0)
    {
        ageMonths--;
        // Calculate the days difference
        ageDays += 30; // Assuming each month has 30 days for simplicity
    }
    if (ageMonths < 0)
    {
        ageYears--;
        // Calculate the months difference
        ageMonths += 12;
    }
    // Display calculated age
    printf("Your age is: %d years, %d months, and %d days\n", ageYears, ageMonths,
           ageDays);
}

void miscellaneousCalculator()
{
    int choice;
    do
    {
        // Miscellaneous Menu
        printf("\n\t\t Miscellaneous Menu\n");
        printf("Which operation would you like to perform?\n\n");
        printf("Press 1 for Area Calculator\n");
        printf("Press 2 for Age Calculator\n");
        printf("Press 3 for Statistics\n");
        printf("Press 4 for Returning to the Main Menu\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            areaCalculator();
            break;
        case 2:
            ageCalculator();
            break;
        case 3:
            // statisticsCalculator();
            break;
        case 4:
            return;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (1);
}

// Main function
int main()
{
    int choice;
    do
    {
        // Main menu
        printf("\n\t\t Main Menu\n\n");
        printf("Which operation would you like to perform?\n\n");
        printf("Press 1 for add\n");
        printf("Press 2 for subtract\n");
        printf("Press 3 for multiply\n");
        printf("Press 4 for multiply\n");
        printf("Press 5 for solving equation\n");
        printf("Press 6 for Miscellaneous\n");
        printf("Press 7 to Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            equationCalculator();
            break;
        case 6:
            miscellaneousCalculator();
            break;
        case 7:
            printf("Thank you for using the calculator. Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (1);

    return 0;
}