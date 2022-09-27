c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  wallcom.inc
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
      common /wallcom/ tw,u,beta,htc,fluxold(npntsmax),save(npntsmax),
     1                 wcch,wach,fch,ftotold,ftot,yaold,betaold,twold,
     2                 fchbeta,ftotbeta,zscale,htcs(npntsmax),nseg,dy,
     3                 jseg,ya,fli(npntsmax),watflx(npntsmax),
     4                 ypos(npntsmax),epsilon,charseg(npntsmax)
