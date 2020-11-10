#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gotoNextWord();

char str[200] = "Blackbird singing in the dead of night in";
char w[20] = "in";
int slen, wlen, wcount, i, j;

int main () {
  //input 

  slen = strlen(str);
  wlen = strlen(w);

  i = j = wcount = 0;
  while (i < slen) {
    if (str[i] == w[0]) {
      // first letter of the word found
      for (j = 0; j < wlen; j++) {
        if (str[i + j] != w[j]) {
          // mismatch
          gotoNextWord();
          break;
        }
      }
      if (j == wlen) {
        // match found
        if (isspace(str[i + j]) || ispunct(str[i + j]) || str[i + j] == '\0') {
          wcount++;
          i += j;
        }
      }
    }
    else {
      gotoNextWord();
    }
    i++;
  }

  printf("Word count: %d\n", wcount);
  return 0;
}

void gotoNextWord() {
  while (isspace(str[i]) == 0 && ispunct(str[i]) == 0 && str[i] != '\0')
    i++;
}