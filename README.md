CAVLAB is MATLAB's version of the Cavity Simulation Model (CAVSIM), which was originally written in FORTRAN. CAVSIM is a 3-D and 
axissymmetric model that can simulate an Underground Coal Gasification (UCG) process. It has the capability to predict the growth 
of cavity from the start of coal combustion to its complete exhaustion. The model can handle a range of gas injection flow patterns 
or compositions and is applicable to nonswelling coals with any seam thickness.A gravity drainage-permeation submodel that is
incorporated into the overall solution determines the amount of water input from the coal aquifer. For the detailed discussion of
the computational scheme, visit the link:




||-----------------------------------------------Running CAVLAB--------------------------------------------------------------------------|| 
                      
1) Save the folder CAVLAB anywhere on your hard-drive.
2) Run MATLAB and change its working directory to the folder where you have stored the files in 1).
3) In MATLAB, in the 'Current Folder' window, double click on the file 'CAVLAB.slx'—This will open the SIMULINK file containing the UCG simulator.
There are two inputs to the UCG plant, I) Steam to oxygen ration, and II) flow rate of gases. Similarly, there are two outputs, I) heating value, and II) flow rate.

4) You can run 'CAVLAB.slx' at its default settings and view the UCG simulation results.

                                              OR
5) You can paramatrize the UCG by defining your own inputs, and changing the properties of coal reactor by editing the variables
in 'in.INP' file. You can also change the time-step information at which the numerical computation of simulation are carried out by editing the:
Simulation---> Configuration Parameters---> Solver details---> Fixed-step size.

NOTE: Please don't make changes to any editable files except the ones mentioned above.
