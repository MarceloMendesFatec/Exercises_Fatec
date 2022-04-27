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
	
	switch(tecla){
		case 'a':case'A':	Beep(261,1000); break; //do
		case 's':case'S': 	Beep(293,1000); break; //re
    	case 'j':case'J':	Beep(329,1000); break; //mi
    	case 'k':case'K':	Beep(249,1000); break; //fa
    	case 'l':case'L':	Beep(392,1000); break;//sol
		case 'd':case'D':	Beep(440,1000); break;//la
		
	}
	
	    
   
	}while(tecla != 27 );

 
	return 0;
}
