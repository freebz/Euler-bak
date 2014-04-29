#!/usr/bin/ruby

LIMIT = 5

result, n = 1, 1

(3..LIMIT).step(2) do |i|
  n += (i - 2)
  4.times do 
    n += (i - 2) 
    result += n
    p n
  end
end

p result
