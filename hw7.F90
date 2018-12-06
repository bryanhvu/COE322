program HW4
implicit none

integer :: input

print *, "Enter number of primes: "
read *, input
call primes(input)

contains
        subroutine primes(num)
                integer :: i,j,num,counter = 0
                logical :: flag = .TRUE.

                print *, 2
                counter = counter + 1
                
                do i = 3, huge(num)
                        do j = 2, i-1
                                ! not prime
                                if (mod(i,j) == 0) then
                                        flag = .FALSE.
                                        exit
                                else
                                        flag = .TRUE.
                                end if
                        end do
                if ( counter == num ) then 
                        exit
                else if ( flag == .TRUE. ) then
                        print *, i
                        counter = counter + 1
                end if
                end do
        end subroutine

end program                        
