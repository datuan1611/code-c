#BOOK: THE C PROGRAMMING LANGUAGE (2nd Edition)

#Chapter 1. A Tutorial Introduction

##P021:
. Precedence of operator AND (&&) is just higher that operator OR (||)
. Conditional expressions in AND / OR are evaluated from Left to Right.
  Evaluation will stop as soon as the truth or falsehood is known.

##P030:
. Detect the end of file by check: "(c=getchar()) != EOF"
. When a string constant in C is stored as an array of characters containing the characters of the string and terminated with a '\0' to mark the end.
  The %s format in PRINTF expects an argument as a string that is terminated by '\0'.
  All of this implies that '\0' is not a part of normal text.
  ->normal text: 'H' 'E' 'L' 'L' 'O' '\n'
  ->string form: 'H' 'E' 'L' 'L' 'O' '\n' '\0'

##P031:
. External variable must be "defined", exactly once, outside of any function; this sets aside storage for it.
  Variable must also be "declared" in each function that wants to access for it; this states the type of the variable.
  The declaration may be an explicit 'extern' statement or may be implicit from context.
	#define SIZE 10
	int var[SIZE];
	void func(void) {
		extern int var[];
		//...
	}
. In certain circumstances, extern declaration can be omitted.
  If definition of an external variable occurs in source file before its use in a particular function, then there is no need any extern declaration in the function.
  Common practice is to place definition of all extern variables at the beginning of source file, and then omit all external declarations.
. If the program is in several source files, and a variable is defined in file1 and used in file2 and file3, then extern declaration are needed in file2 and file3 to connect the occurrence of the variable.
  Usual practice is to collect extern declaraion of variables and functions in a separate file, called a "header", that is included by '#include' at the front of each source file.
. Definition refers to the places where the variable is created or assigned storage.
  Declaration refers to the places where the nature of the variable is stated but no storage is allocated.
. Relying too heavily on external variables is fraught with peril since it leads to programs whose data connections are not at all obvious - variables can be changed in unexpected and even inadvertent ways, and the program is hard to modify.

