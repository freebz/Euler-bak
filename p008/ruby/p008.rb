#!/usr/bin/ruby

UNIT = 5

File.open("data.txt") do |f|
  p f.read.delete("\n").split(//).map(&:to_i).each_cons(UNIT).map{|i| i.reduce(:*)}.max
end
