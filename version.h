/* File:			version.h
 *
 * Description:		This file defines the driver version.
 *
 * Comments:		See "readme.txt" for copyright and license information.
 *
 */

#ifndef __VERSION_H__
#define __VERSION_H__

/*
 *	BuildAll may pass POSTGRESDRIVERVERSION, POSTGRES_RESOURCE_VERSION
 *	and PG_DRVFILE_VERSION via winbuild/psqlodbc.vcxproj.
 */
#ifndef POSTGRESDRIVERVERSION
#define POSTGRESDRIVERVERSION		"09.06.0200"
#endif
#ifndef POSTGRES_RESOURCE_VERSION
#define POSTGRES_RESOURCE_VERSION	POSTGRESDRIVERVERSION
#endif
#ifndef PG_DRVFILE_VERSION
#define PG_DRVFILE_VERSION		9,6,02,00
#endif

#endif
