#include "minishell.h"

int	main(void)
{
	char *a;

	a = readline("minishell$");
	while (a)
	{
		if (*a)
		{
			add_history(a);
		}
		free(a);
		a = readline("minishell$");
	}
	write(1, "exit\n", 5);
	return (0);
}