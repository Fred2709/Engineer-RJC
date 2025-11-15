/*Renefred Jean Charles
00343836
GOCProject

Description
This C program creates a system with eight options for users.
The main function calls runinterface, which handles user input and executes tasks using a switch statement.
The TerminalOverview shows all the available options.
The QuantumCodeTranslator converts a quantum code (a character) to its ASCII number.
The IntergalaticSignalIdentifier identifies the source of intergalactic signals from a character input.
The EnergyPulseAnalyzer checks if an energy pulse is strong, weak, or negative.
The NanoRefractorPredictor calculates a rounded value based on a cosmic element.
The AstroNavigationAverager finds the average of five space coordinates.
The GravityWaveSynchronizer compares two gravity waves to see if they can fit together.
Finally, the TerminalShutdown shut  down the terminal and ends the program.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function declaration

void runinterface();  // Function to run the user interface
void TerminalOverview();  // Function to display terminal options
int QuantumCodeTranslator(char QuantumCode);  // Function to translate a quantum code (character) to an integer
void IntergalaticSignalIdentifier(char signalIdentifier);  // Function to identify intergalactic signals with character type
void EnergyPulseAnalyzer(int pulsepower);  // Function to analyze energy pulse strength
void NanoRefractorPredictor(double cosmicelement);  // Function to predict something based on a cosmic element
double AstroNavigationAverager(int x1, int x2, int x3, int x4, int x5);  // Function to calculate the average of 5 navigation coordinates
void GravityWaveSynchronizer(double wave1, double wave2);  // Function to combine two gravity waves
void TerminalShutdown();  // Function to shut down the terminal

int main() {
    // Call the main interface function to run the program
    runinterface();
    // Return 0 to indicate successful execution of the program
    return 0;
}

// Function to run the user interface
void runinterface() {
    int option;  // Variable to store the user's menu option
    // Display the terminal options to the user
    TerminalOverview();
    // Prompt the user to select an option between 1 and 8
    printf("Pick option 1 to 8: ");
    // Read the user's input and store it in option variable
    scanf("%i", &option);


char QuantumCode; // Variable to store the quantum code character entered by the user
char signalIdentifier; // Variable to store the signal identifier entered by the user
int pulsepower;  // Variable to store the pulse power entered by the user
int cosmicelement; // Variable to store the cosmic element entered by the user
int x1, x2, x3, x4, x5; // Variables to store the 5 integers entered by the user
double wave1, wave2; // Variables that store heights of two gravity waves


   // Switch statement to handle different options selected by the user
    switch (option) {
        case 1:
        // If user selects option 1, display the terminal options again
            TerminalOverview();
            break;

        case 2:   // Case for Quantum Code Translator

            // Prompt the user to enter the quantum code
            printf("Type Quantum Code: ");
            // Read the character input (ignore white space)
            scanf(" %c", &QuantumCode);
            // Call QuantumCodeTranslator to get the integer equivalent and print it
            printf("Integer corresponding: %i\n", QuantumCodeTranslator(QuantumCode));
            break;


        case 3:  // Case for Intergalactic Signal Identifier
            // Prompt the user to enter the signal identifier
            printf("Enter Signal Identifier: ");
            // Read the character input (ignore leading whitespace)
            scanf(" %c", &signalIdentifier);
            // Call the function to identify the signal and print the result
            IntergalaticSignalIdentifier(signalIdentifier);
            break;


        case 4:  // Case for Energy Pulse Analyzer
            // Prompt the user to enter the pulse power value
            printf("Enter pulse power: ");
            // Read the integer input for the pulse power
            scanf("%i", &pulsepower);
            // Call the function to analyze the energy pulse
            EnergyPulseAnalyzer(pulsepower);
            break;




     case 5:  // Case for Nano Refractor Predictor

            printf("Enter cosmicelement: ");  // Prompt the user to enter the cosmic value
            scanf("%d", &cosmicelement);  // Read the integer input for the cosmic element
            NanoRefractorPredictor(cosmicelement);  // Call the function to analyze the cosmic element
            break;



        case 6:  // Case for Astro Navigation Averager
            // Prompt the user to enter 5 integers
            printf("Enter 5 space coordinates (integers): ");

            // Reads an integer input for 'x1' from the user
            x1 = scanf("x1: %d", &x1);
            // Reads an integer input for 'x2' from the user
            x2 = scanf("x2: %d", &x2);
            // Reads an integer input for 'x4' from the user
            x3 = scanf("x3: %d", &x3);
            // Reads an integer input for 'x5' from the user
            x4 = scanf("x4: %d", &x4);
            // Reads an integer input for 'x6' from the user
            x5 = scanf("x5: %d", &x5);

            // Calculates the average of the five inputs
            double average = AstroNavigationAverager(x1, x2, x3, x4, x5);

            // Call the function to calculate the average and print it with 2 decimal places
            printf("Average of space coordinates: %.2lf\n", average);
            break;


        case 7:  // Case for Gravity Wave Synchronizer
            // Prompt user to enter height of first wave
            printf("Height wave 1: ");
            // Read first wave height as a double
            scanf("%lf", &wave1);
            // Prompt the user to enter the height of second wave
            printf("Height wave 2: ");
            // Read second wave height as a double
            scanf("%lf", &wave2);
            // Call the function to check if the waves match
            GravityWaveSynchronizer(wave1, wave2);
            break;


        case 8:  // Case for Terminal Shutdown
            // Call the function to shut down the terminal
            TerminalShutdown();
            break;


        default:  // If the user enters an invalid option
            // Print an error message
            printf("error, enter valid data.\n");
            break;
    }
}


// Function to display the terminal options
void TerminalOverview() {
    printf("1- Terminal Overview\n");  // Print option 1
    printf("2- Quantum Code Translator\n");  // Print option 2
    printf("3- Intergalactic Signal Identifier\n");  // Print option 3
    printf("4- Energy Pulse Analyzer\n");  // Print option 4
    printf("5- Nano Refractor Predictor\n");  // Print option 5
    printf("6- Astro Navigation Averager\n");  // Print option 6
    printf("7- Gravity Wave Synchronizer\n");  // Print option 7
    printf("8- Terminal Shutdown\n");  // Print option 8
}

// Function to translate quantum code (character) to its integer ASCII value
int QuantumCodeTranslator(char QuantumCode) {
    // Cast the character to its corresponding ASCII integer value and return it
    return (int)QuantumCode;
}



// Function to identify intergalactic signals based on the identifier character
void IntergalaticSignalIdentifier(char signalIdentifier) {
    int QuantumCode = (int)signalIdentifier;  // Convert the signal identifier character to its integer ASCII value for comparison
    // Verify if the QuantumCode is inCLUDE one of the specifiC ranges (for UPF signals)
    if ((QuantumCode >= 65 && QuantumCode <= 90) || (QuantumCode >= 97 && QuantumCode <= 122)) {
        printf("Signal is from the UPF\n");  // print that the signal is from the UPF
    }

    // otherwise
    else {
        // print that the signal is unknown
        printf("Signal unknown\n");
    }
    // Print the signal identifier character
    printf("Signal Identifier: %c\n", signalIdentifier);
}


// Function to analyze the strength of an energy pulse
void EnergyPulseAnalyzer(int pulsepower) {
    // if the pulse power is negative
    if (pulsepower < 0) {
        // print a warning message
        printf("Warning : Negative Pulse detected\n");
    }
    // if the pulse power is divisible by 2
    else if (pulsepower % 2 == 0) {
        // Print that the pulse is strong
        printf("energypulse is strong\n");
    }
    // If not divisible by 2, print that the pulse is weak
    else {
        printf("energypulse is weak\n");
    }
}




// Function to predict according to cosmicelement
void NanoRefractorPredictor(double cosmicelement)
{
    // round cosmicelement and store in x2
    double x2 = cosmicelement + 0.5;


    // verify if the integer value of x2 is greater than the original value of cosmicelement
    if ((int)x2 > cosmicelement)
    {
        // If the condition is true, print the integer value of x2 (rounded up).
        printf("%d\n", (int)x2);
    }
    // If the integer value of x2 is not round up or greater thsan cosmic element.
    else
    {
        // Print the integer value of cosmicelement
        printf("%d\n", (int)cosmicelement);
    }
}



//Function to calculate the average of 5 space navigation coordinates
double AstroNavigationAverager(int x1, int x2, int x3, int x4, int x5) {

    int sum = x1 + x2 + x3 + x4 + x5;
    double average = sum / 5;
    // Return the average of the coordinates as a double
    return average;
}


// Function to check if two gravity waves can be match
void GravityWaveSynchronizer(double wave1, double wave2)
{
    // if the absolute difference between the two waves is within 0.001
    if ((wave1 - wave2 <= 0.001 && wave1 - wave2 >= -0.001))
    {
        // Print that the waves can work together
        printf("Waves can work together\n");
    }
    else
    {
        // Print that the waves are incompatible
        printf("Waves are incompatible.\n");
    }
}



// Function to shut down the terminal
void TerminalShutdown() {
    // Print a final message
    printf("End the G.O.C. Goodbye!\n");
}


