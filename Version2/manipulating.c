/*
General Information on
===========================
Source file Name: manipulating.c

 MANIPULATING SOURCE
This is the source file of string manipulating operation

The main purpose of the file 
1. Include Macro
2. Include user-defined libraries
3. Perform the actual logic of operations. 

Credit:
Author          : Atifur Fahad
Group Name		: Bb 4
Group Members	: Students of Seneca College
Course 			: CPR 101

Supervisor		: Professor Raymond Wong

Revision		: 2.0.5
Version 		: 2

License 		: Not Defined 

Release date	: 16 April 2024
Support			: mrkarim6@myseneca.ca
*/

// Start Program 

/*
 * Tells the compiler not to issue warnings when these unsafe functions are used. A quick fix
 * to suppress warnings without addressing the underlying issue of using unsafe functions.
 */
#define _CRT_SECURE_NO_WARNINGS

//
// Define a macro for the input buffer array size.
#define BUFFER_SIZE 80

//
// Include the user-defined header file.
#include "manipulating.h"

/*
 * Method Purpose     : The function finds a character opsition in a string.
 * Input peerameter : None 
 * Output peerameter: None
 */
void manipulating(void)
{
	/*
	// V 1
	//===================================================================================
	//
	// Print the boot message of the program. 
	printf("*** Start of Concatenation String Demo ***\n");
	
	//
	// Declare a variable in the chacater array with the length of the double buffer size.			
	char string1[BUFFER_SIZE * 2];
	//
	// Declare a variable in the chacater array with the length of the buffer size.		
	char string2[BUFFER_SIZE];
	
	//
	// Used "do while" to ensure at least one input by the user
	//	
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type the 1st string (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE		
		fgets(string1, BUFFER_SIZE, stdin);
		
		//
		// Define the last buffer NULL value 
		string1[strlen(string1) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero
		if((strcmp(string1,"q") != 0))
		{
			//
			// Accept user input for 2nd string with length of BUFFER_SIZE		
			printf("Type the 2nd string:\n");
			fgets(string2,BUFFER_SIZE, stdin);
			
			//
			// Define the last buffer NULL value 
			string2[strlen(string2) - 1] = '\0';
			
			//
			// Concatenating two string
			strcat(string1, string2);
			
			//
			// Print the result
			printf("Concatenation string is \' %s \'\n", string1);
		}
	}
	// Continue the program until the user presses 'q'
	while(strcmp(string1, "q") != 0);
	
	//
	// Print the end message of the program. 
	printf("*** End of Concatenating String Demo ***\n\n");*/
	
	// V 2
	//===================================================================================
	//
	// Print the boot message of the program. 
	printf("*** Start of Comparing String Demo ***\n");
	
	//
	// Declare a variable in the chacater array with the length of the buffer size.			
	char comapre1[BUFFER_SIZE];
	//
	// Declare a variable in the chacater array with the length of the buffer size.		
	char comapre2[BUFFER_SIZE];
	//
	// Temp  vriable to keep reslut 
	int result;
	
	//
	// Used "do while" to ensure at least one input by the user
	//	
	do
	{
		// Display mesage to accept an not empy strig
		printf("Type the 1st string (q - to quit):\n");
		
		//
		// Accept user input with length of BUFFER_SIZE		
		fgets(comapre1, BUFFER_SIZE, stdin);
		
		//
		// Define the last buffer NULL value 
		comapre1[strlen(comapre1) - 1] = '\0';
		
		//
		// Check and allow users if they are not entered by zero
		if((strcmp(comapre1,"q") != 0))
		{
			//
			// Accept user input for 2nd string with length of BUFFER_SIZE		
			printf("Type the 2nd string:\n");
			fgets(comapre2,BUFFER_SIZE, stdin);
			
			//
			// Define the last buffer NULL value 
			comapre2[strlen(comapre2) - 1] = '\0';
			
			//
			// Comparing two string
			result = strcmp(comapre1, comapre2);
			
			//
			// Print the result
			if( result < 0 )
			{
				printf("\'%s\' string is less then \' %s \'\n", comapre1,comapre2);
			}
			else if (result == 0)
			{
				printf("\'%s\' string is equal to \' %s \'\n", comapre1,comapre2);
			}
			else 
			{
				printf("\'%s\' string is grater to \' %s \'\n", comapre1,comapre2);
			}
		}
	}
	// Continue the program until the user presses 'q'
	while(strcmp(comapre1, "q") != 0);
	
	//
	// Print the end message of the program. 
	printf("*** End of Comparing String Demo ***\n\n");
}

// End Program 