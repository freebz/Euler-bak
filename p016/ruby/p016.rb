#!/usr/bin/ruby

LIMIT = 1000

p (2 ** LIMIT).to_s.split(//).map(&:to_i).reduce(:+)
