/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expert.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshivhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 09:39:57 by ttshivhu          #+#    #+#             */
/*   Updated: 2017/10/17 09:40:12 by ttshivhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef                 EXPERT_H
# define                EXPERT_H
# include "get_next_line.hpp"
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct          s_expert
{
    char                alpha;
    int                 status;
    int                 f_facts;
    struct s_expert     *next;
}                       t_expert;

int                     is_alpha(char c);
char                    **get_instructions(char *file, char **queries, char **facts);
int                     add_item(t_expert   **head, char alpha, int f_facts, int status);
void                    print_false(t_expert *head, char *queries);
void                    solver(char **rules, char *facts, char *queries, int g_view);
void                    print_results(t_expert *head, char *queries);
int                     edit_value(t_expert **head, char alpha, int status, int amb);
int                     alpha_status(t_expert *head, char alpha);
int                     alpha_amb(t_expert *head, char alpha);
int                     check_truth(t_expert **head, char *first, int back_truth, int fuck);
void                    algo(t_expert **head, char **rules, int g_view);
void                    free_list(t_expert *head);
int                     rule_validate(char *rules);

#endif