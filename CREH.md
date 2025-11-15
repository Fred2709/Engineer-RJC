Renefred Jean Charles
00343836


I start working on the Project since November 18.
I just discuss idea about the project with Attuwalai Yamanga another C Programing Student on Tuesday night, However we never see each other project
One of the part that was difficult for me is to validate integer Input within range and string input to not  exceeds.
I did search on another site which is https://labex.io/tutorials/c-how-to-validate-input-in-c-programming-425511 and I follow the example provided.
I was questionning myself if all of my species should be in database.
I did talk to Attawalai about that. I was confuse about it.
I visited Jennifer Caramona to ask her to take a look over the project. She just show me how to write and save data in a file with the reference chapter workin with file however sher didn't touch my code to modify anything.
I did talk about that with Professor Michael Penta. He told me it's not required and I give up on it to not mess up the code in the last minute.
I had difficulty using the fgets I choose the scanf it gave me probleme also with space issue.
I also look on Geeks for geeks website to find help. https://www.geeksforgeeks.org/basic-input-and-output-in-c/
I did search on  this site and find the solution how to solve the space the space issue.https://stackoverflow.com/questions/1247989/how-do-you-allow-spaces-to-be-entered-using-scanf
I did use continue in my funtions's validation of input which it a special keyword reserved in C language. It is mentioned in the chapter 2.
Overall, I feel proud to be able to write down this program even though it might not be perfect becaus ethis is coding and it's normal to make mistake. I will keep practicing during the winter break to get deeper in the language.


Project 2: Cosmic Relations Exchange Hub 
Introduction
The year is still 3023, and the Galaxy Operations Console (G.O.C) has been successful in managing complex tasks such as intergalactic diplomacy, trade, and maintaining peace. Due to its success, the United Planetary Federation (U.P.F) has tasked you with developing a new system to enhance communication and support trade with the many new alien species joining the galactic community. This new system is called the Cosmic Relations Exchange Hub (C.R.E.H.).

The C.R.E.H. will be a specialized module designed to record, analyze, and share information about alien species.  The Federation would like to keep track of the following information:
•	Species Name
•	Species Average Life span
•	A note the species – like information about a trait or cultural practice of the species

The database is organized into parallel arrays (which are also partially filled arrays) – one for each item above (name, lifespan, note). 

Upon startup, the C.R.E.H. displays a control panel with a list of functions for managing the species database. Each function allows users to collect, and view data, ensuring the U.P.F's diplomatic, exploratory, and commercial missions are well-prepared.
Define the following functions:
•	Run Interface: This function is the central part of the program. It uses a user terminated loop to run the program until the user quits. It prints the Terminal Overview, handles all user interactions by processing input, ensures input values are validated before passing them to other functions, and calls the appropriate functions. All user inputs are gathered in runInterface() and passed as parameters to the relevant functions. This ensures no other function in the program directly handles input. This function is called by main. This function is not listed in the terminal overview menu.
•	Terminal Overview: This shows an overview of all function options. This acts as a guide for all users, explaining each task that can be performed using the C.R.E.H. This displays the menu, but it is not listed as a menu option.
•	Species Registration: This function lets users add new species to the database (the parallel arrays). All required information (name, lifespan, trait) is gathered in runInterface() and then passed to Species Registration. Along with the arrays and other information needed to add a species to the database, this function takes the species count as a reference parameter. It increments the count upon successful registration and returns an integer (1 for success, 0 for failure). If the species already exists, the user will be alerted that registration failed and the function will return 0, indicating failure. This is listed in the terminal overview as a menu options.
•	Species Search: Users can search for a species by its name. The C.R.E.H. will search the database names and show the species' name, average lifespan, and note if a match is found. If no match is found, the user is alerted and advised to use the registration function. This is listed in the terminal overview menu options.
•	Species Overview: This function prints the count and all the data in the arrays so a user can view all species along with their details. This is listed in the terminal overview as a menu options.
•	Average Lifespan Matcher: This function takes the the lifespan array and a number of years as a parameter. The C.R.E.H. will evaluate and find other species with an average lifespan within the specified number of years (+ or -). It will display potential matches that could help build alliances or foster cooperation. This is listed in the terminal overview menu options.
•	Terminal Shutdown: Similar to the G.O.C, this function ends the C.R.E.H. operations. The user is thanked for their contributions to the prosperity and harmony of the galaxies. The program ends gracefully without forcing an exit. This is listed in the terminal overview menu options.
Requirements:
•	Unlike the GOC in Project 1, the C.R.E.H. uses an iterative process in the runInterface() function. It prints the Terminal Overview and then responds to user selections by calling the appropriate function. All user input is collected in runInterface() and then passed to the appropriate functions as parameters. No other function is allowed to handle input directly, such as by using scanf, fgets, or similar methods. This design ensures that runInterface() is the central point for all user interactions.
•	The runInterface function has a variable that tracks the number of species in the database. This count is also passed by reference to any function that modifies the species database to ensure consistency. This number should be printed when the Species Overview function is called. The count is also passed by reference to any function that modifies the species database to ensure it stays accurate. The count is updated by passing it by reference to the Species Registration function.
•	You will need to use parallel arrays to store details about each species, such as their names, home planets, lifespans, and traits. Each property (name, planet, etc) will have its own array, and the indexes will be aligned to create parallel arrays. This means that information about the same species will have the same index in each array, making it easy to access all details about a species by referring to a single index.
•	Function and variable names must clearly describe their purpose, making the program easier to read and debug.
•	You should define a function for each of the operations described above. None of these functions should use scanf, fgets, or any other input functions. All input data must be gathered in the runInterface() function and passed to the other functions as parameters. 
•	You will need to pass the arrays to the functions that use them.
•	Below is a list of prototypes, defines, and includes to get you started

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SPECIES 1000
#define NAME_LENGTH 50
#define NOTE_LENGTH 200

void runInterface();
void terminalOverview();
void terminalShutdown();
int speciesRegistration(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int *speciesCount, char *newName, int newLifespan, char *newNote);

void speciesSearch(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount, char *searchName);

void speciesOverview(char speciesName[][NAME_LENGTH], int speciesLifespan[], char speciesNote[][NOTE_LENGTH], int speciesCount);

void averageLifespanMatcher(int speciesLifespan[], char speciesName[][NAME_LENGTH], char speciesNote[][NOTE_LENGTH], int speciesCount, int targetLifespan, int range);

Notes:
•	Assume that data types are correctly input (strings for names, integers for lifespan).
•	You may find it useful to use standard string functions such as strcpy(), strcmp(), and strlen() for handling species names, planets, and traits. These functions help with copying, comparing, and determining the length of strings. string.h has more string functions. ctype.h has useful character functions.
•	For all menu inputs, use a validation loop to ensure the input is within the expected range (if users are asked to enter 1, 2, or 3, validate that the input matches one of these values).
Submission:
•	All work must be your own - https://cswiki.betheluniversity.edu/index.php?title=AcceptableWork
•	Follow the style and documentation guide on Blackboard.
•	Add a comment at the top of your code with your name, student ID, the assignment name, and a short description of your program.
•	Include a "read me" file that follows the Blackboard style and documentation guide - including citations (if any) and a statement of completion.
•	If you used any resources other than the textbook or the posted videos, you must cite the source (link to the website, name of the tutor, screen shots with chat bot, etc). All work must follow the rule – if you cannot explain it do not use it.
•	All code should be written in C, well comment, well formatted, and functions/variables should have meaningful names.
•	All functions must have prototypes above main and definitions below main
•	Submit your .c file and your "read me" file.



