c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
c  spall.inc  (Include file for the SPALL program)
c
c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
c
      PARAMETER (NSIZE=16,LIW=75,LRW=800)
      COMMON /PARAM/ RHOSO,WC,WW,WMW,WMC,TROOF,TB,TB4,CSD,CG,
     1               TA,TS,G1,G2,G3,G4,G5,G6,G7,G8,G9,ALF,H,CSW,
     2               PHI,YW,VPRM,RHOW,PI,SPI,YPH2O,YPCO2
      COMMON /VELT/ ELDOT,GDOT,TR,ERR,D,SK1,QRF,RHOSD,NOD,FW
      COMMON /FLAG/ IRES,IGAS,ICOND,IPYR,IBC,ICHK1,ICHK2,ICHK3
      COMMON /LUS/ LUIN,LUTTY,LUOUT,LUAVG,LUTRN
      COMMON /SPL/ ISP,ISPMAX,TRAVG,QRAVG,DPAVG,VRAVG,VSPAVG,
     1               TPAVG,FGAVG,YWAVG,TFAIL,XFAIL
      common /conduct/ skw, sklin1,sklin2
