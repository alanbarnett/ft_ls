/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <alanbarnett328@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:23:26 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/03 19:38:28 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libftprintf.h"

/*
** libftprintf.h includes libft.h
** libft.h includes unistd.h and stdlib.h
**
** Allowed functions from unistd.h:
** readlink
** write
**
** Allowed functions from stdlib.h:
** malloc
** free
*/

# include <dirent.h>

/*
** Allowed functions from dirent.h:
** opendir
** readdir
** closdir
*/

# include <sys/stat.h>

/*
** Allowed functions from sys/stat.h:
** stat
**	stat obtains information about the file pointed to by path
**
** lstat
**	lstat does the same as stat, but for a symlink instead of the thing it
**	links to
*/

# include <sys/types.h>
# include <pwd.h>
# include <uuid/uuid.h>
# include <grp.h>

/*
** Allowed functions from those:
** getpwuid
** getgrgid
*/

# include <sys/xattr.h>

/*
** Allowed functions from sys/xattr.h:
** listxattr
** getxattr
*/

# include <time.h>

/*
** Allowed functions from time.h:
** time
** ctime
*/

# include <string.h>

/*
** Allowed functions from string.h:
** strerror
*/

# include "dir.h"
# include "file.h"
# include "bad.h"
# include "compare.h"
# include "flags.h"

char			*get_dirname(char *cur, char *add);
t_binarytree	*load_tree(t_binarytree *dirtree, t_flags *flags, char **error);
void			recurse_dirs(t_binarytree *dirs, t_flags *flags);
t_binarytree	*get_dirs(char **folders, int (*compare)(char *s1, char *s2));

#endif
