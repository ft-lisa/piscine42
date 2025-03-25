/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramiro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:45:50 by jramiro           #+#    #+#             */
/*   Updated: 2024/08/25 15:52:57 by jramiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "initialize.c"
#include "verif_input.c"
#include "verif_error.c"
#include "place_safe_one.c"
#include "deduction.c"
#include "printer.c"

int	main(int argc, char ** argv)
{
        /* FOR TESTING 
        int argc = 2;
        char *str = "a.out";
        char *str2 = "3 3 2 1 1 2 3 3 3 2 2 1 1 2 2 3";
        char *arrch[] = {str, str2, NULL};
        char **argv = arrch;
        // TO CHANGE */
        
        int     i;
        int     rows;
        int     cols; 
        if(!verif_input(argc, argv))
		return (1);
        if(!verif_error(argv[1]))
		return (1);
	rows = 6;
        cols = 6;
        // Allocate memory for each row of the matrix
	char	**matrix = malloc(rows * sizeof(char *));
        // Allocate memory for each column on each row
        i = 0;
        while (i < rows)
        {
                matrix[i] = malloc(cols * sizeof(char));
                i++;
        }
	initialize(argv, matrix);
        place_safe_one(matrix);
	deduction(matrix);
        // FOR TESTING
        i = 0;
        while (i < rows)
        {
                printf("%s\n", matrix[i]);
                i++;
        }
        printf("------\n");
        // TO CHANGE 

        printer(matrix);
        // Free each row (char *) then the char **
        i = 0;
        while (i < rows)
        {
                free(matrix[i]);
                i++;
        }
        free(matrix);
        return (0);
}
