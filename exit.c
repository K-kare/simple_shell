#include"shell.h"
/**
*exit_func - function to exit shell
*/
void exit_func(void)
{
int status = EXIT_SUCCESS;
if (status == 0)
{
exit(EXIT_SUCCESS);
}
else
{
exit(EXIT_FAILURE);
}
}
