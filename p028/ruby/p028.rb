#!/usr/bin/ruby

LIMIT = 1001

result, n, step = 1, 1, 0

(3..LIMIT).step(2) do |i|
  step += 2
  4.times do 
    n += step
    result += n
  end
end

p result
