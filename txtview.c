#include "txtview.h"

void show_info();
void show_message(const char *message);
FILE *open_read(const char *name);
void do_pause();
void break_up(const int current);
void print_text(FILE *target);
void print_file(const char *name);

int main(int argc,char *argv[])
{
 show_info();
 if (argc<2)
 {
  puts("You must give a target file name as the command-line argument");
  exit(EXIT_FAILURE);
 }
 else
 {
  print_file(argv[1]);
  show_message("The end of the file. Press Enter to exit");
  do_pause();
 }
 return EXIT_SUCCESS;
}

void show_info()
{
 putchar('\n');
 puts("Txt view 0.9.4");
 puts("The simple tool for printing text files to the console by Popov Evgeniy Alekseyevich,2019-2026 years");
 puts("This program is distributed under the GNU GENERAL PUBLIC LICENSE");
 putchar('\n');
}

void show_message(const char *message)
{
 putchar('\n');
 puts(message);
}

FILE *open_read(const char *name)
{
 FILE *target=NULL;
 if (name!=NULL)
 {
  target=fopen(name,"r");
 }
 if (target==NULL)
 {
  fputc('\n',stderr);
  fputs("Can't open the target file",stderr);
  fputc('\n',stderr);
  exit(EXIT_FAILURE);
 }
 return target;
}

void do_pause()
{
 int current=0;
 for (current=getchar();current!=EOF;current=getchar())
 {
  if (current=='\n')
  {
   break;
  }

 }

}

void break_up(const int current)
{
 static unsigned int line=0;
 if (current=='\n')
 {
  ++line;
 }
 if (line>=LINES_PER_PAGE)
 {
  show_message("Press Enter to go to the next page");
  do_pause();
  line=0;
 }

}

void print_text(FILE *target)
{
 int current=0;
 for (current=fgetc(target);current!=EOF;current=fgetc(target))
 {
  putchar(current);
  break_up(current);
 }
 putchar('\n');
}

void print_file(const char *name)
{
 FILE *target=NULL;
 target=open_read(name);
 print_text(target);
 fclose(target);
}