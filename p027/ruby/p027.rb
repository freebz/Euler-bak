#!/usr/bin/ruby

require('mathn')

MIN = -999
MAX = 999

max_n = 0
max_a = 0
max_b = 0

(MIN..MAX).each do |a|
  (MIN..MAX).each do |b|

    n = 0
    while true
      if (a+b+1).prime? and b.prime?
        if (n*n + n*a + b).prime?
          n += 1
        else
          break
        end
      else
        break
      end
    end

    if (n > max_n)
      max_n = n
      max_a = a
      max_b = b
    end

  end
end

p max_a * max_b
