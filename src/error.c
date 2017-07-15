/*
** error.c for  in /home/WASSEX/Semestre1/Cprog-Elem/CPE_2016_BSQ/src
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Mon May  8 12:34:01 2017 Wassim Alkayar
** Last update Sun May 14 12:32:59 2017 Wassim Alkayar
*/

#include <stdlib.h>
#include "my.h"

void	usage_error()
{
  my_putstr(USAGE_ERR);
  exit(84);
}

void	malloc_error()
{
  my_putstr(MEM_ERR);
  exit(84);
}

void	dir_error()
{
  my_putstr(DIR_ERR);
  exit(84);
}

void	file_opening_error()
{
  my_putstr(FILE_ERR);
  exit(84);
}
