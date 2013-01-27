1.upto 100 do |n|
  result = if n % 5 == 0 && n % 3 == 0
    'FizzBuzz'
  elsif n % 5 == 0
    'Fizz'
  elsif n % 3 == 0
    'Buzz'
  else
    n
  end
  
  puts result
end
