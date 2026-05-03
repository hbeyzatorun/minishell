#include "minishell.h"

t_val_token	*new_token(char *value, value_token type)
{
	t_val_token	*token;

	token = malloc(sizeof(t_val_token));
	if (!token)
		return (NULL);
	token->value = ft_strdup(value);
	token->type = type;
	token->next = NULL;
	return (token);
}

void	t_val_token_add(t_val_token **stack, t_val_token *new)
{
	t_val_token *add;
	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	add = *stack;
	while (add->next)
		add = add->next;
	add->next = new;
}