! bv497
! bryanhvu5@gmail.com
program fizzBuzz
implicit none

integer :: input

print *, "Input a number: "
read *, input
       
        if (input/3*3 == input .and. input/5*5 == input) then
                print *, "FizzBuzz"
        else if (input/3*3 == input) then
                print *, "Fizz"
        else if (input/5*5 == input) then
                print *, "Buzz"
        end if
end program
