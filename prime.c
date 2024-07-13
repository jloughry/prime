#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int main (int argc, char ** argv) {
  long x = 0;
  switch (argc) {
    case 2:
      x = atol(argv[1]);
      break;
    default:
      fprintf (stderr, "USAGE: %s n, where n is greater than zero\n", argv[0]);
      exit (EXIT_FAILURE);
      break;
  }
  assert (x > 0);

  switch (x) {
    case 1:
      fprintf (stdout, "1 is a special case.\n");
      return EXIT_SUCCESS;
      break;
    case 2:
      fprintf (stdout, "2 is prime.\n");
      return EXIT_SUCCESS;
      break;
    default:
      break;
  }

  if (0 == (x % 2)) {
    fprintf (stdout, "%ld / 2 = %ld\n", x, x / 2);
    return EXIT_SUCCESS;
  }
  for (long d = 3; d <= (long)sqrt(x) + 1; d += 2 ) {
    if (0 == (x % d)) {
      fprintf (stdout, "%ld / %ld = %ld\n", x, d, x / d);
      return EXIT_SUCCESS;
    }
  }
  fprintf (stdout, "%ld is prime.\n", x);

  return EXIT_SUCCESS;
}
