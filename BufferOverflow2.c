#include <stdio.h>

void printflag()
{
      char answer[30];
      int n = 0;
      answer[n++] = 'L';
      answer[n++] = 'B';
      answer[n++] = 'C';
      answer[n++] = 'T';
      answer[n++] = 'F';
      answer[n++] = '{';
      answer[n++] = 'B';
      answer[n++] = 'u';
      answer[n++] = 'f';
      answer[n++] = 'f';
      answer[n++] = 'e';
      answer[n++] = 'r';
      answer[n++] = 'i';
      answer[n++] = 'n';
      answer[n++] = 'g';
      answer[n++] = '2';
      answer[n++] = '1';
      answer[n++] = '2';
      answer[n++] = '2';
      answer[n++] = '3';
      answer[n++] = '\0';
      printf(answer);
    printf("%s", answer);
    printf("How did you get here!\n");
}

void echo()
{
    char buffer[20];

    printf("What's your student ID:\n");
    scanf("%s", buffer);
    printf("Your student ID is: %s\n", buffer);    
}

int main()
{
    echo();

    return 0;
}
