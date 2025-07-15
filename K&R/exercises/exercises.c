#include "exercises.h"
#include "../examples/examples.h"
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define MAXLINE 10
#define TAB_SIZE 8
void exercise1_8() {
  /*
         Exercise 1-8
         Write a program to count blanks, tabs, and newlines.
     */
  int nb = 0, nt = 0, nn = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      ++nt;
    else if (c == ' ')
      ++nb;
    else if (c == '\n') {
      printf("newlines are %d new tabs are %d blanks are %d\n", ++nn, nt, nb);
      nb = 0, nt = 0;
    }
  }
}

void exercise1_9_1() {
  int c, b = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && b == 0)
      b++;
    else if (c != ' ' && b == 1)
      b = 0;
    else if (c == ' ' && b > 0)
      continue;
    putchar(c);
  }
}

void exercise1_9_2() {
  int c, b = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      b++;
      if (b < 2) {
        putchar(' ');
      }
    } else {
      putchar(c);
      b = 0;
    }
  }
}

void exercise1_9_3() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      putchar(' ');
      while ((c = getchar()) != EOF)
        if (c != ' ')
          break;
    }
    putchar(c);
  }
}

void exercise1_9_4() {
  int c, p;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && p == ' ') {
      p = c;
      continue;
    } else {
      putchar(c);
      p = c;
    }
  }
}
void exercise1_10() {
  for (int c; (c = getchar());) {
    switch (c) {
    case '\t':
      printf("\\t");
      break;
    case '\b':
      printf("\\b");
      break;
    case '\\':
      printf("\\");
      break;
    default:
      putchar(c);
    }
  }
}

void exercise1_11() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
    if (c == '\n') {
      printf("line: %d word: %d character: %d\n", ++nl, nw, nc);
    }
  }
}

void exercise1_16() {
  int len = 0, longest_len = 0;
  char line[MAXLINE];
  char longest[MAXLINE];
  while ((len = get_line(line, MAXLINE)) > 0 && len <= MAXLINE) {
    if (len > longest_len) {
      copy_string(longest, line);
      longest_len = len;
    }
  }
  printf("The longest string is %s\n", longest);
};

void exercise1_19() {
  char input[256], c;
  int i = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      for (i = i - 1; i >= 0; i--) {
        putchar(input[i]);
      }
      putchar('\n');
    }
    printf("%d\n", i);
    input[i++] = c;
  }
}

void exercise1_20() { // detab
  int c, i = 1;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      do {
        putchar(' ');
      } while (i++ % TAB_SIZE != 0);
    } else if (c == '\n') {
      i = 1;
      putchar('\n');
    } else {
      putchar(c);
      i++;
    }
  }
}

void exercise1_21() {
  char string[] = "This is      big, isn't          it,  right?";
  int c = 0;
  for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' ') {
      do {
        c++;
      } while (string[++i] == ' ');
      int tab_c = c / TAB_SIZE;
      int spc_c = c - TAB_SIZE * tab_c;
      for (int j = i; j <= c; j++) {
        if (tab_c > 0)
          string[j] = '\t';
        else if (spc_c > 0)
          string[j] = ' '
      }
    }
    c = 0;
  }
}