#!/usr/bin/ruby

LIMIT = 1000

p (1..LIMIT).map { |a|
  (a..LIMIT).map { |b|
    [a, b, LIMIT - a - b]
  }
}.flatten(1).select{|a, b, c|
  a**2 + b**2 == c**2
}.first.reduce(:*)
