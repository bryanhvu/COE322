program labF5
implicit none
integer :: u,v,wsq ! wsq = square of w

do u = 0, 100
        do v = 0, 100
               wsq =  u*u + v*v 
               if (u > v) then
                   cycle 
               else if (wsq <= 100**2 .and. INT(SQRT(REAL(wsq)))**2 == wsq) then
                   print *, u, v, INT(SQRT(REAL(wsq)))  
               end if
        end do
end do

end program
