#!/usr/bin/ruby

LIMIT = 5

p (10..9 ** LIMIT * LIMIT).select{|i| 
  i == i.to_s.split(//).map(&:to_i).reduce(0){|a, b|
    a + b ** LIMIT
  }
}.reduce(:+)
