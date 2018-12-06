       ! bv4987
       ! bryanhvu5@gmail.com
       program hello 
       implicit none
       real                     :: a, b, c, d, V, V2, PI = 4.*ATAN(1.0)
       character(len = 12)      :: name

       print *, "Enter your name and then three numbers."        
       read *, name, a, b, c
       print *, "Hello ", name
 
       V = 4./3*PI*a**3
       V2 = a*b*c
       d = a*b*c/7

       print *, "Volume of a sphere with radius ", a, ": ", V
       print *, "Volume of a rectangular prism with sides ", a, b,c, ": ", V2
       print *, "The integer value d is: ", INT(d)

       end program
