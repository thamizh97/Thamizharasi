#include<stdio.h>
void main()
{
  char in_name[800];
  FILE *in_file;
  char ch,space=0;
  printf("enter file name:\n");
  scanf("%s",in_time);
   in_file = fopen(in_name, "r");

    if (in_file == NULL)
        printf("Can't open %s for reading.\n", in_name);
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
          character++;
          if(ch==' ')
          space++;
        }
        fclose(in_file);
        printf("\n number of sapces=%d", space);
    }
}
        
  
