# -*- Makefile -*-
# $Id: Makefile,v 1.4 Broadcom SDK $
# $Copyright: (c) 2016 Broadcom.
# Broadcom Proprietary and Confidential. All rights reserved.$
#
# Makefile for Linux user BDE
#
LOCALDIR = systems/bde/linux/user

CFLAGS += -I../include -I${SDK}/systems/linux/kernel/modules/include

include ${SDK}/make/Make.config

# need to add vpath sources
VPATH = ../shared

# Add the srcs to be found by vpath
LSRCS += mpool.c
LHDRS += mpool.h
LOBJS = $(addsuffix .o, $(basename ${LSRCS}))
BOBJS = $(addprefix ${BLDDIR}/,${LOBJS})

lib = liblubde

include ${SDK}/make/Make.lib

include ${SDK}/make/Make.depend
