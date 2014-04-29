#!/usr/bin/ruby

require('mathn')

MIN = -999
MAX = 999

max, max_a, max_b = 0, nil, nil

Prime.each(1000) do |b|
  (MIN..MAX).step(2) do |a|

    n = (1..Float::INFINITY).lazy.take_while{|n|
      (n*n + n*a + b).prime?
    }.force.length

    max, max_a, max_b = n, a, b if n > max

  end
end

puts max_a * max_b
