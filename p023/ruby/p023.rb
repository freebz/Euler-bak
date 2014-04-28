#!/usr/bin/ruby

require 'mathn'

LIMIT = 28123

abundants = (1..LIMIT).select{|i|
  i.prime_division.reduce(1){|i, j|
    i * j.last.downto(0).reduce(0){|a, b|
      a + j.first ** b
    }
  } - i > i
}

p ((1..LIMIT).to_a - abundants.map{ |a|
  abundants.map{ |b|
    a + b
  }
}.flatten).reduce(:+)
