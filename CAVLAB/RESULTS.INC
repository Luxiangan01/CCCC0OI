c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  results.inc
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
      common /results/ times,ntimes,dtimes,
     &                 np,ns,nrub,pnt(2,npntsmax),nbed,gamma,
     &                 svel(nsurfmax),sarea(npntsmax),stheta(nsurfmax),
     &                 mtype(nsurfmax),tr(nsurfmax),
     &                 flw(nsurfmax),ftotal,fwall,ftop,fbed,
     &                 renorm,fprod,tprod,tvoid,yprod(5),
     &                 fwallp,twallp,ywallp(5),charwall,
     &                 txtc(nbedmax),nchk(nbedmax),
     &                 qsol(nbedmax),qrad(nsurfmax),
     &                 voltot,volrok,volcol,volrub,
     &                 dvoltot,dvolrok,dvolcol,dvolrub,
     &                 fluxwall,fluxtop,fluxbed,
     &                 smth(5),dsmth(5),res(15),dres(15),
     &                 ruba,rubc,rubr,rchar,rcar(4),rrock(4),
     &                 iflagr,alpha,xc,froof,yroof(5),
     &                 ftopp,ytopp(5),fbedp,ybedp(5),yco2,yh2o,
     &                 yco,yh2,cyh2,cyco,cyco2,cyh2o,cyhc,cyinert,
     &                 vchtot,vchcoal,vchrock,betas(npntsmax),
     &                 ps(nrp*nzp),nash,
     &                 foutflo,youtflo(5),waterin,waterino,
     &                 pntchan(2,nptcm,nslicem),tg(nslicem),
     &                 charchan(nslicem),fwvap,dvcolold,wctop,
     &                 charcav,dcharcav,charlost,waterwall,
     &                 timewat,rwatcav(nmax_max),hwatcav(nmax_max),
     &                 xwatchan(nmax_max),hwatchan(nmax_max),fro,hvgo,                                  
     &                 u1_us,u2_us,hv,r1,r2,dot_e2,dot_e1,
     &                 ye1,ye2,yi_e1,yi_e2,ref(60000),
     &                 di(50000),ref_d(50000),ref_dd(50000)
