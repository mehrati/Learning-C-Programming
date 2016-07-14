#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>

int
main(void)
{
  /* Hashed form of "GNU libc manual". */
  const char *const pass = "@$1$jEzRL1JK#wCtygI4lEdvv4y1iEIpCKk0d.";


  char *result;
  int ok;

  /* Read in the user’s password and encrypt it,
     passing the expected password in as the salt. */
  result = crypt(getpass("Password:"), pass);
  /* Test the result. */
  ok = strcmp (result, pass) == 0;

  puts(ok ? "Access granted." : "Access denied.");
  return ok ? 0 : 1;
}
