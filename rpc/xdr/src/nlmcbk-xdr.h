/*
  Copyright (c) 2007-2012 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _NLMCBK_H_RPCGEN
#define _NLMCBK_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define LM_MAXSTRLEN 1024

struct nlm_sm_status {
	char *mon_name;
	int state;
	char priv[16];
};
typedef struct nlm_sm_status nlm_sm_status;

#define NLMCBK_PROGRAM 100021
#define NLMCBK_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define NLMCBK_SM_NOTIFY 16
extern  void * nlmcbk_sm_notify_0(struct nlm_sm_status *, CLIENT *);
extern  void * nlmcbk_sm_notify_0_svc(struct nlm_sm_status *, struct svc_req *);
extern int nlmcbk_program_0_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define NLMCBK_SM_NOTIFY 16
extern  void * nlmcbk_sm_notify_0();
extern  void * nlmcbk_sm_notify_0_svc();
extern int nlmcbk_program_0_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nlm_sm_status (XDR *, nlm_sm_status*);

#else /* K&R C */
extern bool_t xdr_nlm_sm_status ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_NLMCBK_H_RPCGEN */
