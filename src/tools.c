/*
** tools.c for tools in /home/Max/Documents/src
** 
** Made by fourrier maxence
** Login   <maxence.fourrier@epitech.eu>
** 
** Started on  Tue May 16 10:17:17 2017 fourrier maxence
** Last update Mon Aug  7 15:10:20 2017 maxence.fourrier
*/

#include "my.h"

int	new_cmp(char *a, char *b)
{
  int	i;

  i = 0;
  while (a[i] && b[i])
    {
      if (a[i] != b[i])
	return (0);
      i++;
    }
  return (1);
}

char	*get_term(char **env, char *str)
{
  int	y;
  int	cpt;

  cpt = 0;
  y = 0;
  while (env[y])
    {
      if (new_cmp(str, env[y]))
	{
	  while (env[y][cpt] != '=' && env[y][cpt])
	    cpt++;
	  return (env[y] + cpt + 1);
	}
      y++;
    }
  return (NULL);
}

int	check_name(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i])
    {
      if (my_strcmp(str + i, END_FILE))
	return (0);
      i++;
    }
  return (-1);
}

int	my_spcmp(char *str, char *cmp)
{
  int	i;

  i = 0;
  while (cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
        return (0);
      i++;
    }
  return (1);
}
