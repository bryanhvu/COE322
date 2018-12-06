program HW6
implicit none

integer :: input

print *, "Enter a number: "
read *, input

! call function
print *, isprime(input)

contains 
       logical function isprime(num) 
                integer :: num, i

                do i = 2, num-1
                if (mod(num,i) == 0) then
                        isprime = .FALSE.
                end if
                end do
                ! taking advantange of functions ability to only
                ! return a one value
                isprime = .TRUE.
        end function

end program                        
