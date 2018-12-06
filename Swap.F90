program Swap
implicit none

integer :: i=2, j=3
print *, i, j ! original vals
swap(i,j)
print *, i, j ! swapped vals

contains

subroutine swap(a,b)
integer :: buffer = b
b = a 
a = buffer

end subroutine 

end program
