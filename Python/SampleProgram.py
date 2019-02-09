

outFile = open("YOUR_ASSIGNMENT.txt", "w") # open the first text file in output mode first (create a new file)

print("Enter data for the first text file. Entering a $ shall result in termination of input\n")
someShit = input()

for matter in someShit:
# for every character in the input, write the character to outFile
	outFile.write(matter)


print("Input accepted for YOUR_ASSIGNMENT. Can you please copy it to MY_ASSIGNMENT?\n")
outFile.close() # since data is now written to the first file successfully, we close it

inFile = open("YOUR_ASSIGNMENT.txt", "r") # notice that the first text file is now opened again, but in the input mode with inFile
outFile =open("MY_ASSIGNMENT.txt", "w") # create the second text file

# the following code actually copies the file
#while()
	# we check if End of File is encountered. If not, data is read from the file
ch = inFile.read()
outFile.write(ch) # putc() puts the read character from YOUR_ASSIGNMENT.txt, to MY_ASSIGNMENT.txt which is pointed to by outFile


inFile.close();
outFile.close(); # close both the files

inFile = open("MY_ASSIGNMENT.txt", "r"); # open the second file in read (input) mode, since its contents have to be printed

print("The contents of MY_ASSIGNMENT.txt are:\n");
print(inFile.read()) # displaying contents to the console (i.e. hardware; here, monitor screen)



