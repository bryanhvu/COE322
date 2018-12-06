! bv4987
! bryanhvu5@gmail.com
module pointMod
implicit none

type Point
        real                    :: xcoord, ycoord
end type Point
contains 
        real function distance(p,q)
                type(Point) :: p, q
                ! implementing distance formula between two points 
                distance = sqrt((q%xcoord - p%xcoord)**2 + (q%ycoord - p%ycoord)**2)
        end function
        subroutine printout(p)
                type(Point) :: p
                ! printout point coordinate
                print *, "(", p%xcoord, ", ", p%ycoord, ")"
        end subroutine
end module pointMod

program main
use pointMod
type(Point)     :: point1, point2
real            :: dist

! assigning arbritrary points
point1%xcoord = 3
point1%ycoord = 4

point2%xcoord = 5
point2%ycoord = 12

! call distance functiono to calculate and return result 
dist =  distance(point1,point2)

! call printout subroutines to display points of interest
print *, "Point 1 coordinate: "
call printout(point1)
print *, "Point 2 coordinate: " 
call printout(point2)
print *, "The distance between point 1 and point 2 is: ", dist
end program
