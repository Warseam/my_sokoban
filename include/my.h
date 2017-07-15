/*
** my.h for  in /home/WASSEX/Semestre1/Unix/PSU_2016_my_sokoban/include
** 
** Made by Wassim Alkayar
** Login   <WASSEX@epitech.net>
** 
** Started on  Sun May  7 18:08:13 2017 Wassim Alkayar
** Last update Sat Jul 15 22:06:04 2017 Wassim Alkayar
*/

#ifndef MY_H_
# define MY_H_
# define USAGE_ERR	"Usage : ./my_sokoban [filename].\n"
# define MEM_ERR	"Memory allocation failed\n"
# define DIR_ERR	"The first argument should be a file, not a directory.\n"
# define FILE_ERR	"Opening file error.\n"
# define FILE_CHAR_ERR	"Your map is not made for this game.\n"

# include "struct.h"

int	main(int argc, char **argv);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);

int	get_line_number(char *str);
int	get_line_length(char *str);
char	**my_map_to_tab(char *str);
char	**my_map_to_tabo(char *str, int k, int j);
int	check_situation(char **tab);

void	put_map(char **tab);
void	put_mapo(char **tabo, char **tab);

int	find_player_x(char **tab);
int	find_player_y(char **tab);

void	handle_mouvements(char key, char **tab, t_p *pos);

char	*malloc_and_verifie(char *str, int nb);
void	print_man_sokoban();
char	get_key(int key);
int	get_map_size(char *map);

void	check_loose(char **tab);
int	check_loose_X(char **tab, int y, int x);

void	usage_error();
void	malloc_error();
void	dir_error();
void	file_opening_error();
void	check_bad_file(char *map);

#endif /* !MY_H_ */
