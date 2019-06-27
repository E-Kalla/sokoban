/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** my.h
*/

typedef struct map_s {
    int xp;
    int yp;
    char *map;
    int *xoinmap;
    int *yoinmap;
    char **mapi;
    char **save;
    int midx;
    int midy;
} map_t;

void    check_window(map_t *sokoban);
void    short_lost(map_t *sokoban, int *i, int *j);
void    short_middle_map(map_t *sokoban, int *j);
void    short_where_o(map_t *sokoban, int *i, int *j, int *a);
void    short_down(map_t *sokoban);
void    short_up(map_t *sokoban);
void    short_left(map_t *sokoban);
void    short_right(map_t *sokoban);
void 	check_arround(map_t *sokoban, int i, int j);
int     print_lost(map_t *sokoban);
int 	check_lost(map_t *sokoban);
void    check_oandx(char *map);
int 	print_win(map_t *sokoban);
int     check_win(map_t *sokoban);
void    get_middlemap(map_t *sokoban);
char    *my_strncpy(char *dest, char const *src, int n);
int	    line_count(char *str);
char	**my_str_to_wordtab(char *str);
int     verif_char(char c);
int 	is_on_o(map_t *sokoban);
void    where_are_o(map_t *sokoban);
int     my_putstr(char *str);
void    my_putchar(char n);
char    *getmap(char *map, char *filepath);
void    displaymap(map_t *sokoban);
int     movement(map_t *sokoban);
int 	find_player(map_t *sokoban);
void	upper(map_t *sokoban);
void 	left(map_t *sokoban);
void	down(map_t *sokoban);
void 	right(map_t *sokoban);
int 	my_strlen2(char *str);
void	push_up(map_t *sokoban);
void	push_down(map_t *sokoban);
void	push_left(map_t *sokoban);
void	push_right(map_t *sokoban);
char    *my_strcpy(char *dest, char *src);
void    reload(map_t *sokoban);
int     check_arg(int ac, char **argv);
void    display_desc(void);
int     compare(char *str, char *dest);
int     check_map(char *map);
