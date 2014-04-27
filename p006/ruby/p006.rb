#!/usr/bin/ruby

LIMIT = 100

p (1..LIMIT).reduce(:+)**2 - (1..LIMIT).map{|i| i**2}.reduce(:+)
