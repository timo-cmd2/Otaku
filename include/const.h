#ifndef ROSE__CONST_H
#define ROSE__CONST_H

#define PRIVATE		static
#define PUBLIC

#ifndef _VARALLOC
#define EXTERN		extern
#else
#undef  EXTERN
#define EXTERN
#endif

#ifdef  NULL
#undef  NULL
#endif
#define NULL	((void *)(0))

#define FREQ	60	/* timer frequency */
#define TICKS2CALL	200	

#endif /* ROSE__CONST_H */
