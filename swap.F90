program functionDemo
implicit none

integer :: i, j, k 
i = 4
j = 8
print *, i, j ! original vals

call swap(i,j)
print *, i, j ! swapped vals

contains

subroutine swap(a,b)
        implicit none
        integer :: buffer, a, b
        buffer = b
        b = a 
        a = buffer

end subroutine 

end program
