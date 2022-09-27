c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  ashloc.inc
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      common /ashloc/ dr,dz,zmax,rmax,htofrock,rtmu2,inloc,irin,izin,
     &                sinkside,sinktop,pscale,
     &                isink(nrp,nzp),icond(nrp,nzp),condlow,
     &                coefra(nrp),coefrb(nrp),coefz(nzp),
     &                br(nrp*nzp),sink(nrp,nzp)
