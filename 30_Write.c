//Name: Yogita Tufchi
//Program: reading and writing text files.				
#include <stdio.h>
#include <stdlib.h>
struct s {
	//Creating a user defined data type using structures.
	char text[1000];
	};
 int main(){
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("C:\\Users\\LENOVO\\Desktop\\cprograms\\YogitaTufchi_118_C_Program_Repository\\30_Write.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //Scanning the entered text.
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("C:\\Users\\LENOVO\\Desktop\\cprograms\\YogitaTufchi_118_C_Program_Repository\\30_Write.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //Printing the entered text.
	}
	fclose(fptr); //Closing the program.
}