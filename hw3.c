#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_LENGTH 100

void build_a_lst(),print_a_line(),print_lst();
void insert_at_end();

struct clip {
  int views;
  char *user;
  char *id;
  char *title;
  struct clip *next;
} *head;

int main(int argc, char **argv) {
  build_a_lst(*(argv+1));
  print_lst(head);		/* prints all the users */

  return 0;
}

void build_a_lst(char *fn) {
  FILE *fp;
  char line[LINE_LENGTH];
  //  char *line;
  if ((fp = fopen(fn,"r")) != NULL) {
    while (fgets(line, LINE_LENGTH, fp) != NULL) {
      insert_at_end(line);	/* insert a user at end of the list */
    }
    fclose (fp);
  }
}

void insert_at_end(char *s) {

  clip *p1, *p2;
  p1 = malloc(sizeof(struct clip));
  p1->user = malloc(strlen(s));   
  strcpy(p1->user, s);
  p1->next = null;

  if (head==NULL)
         {
           head=p1;
         }
  else {
          while(p2->next!=NULL)
          p2 = p2->next;
       }
}

/* prints all the users */
void print_lst(struct clip *cp) {
    while(p2->next != NULL)
    p2 = p2->next;
    printf("%s", p2->user);
  }

  return;

/* end */