/*
** utils1.c for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sun May  7 20:09:00 2017 Wassim Alkayar
** Last update Sat Jul 15 22:06:43 2017 Wassim Alkayar
*/

#include <stdlib.h>

int	get_line_number(char *str)
{
  int	i;
  int	line_nb;

  i = 0;
  line_nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	line_nb = line_nb + 1;
      i = i + 1;
    }
  return (line_nb);
}

int	get_line_length(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n')
    i = i + 1;
  return (i);
}

char	**my_map_to_tab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  tab = malloc(sizeof(char *) * (get_line_number(str) + 1));
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * (get_line_length(str) + 2));
      j = 0;
      while (str[i] != '\n')
	{
	  tab[k][j] = str[i];
	  i = i + 1;
	  j = j + 1;
	}
      tab[k][j] = '\0';
      k = k + 1;
      i = i + 1;
    }
  tab[k] = '\0';
  return (tab);
}

char	**my_map_to_tabo(char *str, int k, int j)
{
  char	**tab;
  int	i;

  i = 0;
  k = 0;
  tab = malloc(sizeof(char *) * (get_line_number(str) + 1));
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * (get_line_length(str) + 2));
      j = 0;
      while (str[i] != '\n')
	{
	  if (str[i] == 'O')
	    tab[k][j] = str[i];
	  else
	    tab[k][j] = ' ';
	  i = i + 1;
	  j = j + 1;
	}
      tab[k][j] = '\0';
      k = k + 1;
      i = i + 1;
    }
  tab[k] = '\0';
  return (tab);
}

int	check_situation(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  if (tab[i][j] == 'O')
	    return (1);
	  j = j + 1;
	}
      i = i + 1;
    }
  return (2);
}
