Renefred Jean Charles
00343836
GOCProject

Project 1: Galaxy Operations Console (G.O.C)
Introduction
In the year 3023, Earth has become a central hub for intergalactic trade and diplomacy. The United Planetary Federation (U.P.F) depends heavily on the Galaxy Operations Console (G.O.C). This computer helps with many important tasks to keep peace and wealth flowing across galaxies. The G.O.C needs some programming updates. When turned on, the G.O.C shows a control panel. Users can pick a function from this panel. After the user gives the needed data, the G.O.C shows the results.
Control Panel (Your Functions)
1.	Terminal Overview: This function runs when the G.O.C. starts. This function displays the menu to the user and details each operation/function. It's like a guide for new users.
2.	Quantum Code Translator: Quantum codes (represented by ASCII characters) are the official language of data in this future. When characters are translated to integers they can be transmitted across the galaxy. Give this function a Quantum Code it prints a corresponding integer.
3.	Intergalactic Signal Identifier: Different galactic federations send different Quantum Code signals. When the G.O.C receives a signal (represented by an ASCII character), it tells you if it is from the UPF or another federation. If the signal is a letter from A-Z (upper or lower case), it's from the UPF. All other signals come from different federations. The GOC will print if the signal is from the UPF or not from the UPF.
4.	Energy Pulse Analyzer: Energy pulses (represented by integer values) power spaceships. Give the strength of a pulse, and the G.O.C will display if it's strong (even) or weak (odd). If the pulse is negative, there might be a problem, and a warning message should print accordingly.
5.	Nano-Refractor Predictor: Give the G.O.C a positive decimal value (a double) for a cosmic element. It will then tell you the closest whole number (round up or down). This information will help engineers in making lenses for space telescopes. Do not use any Math.h functions to accomplish this task.
6.	Astro-Navigation Averager: Space travelers use the G.O.C to find their way. Give it five space coordinates (integers), and it will show their number average with double precision. This is used to plan space trips.
7.	Gravity Wave Synchronizer: Balancing artificial gravity waves with natural ones is important. Give the heights (doubles) of two waves to the G.O.C. If they are very close in size (within a 0.001 difference), the G.O.C says they can work together.
8.	Terminal Shutdown: As the name suggests, this ends the G.O.C, no tasks are performed. A message is displayed to the user and the program is allowed to end.
Requirements:
•	 For the control panel, use a recursive function called runInterface(). This function will call Terminal Overview to show the list of functions and ask the user what they want to do. After finishing one task, the function will show the list again. This function keeps calling itself until the user picks "Terminal Shutdown".
•	Use meaningful names for variables and functions that provided a context for the work.
•	"Terminal Shutdown" means the end of the runInterface()function – you should not call C’s exit function.
•	Only use recursion to loop – no other sort of loops are allowed.
Note:
•	You do not have to validate the user input’s data type – if the program asks for an int, assume it will get an int.
•	The G.O.C is advanced but can have problems. Be careful mixing calls to scanf
Submission:
•	All work must be your own - https://cswiki.betheluniversity.edu/index.php?title=AcceptableWork
•	Follow the style and documentation guide on Blackboard.
•	Add a comment at the top of your code with your name, student ID, the assignment name, and a short description of your program.
•	Include a "read me" file that follows the Blackboard style and documentation guide - including citations (if any) and a statement of completion.
•	If you used any resources other than the textbook or the posted videos, you must cite the source (link to the website, name of the tutor, screen shots with chat bot, etc). All work must follow the rule – if you cannot explain it do not use it.
•	All code should be written in C, well comment, well formatted, and functions/variables should have meaningful names.
•	All functions must have prototypes above main and definitions below main
•	Submit your .c file and your "read me" file.

I start working on the project on Thursday, October 10. That means it takes me almost one week. I work with Victor Van on the Tutoring Center. I visited him three times. He gave me some Hint for quantumcode, energypulseanalyzer,Intergalacticcodetranslator, and astronavigationaverage. I reach out Prof. Michael Penta by email for Help with NanoRefractorPredictor. I even drop-in for office hours. He advice me to not use Array for  AstroNavigationAvergae because we didn't cover that part but i did some personnal research and already cover in P5JS(java) with him in Intro to computer science it wasn't very hard for me to understand it in C lanlguage even though it's different. However I ride it of and wasn't be able to execute that part. Even though he gave me some Hint for NanoRefractorPredictor and I run back in Tutoring to try to execute it it doesn't work well. it didn't particularly round up. Finally, I feel I need to practice more to get better understanding in C language.
