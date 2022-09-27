c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  params.inc
c
c  Problem parameters.  Primarily for sizing of internal arrays.
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
      integer padress
      integer*4 nwbig
      parameter ( npntsmax=40 )
      parameter ( nsurfmax=npntsmax-1)
      parameter ( nbedmax = 2)
c  note maximum grid size for ash flow solution is nrp-3,nzp-3
      parameter (nrp=34,nzp=34)
      parameter (ldap=3*nrp+1)
      parameter (nwbase=6*nrp*nzp)
      parameter (nimax=21)
      parameter (nsize1=20, nsize2=10)
      parameter (nslicem=15)
      parameter (nptcm=20)
      parameter (nmax_max=31)
      parameter (nmax1=nmax_max+1)
      parameter (lrw=22+10*nmax1+3*nmax1**2)
      parameter (liw=20+nmax1)
      parameter (nwrksize=6*npntsmax)
c add at hp100 transfer, size of binary record written
      parameter (len_wrd_rec=40)
      parameter (len_byt_rec=2*len_wrd_rec)
