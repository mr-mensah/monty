#include "monty.h"
/**
 * error_optstoke - function that sets the error code
 * @err_code: argument
 */
void error_optstoke(int err_code)
{
int toklength = 0, i = 0;
char *string_exits = NULL;
char **new_tokens = NULL;
toklength = montytokenlen();
new_tokens = malloc(sizeof(char *) * (toklength + 2));
if (!op_toks)
{
monty_mallocerror();
return;
}
while (i < toklength)
{
new_tokens[i] = op_toks[i];
i++;
}
string_exits = chari_intget(err_code);
if (!string_exits)
{
free(new_tokens);
monty_mallocerror();
return;
}
new_tokens[i++] = string_exits;
new_tokens[i] = NULL;
free(op_toks);
op_toks = new_tokens;
}
