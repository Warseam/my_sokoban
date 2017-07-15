/*
** main.c for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sun May  7 18:08:21 2017 Wassim Alkayar
** Last update Sun May 14 12:49:09 2017 Wassim Alkayar
*/

#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include "my.h"
#include "struct.h"

void	refresh_screen(char **tab, char **otab, t_p pos)
{
  put_map(tab);
  put_mapo(otab, tab);
  mvaddch(pos.x, pos.y, 'P');
  refresh();
  keypad(stdscr, true);
}

void			print_map(char **tab, char **otab, char **argv)
{
  t_p			pos;
  int			c;
  char			key;

  curs_set(0);
  pos.y = find_player_x(tab);
  pos.x = find_player_y(tab);
  tab[pos.x][pos.y] = ' ';
  while (check_situation(tab) == 1)
    {
      check_loose(tab);
      refresh_screen(tab, otab, pos);
      c = getch();
      if (c == ' ')
	main(2, argv);
      key = get_key(c);
      handle_mouvements(key, tab, &pos);
    }
  endwin();
  exit(0);
}

void			screen_setup(char *map, char **argv)
{
  char			**tab;
  char			**otab;
  t_m			measures;
  int			i;
  int			k;
  int			j;

  k = 0;
  j = 0;
  i = 1;
  while (map[i - 1] != '\n')
    i += 1;
  measures.line_length = i;
  i = 0;
  while (map[i])
    {
      if (map[i + 1] == '\n')
	measures.line_number += 1;
      i += 1;
    }
  tab = my_map_to_tab(map);
  otab = my_map_to_tabo(map, k, j);
  initscr();
  print_map(tab, otab, argv);
  endwin();
}

int		main(int argc, char **argv)
{
  int		fd;
  char		*buff;
  int		size;
  DIR		*dir;
  int		ret;

  ret = 0;
  buff = NULL;
  if (argc != 2)
    usage_error();
  if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h')
    print_man_sokoban();
  dir = opendir(argv[1]);
  if (dir != NULL)
    dir_error();
  size = get_map_size(argv[1]);
  buff = malloc_and_verifie(buff, (size + 1));
  fd = open(argv[1], O_RDONLY);
  if (fd == -1)
    file_opening_error();
  ret = read(fd, buff, size + 1);
  buff[ret] = '\0';
  check_bad_file(buff);
  screen_setup(buff, argv);
  return (0);
}
