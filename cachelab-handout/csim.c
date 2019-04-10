//Joe Esbenshade, jesbenshade. Dave Wu, yuwu
#include "cachelab.h"
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int v, s, e, b, c;
    char *file;

    while((c = getopt (argc, argv, "v:s:E:b:t:")) != -1) {
        switch (c) {
           case 'v':
             v = 1;
             break;
           case 's':
             s = (*optarg - '0');
             break;
           case 'E':
             e = (*optarg - '0');
             break;
           case 'b':
             b = (*optarg - '0');
             break;
           case 't':
             file = optarg;
             break;
           default:
             abort ();
        }
    }
    printf ("v = %d, s = %d, e = %d, b = %d, t = %s\n", v, s, e, b, file);
    printSummary(0, 0, 0);
    return 0;
  }
