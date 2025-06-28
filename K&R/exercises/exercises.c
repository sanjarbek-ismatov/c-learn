#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
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
