program functionDemo
implicit none

integer :: i, j, k 
i = 4
j = 8
print *, i, j ! original vals

call swap(i,j,i,j)
print *, i, j ! swapped vals

contains

subroutine swap(a,b,a_old,b_old)
        implicit none
        integer, intent(inout) ::  a, b
        integer, intent(out) :: a_old, b_old
        a_old = a
        b_old = b
        b = a_old 
        a = b_old

end subroutine 

end program
