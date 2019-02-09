#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *in, *out;
	/* the IN pointer is used to open any file in input mode, i.e. to read from the file 
	 the OUT pointer is used to open any file in the output mode, i.e. to write to the file */
	char ch; // ch will store the character values every time a character is read from OR written to a file

	out=fopen("MY_ASSIGNMENT.txt", "w"); // open the first text file in output mode first (create a new file)

	printf("Enter data for the first text file. Entering a $ shall result in termination of input\n");

	do { // loop for accepting characters from the user till a $ is entered
		ch = getchar();
		putc(ch, out);
		} while (ch != '$');

	printf("Input accepted for MY_ASSIGNMENT. Can you please copy it to YOUR_ASSIGNMENT?\n");
	fclose(out); // since data is now written to the first file successfully, we close it

	in = fopen("MY_ASSIGNMENT.txt", "r"); // notice that the first text file is now opened again, but in the input mode with the IN pointer
	out=fopen("YOUR_ASSIGNMENT.txt", "w"); // create the second text file

	// the following code actually copies the file
	while(!feof(in)) {
		/* we check if End of File is encountered. If not, data is read from the file */
		ch = getc(in);
		putc(ch, out); // putc() puts the read character from MY_ASSIGNMENT.txt, to YOUR_ASSIGNMENT.txt which is pointed to by pointer OUT
		}

	fclose(in);
	fclose(out); // close both the files

	in = fopen("YOUR_ASSIGNMENT.txt", "r"); // open the second file in read (input) mode, since its contents have to be printed

	printf("The contents of YOUR_ASSIGNMENT.txt are:\n");
	while(!feof(in)) {
		ch = getc(in);
		printf("%c",ch); // displaying contents to the console (i.e. hardware; here, monitor screen)
		}

	return 0; // return 0 indicates that main() has executed successfully and no errors were encountered

}