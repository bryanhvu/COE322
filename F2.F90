program F2

implicit none
real, parameter :: pi = 3.141519

real :: a, b, c, V1, V2, d
character(len=20) :: name;


print *, "Enter full name with space in between: "
read *, name
name = trim(name)

print *, 'Hello', name, "Enter three numbers: "
read *, a, b, c

! volume of a sphere with radius a
V1 = (4.0/3) * pi * a**3
! volume of a rectangular prism with sides: a, b, c
V2 = a * b * c 

print *, "Volume of sphere:", V1
print *, "Volume of rectangular prism:", V2

! bonus: 'typecasting' d into type int
! d = (a * b * c)/7

end program F2


