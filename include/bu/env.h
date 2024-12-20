/*                          E N V . H
 * BRL-CAD
 *
 * Copyright (c) 2007-2024 United States Government as represented by
 * the U.S. Army Research Laboratory.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this file; see the file named COPYING for more
 * information.
 */

#ifndef BU_ENV_H
#define BU_ENV_H

#include "common.h"

#include "bu/defines.h"

__BEGIN_DECLS

/** @addtogroup bu_env
 *
 * @brief
 * Platform-independent methods for interacting with the parent operating
 * system environment.
 *
 */
/** @{ */
/** @file bu/env.h */

BU_EXPORT extern int bu_setenv(const char *name, const char *value, int overwrite);


/* Specific types of machine memory information that may be requested */
#define BU_MEM_ALL 0
#define BU_MEM_AVAIL 1
#define BU_MEM_PAGE_SIZE 2

/**
 * Report system memory sizes.
 *
 * Returns -1 on error and the size of the requested memory type on
 * success.  Optionally if sz is non-NULL, the size of the requested
 * memory type will be set to it.
 */
BU_EXPORT extern ssize_t bu_mem(int type, size_t *sz);


/**
 * Select an editor.
 *
 * Returns a string naming an editor to be used.  If an option is needed for
 * invoking the editor, it is supplied via the editor_opt output.
 *
 * By default editors requiring a graphical environment will be considered - to
 * avoid this, supply 1 to the no_gui input parameter.
 *
 * If the EDITOR environment variable is set, that takes priority.  If EDITOR
 * holds a full, valid path it will be used as-is.  If not, bu_which will
 * attempt to find the full path to $EDITOR.  If that fails, $EDITOR will be
 * used as-is without modification and it will be up to the user's environment
 * to make it succeed at runtime.  If EDITOR is unset, then libbu will attempt
 * to find a viable editor option by looking for various common editors.
 *
 * If the optional check_for_editors array is provided, libbu will first
 * attempt to use the contents of that array to find an editor.  Unlike EDITOR,
 * the list contents WILL be checked.  The main purpose of check_for_editors is
 * to allow applications to define their own preferred precedence order in case
 * there are specific advantages to using some editors over others.  It is also
 * useful if an app wishes to list some specialized editor not part of the
 * normal listings.  If an application wishes to use ONLY a check_for_editors
 * list and not fall back on libbu's internal list if it fails, they should
 * assign the last entry of check_for_editors to be NULL to signal libbu to
 * stop looking for an editor there:
 *
 *  int check_for_cnt = 3; const char *check_for_editors[3] = {"editor1", "editor2", NULL};
 *
 * We are deliberately NOT documenting the libbu's own internal editor list as
 * public API, nor do we make any guarantees about the presence of any editor
 * that is on the list will take relative to other editors.  What editors are
 * popular in various environments can change over time, and the purpose of
 * this function is to provide *some* editor, rather than locking in any
 * particular precedence.  check_for_editors should be used if an app needs
 * more guaranteed stability in lookup behaviors.
 *
 * Caller should NOT free either the main string return from bu_editor or the
 * pointer assigned to editor_opt.  They may both change contents from one
 * call to the next, so caller should duplicate the string outputs if they
 * wish to preserve them beyond the next bu_editor call.
 */
BU_EXPORT const char *bu_editor(const char **editor_opt, int no_gui, int check_for_cnt, const char **check_for_editors);

/** @} */

__END_DECLS

#endif /* BU_ENV_H */

/*
 * Local Variables:
 * tab-width: 8
 * mode: C
 * indent-tabs-mode: t
 * c-file-style: "stroustrup"
 * End:
 * ex: shiftwidth=4 tabstop=8
 */
