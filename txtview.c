#define LINES_PER_PAGE 25

#include <stdio.h>
#include <stdlib.h>

void show_info();
void show_message(const char *message);
FILE *open_read(const char *name);
void do_pause();
void break_up(const char current);
void print_text(FILE *target);
void print_file(const char *name);

int main(int argc,char *argv[])
{
 show_info();
 if (argc!=2)
 {
  puts("You must get a target file name as command line argument");
 }
 else
 {
  print_file(argv[1]);
  show_message("End of the file. Press Enter to exit");
  do_pause();
 }
 return EXIT_SUCCESS;
}

void show_info()
{
 putchar('\n');
 puts("Txt view. Version 0.7.2");
 puts("The simple tool for printing a text files to console by Popov Evgeniy Alekseyevich");
 puts("This program distributed under GNU GENERAL PUBLIC LICENSE");
 putchar('\n');
}

void show_message(const char *message)
{
 putchar('\n');
 puts(message);
 putchar('\n');
}

FILE *open_read(const char *name)
{
 FILE *target;
 target=fopen(name,"rt");
 if (target==NULL)
 {
  puts("Can't open the target file");
  exit(EXIT_FAILURE);
 }
 return target;
}

void do_pause()
{
 while (getchar()!='\n')
 {
  ;
 }

}

void break_up(const char current)
{
 static unsigned char line=0;
 if (current=='\n')
 {
  ++line;
 }
 if (line>=LINES_PER_PAGE)
 {
  show_message("Press Enter to go to next page");
  do_pause();
  line=0;
 }

}

void print_text(FILE *target)
{
 char current;
 current='\n';
 while (!feof(target))
 {
  current=fgetc(target);
  putchar(current);
  break_up(current);
 }

}

void print_file(const char *name)
{
 FILE *target;
 target=open_read(name);
 print_text(target);
 fclose(target);
}