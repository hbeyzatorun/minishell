#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft/libft.h"
# include <readline/history.h>
# include <readline/readline.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef enum value_token
{
	characters,    // kelime la ls
	handle,        //'
	handledouble,  //"
	redirect_in,   //<
	redirect_out,  //>
	heredoc,       //<<
	append,        //>>
	pipes,         // |
	env_variables, // $

}						value_token;

typedef struct s_val_token
{
	value_token			type;
	struct s_val_token	*next;
	char				*value;

}						t_val_token;

#endif