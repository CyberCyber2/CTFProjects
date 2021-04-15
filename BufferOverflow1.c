// aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa









#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[25];
      char answer[30];
      int n = 0;
      answer[n++] = 'L';
      answer[n++] = 'B';
      answer[n++] = 'C';
      answer[n++] = 'T';
      answer[n++] = 'F';
      answer[n++] = '{';
      answer[n++] = 'B';
      answer[n++] = 'e';
      answer[n++] = 'a';
      answer[n++] = 'n';
      answer[n++] = 's';
      answer[n++] = 'B';
      answer[n++] = 'u';
      answer[n++] = 'f';
      answer[n++] = 'f';
      answer[n++] = 'e';
      answer[n++] = 'r';
      answer[n++] = 'O';
      answer[n++] = 'v';
      answer[n++] = 'e';
      answer[n++] = 'r';
      answer[n++] = 'f';
      answer[n++] = 'l';
      answer[n++] = 'o';
      answer[n++] = 'w';
      answer[n++] = '2';
      answer[n++] = '}';
      answer[n++] = '\0';
    
     char pass[10];
      int q = 0;
      pass[q++] = '1';
      pass[q++] = '4';
      pass[q++] = '6';
      pass[q++] = '4';
      pass[q++] = '3';
      pass[q++] = 'F';
      pass[q++] = '{';
      pass[q++] = '\0';
    //PASSWORD=lbc{not the flag}
    //password don't use strings
    int p = 0;
    printf("\nPassword?: \n");
    gets(buff);
    
    if(strcmp(buff, pass))
    {
        printf ("\n Wrong\n");
    }
    else
    {
        printf ("\n Correct\n");
        p = 1;
    }

    if(p) {
      printf (answer);
        return (0);
    
  }
}
