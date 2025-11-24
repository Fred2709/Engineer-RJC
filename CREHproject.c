/*
Renefred Jean Charles



Description
This code manages species data. It lets users register species, search for them, view all species,
or find species with similar lifespans while using functions.
the main function called runinterface handles input user's data and uses switch statement to execute tasks.
The first function is the terminaloverview that displays all available options where user can pick option to perform action.
The Species Registration function allow user to store in arrays information about species which are their names, lifespans, and notes.
The Species Search is a function that allow to look for species by typing their names. If it existed it show all information about them.
The Species Overview function allows to see all species registred with their informations
The Average Lifespan Matcher help to find Species by entered their range.
the program also use flag for verify the validation of the data entered by the user.
Ialso add two function to validate integer.
Finally the TerminalShutdown that end the program if the user decide it because it will keep running.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SPECIES 1000 // Maximum number of species that can be add to the program
#define NAME_LENGTH 50   // Maximum length that can take a species name
#define NOTE_LENGTH 200  // Maximum length of a species note or description

// Function prototypes
void runInterface(); // function that use terminated loop to run the program
void terminalOverview(); // function to show the menu of options to the user
void terminalShutdown(); // function to shut down the program
int speciesRegistration(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int *speciesCount, char *newName, int newLifespan, char *newNote); // function that registers new species
void speciesSearch(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount, char *searchName); // Function that searches for species by name
void speciesOverview(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount); // function that displays all species in the database
void averageLifespanMatcher(int speciesLifespan[], char speciesName[][NAME_LENGTH], char speciesNote[][NOTE_LENGTH], int speciesCount, int targetLifespan, int range); // function that fit species based on lifespan range
int validateIntegerInput(int min, int max); // function that validates integer input within a range
int validateStringInput(char *input, int maxLength); // function that validates string input

int main() {
    runInterface(); // call the main user interface to start the execution of the program
    return 0; // Return 0 to indicate the program ran successfully
}

void runInterface() {
    // Initialize arrays to store species data
    char speciesName[MAX_SPECIES][NAME_LENGTH] = {0}; // Array to store species names
    int speciesLifespan[MAX_SPECIES] = {0};          // Array to store lifespans
    char speciesNote[MAX_SPECIES][NOTE_LENGTH] = {0}; // Array to store notes & descriptions
    int speciesCount = 0; // keep track of the number of registered species
    int choice; // Variable to store user's menu choice

    do {
        terminalOverview(); // Displays the menu of options
        printf("Enter your choice: "); // Prompt user for input
        if (scanf("%d", &choice) != 1) { // Validation of numeric input
            while (getchar() != '\n');  // Ride of invalid input from the buffer
            continue; // Restart the loop for another try
        }

        switch (choice) { // Handle user's choice

            case 1: // case for register a new species
            {
                char newName[NAME_LENGTH], newNote[NOTE_LENGTH]; // Variables to store new species details
                int newLifespan; // Variable to store the lifespan of new species
                printf("Enter Species Name: "); //Prompt Species Name
                scanf(" %[^\n]", newName); // Read species name as input
                while (!validateStringInput(newName, NAME_LENGTH)) { // Validate the species name
                    printf("Invalid input. Please enter a valid species name: ");
                    scanf(" %[^\n]", newName);// Prompt again until valid input is entered
                }

                printf("Enter Species Lifespan: "); // Prompt for species lifespan
                newLifespan = validateIntegerInput(1, 2000); // Validate lifespan within range 1 to 2000 years
                printf("Enter Species Note: ");  // Prompt for species note or description
                scanf(" %[^\n]", newNote); // Read species note as input
                while (!validateStringInput(newNote, NOTE_LENGTH)) // validate species notes
                {
                    printf("Invalid input. Please enter a valid species note: ");
                    scanf(" %[^\n]", newNote); // Prompt until valid input is entered
                }
                // Call function to register species and check if it works
                if (speciesRegistration(speciesName, speciesLifespan, speciesNote, &speciesCount, newName, newLifespan, newNote)) {
                    printf("Species successfully registered.\n"); // success message
                } else {
                    printf("Species already exists.\n"); // alert that species already exist
                }
                break;
            }

            case 2: // case for searching for a species
            {
                char searchName[NAME_LENGTH]; //variable to store the name of the species to search
                printf("Enter Species Name to Search: "); // Prompt Species Name
                scanf(" %[^\n]", searchName); // Read species name as input
                speciesSearch(speciesName, speciesLifespan, speciesNote, speciesCount, searchName); // call function to search for species
                break;
            }

            case 3: // case for showing all registered species
                speciesOverview(speciesName, speciesLifespan, speciesNote, speciesCount); // call function to display all species
                break;

            case 4: // Case to match species according to lifespan
            {
                int targetLifespan, range; // Variables for target lifespan and acceptable range
                printf("Enter Target Lifespan: "); // Prompt for target lifespan
                targetLifespan = validateIntegerInput(1, 2000); // Validate target lifespan
                printf("Enter Lifespan Range: "); // Prompt for lifespan range
                range = validateIntegerInput(1, 1000); // Validate range
                averageLifespanMatcher(speciesLifespan, speciesName, speciesNote, speciesCount, targetLifespan, range);
                break;
            }

            case 5: //  Case to shut down the program
                terminalShutdown(); // Call function to end program shutdown
                break;

            default: // case for invalid choice's menu
                printf("Invalid choice. Please try again.\n"); // print error message
        }
    } while (choice != 5); // loop until user chooses to shut down the program
}

// function to display list of options
void terminalOverview() {
    printf("\n Cosmic Relations Exchange Hub \n");
    printf("1. Register New Species\n"); // option to register species
    printf("2. Search for a Species\n"); // option to search species
    printf("3. View All Species\n"); // option to view all registered species
    printf("4. Match Species by Lifespan\n"); // option to match species by lifespan
    printf("5. Shutdown Terminal\n"); // option to shut down program
}

// function to shut down program
void terminalShutdown() {
    printf("Thank you for contributing to the prosperity and harmony of the galaxies.\n"); // display shutdown message to user
}

// function to register a new species
int speciesRegistration(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int *speciesCount, char *newName, int newLifespan, char *newNote) {
    // iterate through existing species to check for duplicates
    for (int i = 0; i < *speciesCount; i++) {
        if (strcmp(speciesName[i], newName) == 0) { //  compares names
            return 0; // return 0 if species already exists
        }
    }

    // complete Array with other details
    strcpy(speciesName[*speciesCount], newName); // copy name
    speciesLifespan[*speciesCount] = newLifespan; // store lifespan
    strcpy(speciesNote[*speciesCount], newNote); // copy note
    (*speciesCount)++; // increment species count
    return 1; // Return 1 for Success
}

// Function to search for a species by name
void speciesSearch(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount, char *searchName) {
    // Iterate through all registered species
    for (int i = 0; i < speciesCount; i++) {
        if (strcmp(speciesName[i], searchName) == 0) { // compare names
            printf("\nSpecies Found\n"); // print success message
            printf("Name: %s\n", speciesName[i]); // print name
            printf("Lifespan: %d years\n", speciesLifespan[i]); // print lifespan
            printf("Note: %s\n", speciesNote[i]); // print note
            return; // Exit function after finding species
        }
    }
    printf("Species not found. Please register it.\n"); // message if species are not found
}

// Function to display all registered species
void speciesOverview(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount) {
    printf("\n  Species Overview  \n"); // Header for species overview
    printf("Total Registered Species: %d\n", speciesCount); // Print total number of species
    // Iterate through all registered species
    for (int i = 0; i < speciesCount; i++) {
        printf("%d. %s (Lifespan: %d years)\n", i + 1, speciesName[i], speciesLifespan[i]);
        printf("   Note: %s\n", speciesNote[i]); // print species notes or description
    }
}

// Function to find species matching a lifespan range
void averageLifespanMatcher(int speciesLifespan[], char speciesName[][NAME_LENGTH], char speciesNote[][NOTE_LENGTH], int speciesCount, int targetLifespan, int range) {
    printf("\n  Matching Species  \n"); // Header for matching species
    int found = 0; // Flag to track if matches are found
    // Iterate through all registered species
    for (int i = 0; i < speciesCount; i++) {
        // Check if species lifespan is within the specified range
        if (abs(speciesLifespan[i] - targetLifespan) <= range) { // Print name and lifespan
            printf("Name: %s (Lifespan: %d years)\n", speciesName[i], speciesLifespan[i]);
            printf("Note: %s\n", speciesNote[i]); // Print note
            found = 1; // fix flag to indicate a match was found
        }
    }
    if (!found) { // if no matches found
        printf("No species found within the specified range.\n"); // print error message
    }
}



// Function to validate integer input within a given range
int validateIntegerInput(int min, int max) {
    int input; // Variable to store user input

    while (1) { // Infinite loop for repeated validation
        printf("Please enter an integer between %d and %d: ", min, max); // Prompt user
        if (scanf("%d", &input) != 1) { // Check if input is not an integer
            while (getchar() != '\n'); // Clear the buffer
            printf("Error: Input must be an integer.\n"); // print error message
            continue; // Retry
        }

        // Check if input is less than the minimum value
        if (input < min) {
            printf("Error: Input cannot be less than %d.\n", min); // print error message
            continue; // Retry
        }

        // Check if input exceeds the maximum value
        if (input > max) {
            printf("Error: Input cannot be greater than %d.\n", max); // print error message
            continue; // Retry
        }

        return input; // Return valid input
    }
}


// Function to validate string input
int validateStringInput(char *input, int maxLength) {
    // Check if the input is empty
    if (strlen(input) == 0) {
        printf("Error: Input cannot be empty.\n"); // print error message
        return 0; // Return 0 for invalid input
    }

    // Check if the input exceeds the maximum length
    if (strlen(input) > maxLength) {
        printf("Error: Input exceeds the maximum length of %d characters.\n", maxLength); // print error message if input exceed maximun lenght
        return 0; // Return 0 for invalid input
    }

    // If input passes all checks, return 1
    return 1; // Return 1 for valid input
}
