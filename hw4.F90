program HW4
implicit none

integer :: i, j
logical :: flag = .FALSE.

! by definition 0 and 1 are not prime
print *, "0 is not prime, by definition"
print *, "1 is not prime, by definition"

! 2 is the first prime number and is hard coded for performance 
print *, "2 is prime"

do i = 3, 100
        do j = 2, i-1
                if (mod(i,j) == 0) then
                        print *, i, "is not prime: it is divisible by", j
                        flag = .TRUE.
                        exit
                else
                        flag = .FALSE.
                end if
        end do
if ( flag == .FALSE. ) then
        print *, i, "is prime"
end if
end do

end program                        
