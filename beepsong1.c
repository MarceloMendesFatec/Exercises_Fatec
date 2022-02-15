#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h> // ----> funçoes tolower() toupper()

int main()
{
	char tecla;
	
	do{
		
		tecla = getch();	
	
	switch(tolower(tecla)){
		case 'a':	Beep(261,1000); break; //do
		case 's':	Beep(293,1000); break; //re
    	case 'j':	Beep(329,1000); break; //mi
    	case 'k':	Beep(249,1000); break; //fa
    	case 'l':	Beep(392,1000); break;//sol
		case 'd':	Beep(440,1000); break;//la
		
	}
	
	    
   
	}while(tecla != 27 );

 
	return 0;
}

