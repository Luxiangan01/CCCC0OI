      parameter (num_max=500)
      parameter (nvar_max=10)
      parameter (nlab_max=10)
c----------------------------------------------------------------------
      character name_dat*50
      common /data/ num, nvar, x(num_max), y(num_max,nvar_max)
c----------------------------------------------------------------------
      common /file/ name_dat
c----------------------------------------------------------------------
      common /lus/ lutty,lukb
c----------------------------------------------------------------------
      character title*80,xlabel*80,ylabel*80,label*80,curve_label*80
      integer point_type
      logical auto_scalex,auto_scaley
      common /plt_info/ xmin,xmax,ymin,ymax,luplt,title,xlabel,ylabel,
     &                  nlab,label(nlab_max),xl(nlab_max),yl(nlab_max),
     &                  line_type(nvar_max),point_type(nvar_max),
     &                  curve_label(nvar_max),yfactor(nvar_max),
     &                  yoffset(nvar_max),xfactor,xoffset,
     &                  auto_scalex,auto_scaley
