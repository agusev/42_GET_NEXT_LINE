/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_mlt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:03:07 by agusev            #+#    #+#             */
/*   Updated: 2019/03/05 21:10:39 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
 	int fd2;
	char *line;
	int ret; /* printing gnl return value */
	int i;

	if (argc >= 2)
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			i++;
			printf("MAIN:%d, line>%s\n", ret, line);
		}
		close(fd);
		i = 0;
		fd2 = open(argv[2], O_RDONLY);
		while ((ret = get_next_line(fd2, &line)) == 1)
		{
			i++;
			printf("MAIN:%d, line>%s\n", ret, line);
		}
		close(fd2);
	}
	return (1);
}
