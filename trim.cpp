/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			trim.cpp
* Author:			P. Bauer
* Due Date:		March 14, 2015
* ----------------------------------------------------------
* Description:
* Test functions for trim.h
* ----------------------------------------------------------
*/
#include "trim.h"

int getCountInfront(char* str);
int getCountFromBehind(char* str);

void trim(char* str, char* trimmed)
{
 if(str != "")
 {
   int i = getCountInfront(str);
   int j = getCountFromBehind(str);
   char* help;
   int count = 0;

   for (; i < j; i++) {
     help[count] = str[i];
     count++;
   }
   strcpy(trimmed, help);
 }
 else
   strcpy(trimmed, str);
}


int getCountInfront(char* str)
{
 int i = 0;
 bool textFound = false;

 while(str[i] == ' ' && !textFound)
 {
   if(str[i] != ' ')
   {
     textFound = true;
   }
   i++;
 }
 return i;
}

int getCountFromBehind(char* str)
{
 int i = 0;
 bool textFound = false;

 while(str[strlen(str)-i-1] == ' ' && !textFound)
 {
   if(str[strlen(str)-i-1] != ' ')
   {
     textFound = true;
   }
   i++;
 }
 return i;
}
