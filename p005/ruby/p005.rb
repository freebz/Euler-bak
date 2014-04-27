#!/usr/bin/ruby

LIMIT = 20

p (1..Float::INFINITY).lazy.drop_while{ |i|
 (1..LIMIT).any? { |j|
   i % j != 0
 }
}.take(1).force[0]

