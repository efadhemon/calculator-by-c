#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void performSimpleAddition()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result: %d\n", num1 + num2);
}

void performAdvancedAddition()
{
    int n, sum = 0, num;

    printf("How many numbers do you want to add? ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("Result: %d\n", sum);
}

void performMatrixAddition()
{
    int N, M;

    printf("Enter the number of rows (N) and columns (M) for the matrices: ");
    scanf("%d %d", &N, &M);

    int matrix1[N][M], matrix2[N][M], result[N][M];

    // Input for the first matrix
    printf("Enter elements for the first matrix (%d x %d):\n", N, M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second matrix (%d x %d):\n", N, M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result matrix
    printf("Result Matrix:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

// Function to handle addition
void additionCalculator()
{
    int choice;

    do
    {
        printf("\n\tAddition Menu\n");
        printf("Which type of addition would you like to perform?\n");
        printf("Press 1 for Simple addition\n");
        printf("Press 2 for Advanced addition\n");
        printf("Press 3 for Matrix addition\n");
        printf("Press 4 to Return to the Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            performSimpleAddition();
            break;
        case 2:
            performAdvancedAddition();
            break;
        case 3:
            performMatrixAddition();
            break;
        case 4:
            printf("Returning to the Main Menu.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);
}

void performSimpleSubtraction()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result: %d\n", num1 - num2);
}

void performAbsoluteDifference()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Absolute difference: %d\n", abs(num1 - num2));
}

// Function to handle subtraction
void subtractionCalculator()
{

    int choice;

    do
    {
        printf("\n\tSubtraction Menu\n");
        printf("Which type of subtraction would you like to perform?\n\n");
        printf("Press 1 for Simple subtraction\n");
        printf("Press 2 for Absolute difference\n");
        printf("Press 3 to Return to the Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            performSimpleSubtraction();
            break;
        case 2:
            performAbsoluteDifference();
            break;
        case 3:
            printf("Returning to the Main Menu.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);
}

// Function to handle division
void divisionCalculator()
{

    void performSimpleDivision()
    {
        int a, b;

        printf("Enter two numbers (a and b) for a ÷ b: ");
        scanf("%d %d", &a, &b);

        if (b != 0)
        {
            float result = (float)a / b;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is undefined.\n");
        }
    }

    void performAdvancedDivision()
    {
        int a, b;

        printf("Enter two numbers (a and b) for a ÷ b: ");
        scanf("%d %d", &a, &b);

        if (b != 0)
        {
            int quotient = a / b;
            int remainder = a % b;
            printf("Result: %d with remainder %d\n", quotient, remainder);
        }
        else
        {
            printf("Error: Division by zero is undefined.\n");
        }
    }

    int choice;

    do
    {
        printf("\n\tDivision Menu\n");
        printf("Which type of division would you like to perform?\n\n");
        printf("Press 1 for Simple division\n");
        printf("Press 2 for Advanced division\n");
        printf("Press 3 to Return to the Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            performSimpleDivision();
            break;
        case 2:
            performAdvancedDivision();
            break;
        case 3:
            printf("Returning to the Main Menu.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);
}

void performSimpleMultiply()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result: %d\n", num1 * num2);
}

void performModuloMultiply()
{
    int a, b, m;

    printf("Enter three numbers (a, b, and m) for (a * b) modulo m: ");
    scanf("%d %d %d", &a, &b, &m);

    int result = (a * b) % m;
    printf("Result: %d\n", result);
}

void performMatrixMultiplication()
{
    int aRows, aCols, bRows, bCols;

    printf("Enter dimensions for the first matrix (a x b): ");
    scanf("%d %d", &aRows, &aCols);

    printf("Enter dimensions for the second matrix (c x d): ");
    scanf("%d %d", &bRows, &bCols);

    if (aCols != bRows)
    {
        printf("Error: Matrix multiplication is not possible with the given dimensions.\n");
        return;
    }

    int matrix1[aRows][aCols], matrix2[bRows][bCols], result[aRows][bCols];

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < aRows; i++)
    {
        for (int j = 0; j < aCols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < bRows; i++)
    {
        for (int j = 0; j < bCols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (int i = 0; i < aRows; i++)
    {
        for (int j = 0; j < bCols; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < aCols; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Displaying the result matrix
    printf("Result Matrix:\n");
    for (int i = 0; i < aRows; i++)
    {
        for (int j = 0; j < bCols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void performExponentiation()
{
    int a, b, m;

    printf("Enter three numbers (a, b, and m) for (a^b) modulo m: ");
    scanf("%d %d %d", &a, &b, &m);

    int result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }

    printf("Result: %d\n", result);
}

// Function to handle multiply
void multiplyCalculator()
{

    int choice;

    do
    {
        printf("\n\tMultiplication Menu\n");
        printf("Which type of multiplication would you like to perform?\n\n");
        printf("Press 1 for Simple multiply\n");
        printf("Press 2 for Modulo multiply\n");
        printf("Press 3 for Matrix multiplication\n");
        printf("Press 4 for Exponentiation\n");
        printf("Press 5 to Return to the Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            performSimpleMultiply();
            break;
        case 2:
            performModuloMultiply();
            break;
        case 3:
            performMatrixMultiplication();
            break;
        case 4:
            performExponentiation();
            break;
        case 5:
            printf("Returning to the Main Menu.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);
}

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

// Function to handle equation solving
void equationCalculator()
{
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

// Function to calculate area of a triangle
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

// Function to handle area calculations
void areaCalculator()
{
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

// Function to find statistics
void performStatistics()
{
    int N;

    // Input for the number of elements (N)
    printf("Enter the number of elements (N) for statistics: ");
    scanf("%d", &N);
    if (N <= 0)
    {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return;
    }

    int numbers[N];

    // Input for the array of numbers
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            return;
        }
    }

    int sum = 0;
    int min = numbers[0];
    int max = numbers[0];
    int frequency[100] = {0}; // Assuming a maximum value of 100 for simplicity

    // Calculating sum, min, max, and frequency
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];

        if (numbers[i] < min)
        {
            min = numbers[i];
        }

        if (numbers[i] > max)
        {
            max = numbers[i];
        }

        frequency[numbers[i]]++;
    }

    float average = (float)sum / N;
    int mostFrequentValue = 0;
    int mostFrequentCount = 0;

    // Finding most frequent value
    for (int i = 0; i < 100; i++)
    {
        if (frequency[i] > mostFrequentCount)
        {
            mostFrequentCount = frequency[i];
            mostFrequentValue = i;
        }
    }

    // Finding unique values
    int uniqueCount = 0;
    for (int i = 0; i < 100; i++)
    {
        if (frequency[i] == 1)
        {
            uniqueCount++;
        }
    }

    // Finding median
    int sortedNumbers[N];
    for (int i = 0; i < N; i++)
    {
        sortedNumbers[i] = numbers[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (sortedNumbers[j] > sortedNumbers[j + 1])
            {
                // Swap the elements if they are in the wrong order
                int temp = sortedNumbers[j];
                sortedNumbers[j] = sortedNumbers[j + 1];
                sortedNumbers[j + 1] = temp;
            }
        }
    }

    float median;
    if (N % 2 == 0)
    {
        // If the number of elements is even, average the middle two elements
        median = (float)(sortedNumbers[N / 2 - 1] + sortedNumbers[N / 2]) / 2;
    }
    else
    {
        // If the number of elements is odd, take the middle element
        median = sortedNumbers[N / 2];
    }

    // Calculating variance
    float variance = 0;
    for (int i = 0; i < N; i++)
    {
        variance += (numbers[i] - average) * (numbers[i] - average);
    }
    variance /= N;

    // Displaying the statistical information
    printf("Statistics Report:\n");
    printf("Sum: %d\n", sum);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", average);
    printf("Most frequent value: %d\n", mostFrequentValue);
    printf("Unique values count: %d\n", uniqueCount);
    printf("Median: %.2f\n", median);
    printf("Variance: %.2f\n", variance);
}

// Function to handle miscellaneous calculation
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
            performStatistics();
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
        printf("Press 3 for division\n");
        printf("Press 4 for multiply\n");
        printf("Press 5 for solving equation\n");
        printf("Press 6 for Miscellaneous\n");
        printf("Press 7 to Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            additionCalculator();
            break;
        case 2:
            subtractionCalculator();
            break;
        case 3:
            divisionCalculator();
            break;
        case 4:
            multiplyCalculator();
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