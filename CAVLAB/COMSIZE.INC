c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  comsize.inc
c
c  The following gives the common sizes in words
c  All reals are grouped in the last term.  Real size is 4 words.
c  These are necessary for all commons written to binary file.
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
      parameter (iashcom = 4 +           4*(4) )
      parameter (icntrl =  1 +           4*(4) )
      parameter (iconst =                4*(3) )
      parameter (ifeed =   3 +           4*(4*nimax + 20) )
      parameter (igeom =                 4*(9) )
      parameter (ipregres = 3*20+3 +     4*(3*nsize1*nsize2+2) )
      parameter (iprop =                 4*(40) )
      parameter (iresults = 7+nsurfmax +
     &                      nbedmax    + 4*(4*npntsmax + 5*nsurfmax +
     &                                      (2+2*nptcm)*nslicem +
     &                                      4*nmax_max + 2*nbedmax +
     &                                      nrp*nzp  +
     &                                      136) )
      parameter (itherm =                4*(2) )
      parameter (itiming = 3 +           4*(4) )
      parameter (itol =                  4*(3) )
      parameter (ivers = 92                    )
      parameter (ioutflo = 3 +           4*(2*nslicem + 5) )
