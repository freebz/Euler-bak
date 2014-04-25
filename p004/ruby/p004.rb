#!/usr/bin/ruby

LIMIT = 999

p (1..LIMIT).map { |i|
  (i..LIMIT).map { |j|
    k = i * j
  }
}.flatten.select{ |i|
  i == i.to_s.reverse.to_i
}.max


