/*
* Auteur 1: Hugo Hamblok
* Auteur 2: Joran Cuypers
* Auteur 3: Dexter Podolski
* Link naar github repository: https://github.com/jorancuypers/CP2-Opdrachten
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
	int errnum;
    FILE *input;
    FILE *output;
    char c;
    unsigned long width,heigth = 0;
    unsigned long widthN = 0;
    int header[54];
    unsigned int i = 0;
    char fp1[100];
    char fp2[100];
    
    /*
	Voorbeeld invullen file path.
	"Geef de file path van de te inverteren afbeelding(.bmp):" C:\Users\Admin\Desktop\bmpImage.bmp
	"Geef de file path voor de geinverteerde afbeelding:" C:\Users\Admin\Desktop\bmpImageInv.bmp
    */

    printf("Geef de file path van de te inverteren afbeelding(.bmp):\n");
    gets(fp1);
    printf("Geef de file path voor de geinverteerde afbeelding:\n");
    gets(fp2);

    input = fopen(fp1, "rb");
    output = fopen (fp2, "wb");
	
    //Error reporting.

    if (output == NULL || input == NULL) 
    {
   
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\n", strerror(errnum));
      exit(EXIT_FAILURE);
   	}
   	
	do
    {
        c = getc (input);
        header[i] = c;
        i++;
        putc(c,output);
    }
    while (i < 54);
	
    width = header [20] & 255;
    width = width << 8;
    width = width | header [19] & 255;
    width = width << 8;
    width = width | header [18]& 255;
    heigth = header [24];
    heigth = heigth << 8;
    heigth = heigth | header [23];
    heigth = heigth << 8;
    heigth = heigth | header [22];
	
	do  
	{
        width= width + 1;
    }
    while ((width*3)%4 != 0);
        
    widthN = width;
	
	do
 	{
        c = getc (input);
        c= 255 - c;
        putc(c,output);
        i++;
  
    }
    while (i < (3*widthN*heigth)+54);  
    
    fclose (input);
    fclose (output);
    printf("De afbeelding heeft een omvang van (breedte x hoogte):  %d x %d \n", width, heigth);

    return 0;
}
