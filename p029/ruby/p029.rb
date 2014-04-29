#!/usr/bin/ruby

LIMIT = 100

p (2..LIMIT).to_a.repeated_permutation(2).map{|i|
  i[0] ** i[1]
}.uniq.length
