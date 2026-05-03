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
		a = readline("minishell$");
	}
	return (0);
}