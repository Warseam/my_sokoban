/*
** malloc_and_verifie.c for  in /home/WASSEX/Semestre1/CPE_2016_BSQ
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Wed May  3 14:32:42 2017 Wassim Alkayar
** Last update Sun May 14 12:34:06 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

char	*malloc_and_verifie(char *str, int nb)
{
  str = malloc(sizeof(char) * nb);
  if (str == NULL)
    {
      my_putstr(MEM_ERR);
      exit(84);
    }
  else
    return (str);
}

int	*malloc_and_verifie_tab(int *tab, int nb)
{
  tab = malloc(sizeof(int) * nb);
  if (tab == NULL)
    {
      my_putstr(MEM_ERR);
      exit(84);
    }
  else
    return (tab);
}
